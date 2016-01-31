#include "SceneGame.hpp"
#include <iostream>

SceneGame::SceneGame(Game *g, sf::RenderWindow *w) :
  gm(),
  Scene(g, w, sceneTypes::testScene, "end"),
  _recipes(&gm),
  _background(TEXTURETPATH + std::string("game.png"),
              TEXTURETPATH + std::string("garrapato_vermell.png"),
              TEXTURETPATH + std::string("garrapato_verd.png"),
              sf::Vector2f(233,20), sf::Vector2f(455,20)),
  _intermediate(GlyphContainer(&gm, sf::Vector2u(1,1), Resources::talkBox),
                GlyphContainer(&gm, sf::Vector2u(1,1), Resources::talkBox)),
  _input(GlyphContainer(&gm, sf::Vector2u(8,1), Resources::talkBox),
         GlyphContainer(&gm, sf::Vector2u(8,1), Resources::talkBox)),
  _inventory(GlyphContainer(&gm, sf::Vector2u(2,3), Resources::talkBox),
             GlyphContainer(&gm, sf::Vector2u(2,3), Resources::talkBox)),
  _objective(GlyphContainer(&gm, sf::Vector2u(6,1), Resources::talkBox),
             GlyphContainer(&gm, sf::Vector2u(6,1), Resources::talkBox))
{
  _intermediate.first.setPosition(sf::Vector2f(153, 172));
  _intermediate.first.setSize(sf::Vector2f(75, 75));

  _intermediate.second.setPosition(sf::Vector2f(672, 172));
  _intermediate.second.setSize(sf::Vector2f(75, 75));

  _input.first.setPosition(sf::Vector2f(20, 80));
  _input.first.setSize(sf::Vector2f(208, 87));
  _input.first.preserveHeight(true);

  _input.second.setPosition(sf::Vector2f(672, 80));
  _input.second.setSize(sf::Vector2f(208, 87));
  _input.second.preserveHeight(true);

  _inventory.first.setSize(sf::Vector2f(160,240));
  _inventory.first.setPosition(sf::Vector2f(68,305));

  _inventory.second.setSize(sf::Vector2f(160,240));
  _inventory.second.setPosition(sf::Vector2f(672,305));

  _recipes.populate();

  _shamans.first.setParameters(TEXTURETPATH + std::string("orc.png"), sf::Vector2f(20,172));
  _shamans.second.setParameters(TEXTURETPATH + std::string("orca.png"), sf::Vector2f(757,172));

  _objective.first.setSize(sf::Vector2f(208,55));
  _objective.first.setPosition(sf::Vector2f(20,20));

  _objective.second.setSize(sf::Vector2f(208,55));
  _objective.second.setPosition(sf::Vector2f(672,20));

  _objective.first.preserveHeight(true);
  _objective.second.preserveHeight(true);

  _recipes.setPosition(sf::Vector2f(233, 305));
  _recipes.setSize(sf::Vector2f(434, 270));

  for ( int i = 0; i < 3; ++i){
    int r = random()%3;
    Maybe<Glyph> result = _recipes.get(r);
    if (result.valid) {
      _objective.first.add(result.value.clone());
      _objective.second.add(result.value.clone());
      result.value.destroy();
    }
  }

  for ( int i = 0; i < 2; ++i){
    int r = random()%2 +3;
    Maybe<Glyph> result = _recipes.get(r);
    if (result.valid) {
      _objective.first.add(result.value.clone());
      _objective.second.add(result.value.clone());
      result.value.destroy();
    }
  }

  Maybe<Glyph> result = _recipes.get(5);
  if (result.valid) {
    _objective.first.add(result.value.clone());
    _objective.second.add(result.value.clone());
    result.value.destroy();
  }

  _view = _window->getDefaultView();
  _next = "end";
  initView(&_view, sf::Vector2i(900,600));
  _nextInputUpdate = 0.0f;
}

SceneGame::~SceneGame() {}

void SceneGame::init(sf::Vector2f aux) {}

void SceneGame::update(float deltaTime){
  _background.update(deltaTime);

  _shamans.first.update(deltaTime);
  _shamans.second.update(deltaTime);

  if(_intermediate.first.empty()){
    if(InputManager::action(InputAction::firstAction)){
      _input.first.discard();
      _shamans.first.changeState(status::action);
      SoundManager::playSound("action");
    } else if(InputManager::action(InputAction::firstUp)){
      _input.first.add(gm.create(GlyphType::glyph_up));
    } else if(InputManager::action(InputAction::firstDown)){
      _input.first.add(gm.create(GlyphType::glyph_down));
    } else if(InputManager::action(InputAction::firstLeft)){
      _input.first.add(gm.create(GlyphType::glyph_left));
    } else if(InputManager::action(InputAction::firstRight)){
      _input.first.add(gm.create(GlyphType::glyph_right));
    }

    Maybe<Glyph> result = _recipes.build(_input.first.getArray());
    if(result.valid){
      std::cout << "hola" << std::endl;
      _intermediate.first.add(result.value.clone());
    }
  } else {
    // if(InputManager::action(InputAction::firstAction)){
    //   _inventory.first.rotate();
    //   _shamans.first.changeState(status::action);
    //   SoundManager::playSound("action");
    // } else if(InputManager::action(InputAction::firstUp)){

    //   _objective.first.active(_actualGlyph.first.getGlyphID() );
    //   _actualGlyph.first.pop();

    //   _shamans.first.changeState(status::action);
    //   SoundManager::playSound("action");
    // } else if(InputManager::action(InputAction::firstDown)){
    //   _inventory.first.add(_actualGlyph.first.getGlyphID() );

    //         _actualGlyph.first.pop();
    //         _shamans.first.changeState(status::action);
    //         SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstLeft)){
    //         _input.first.add(_actualGlyph.first.getGlyphID());
    //         _inventory.first.firstToActualGlyph();
    //         _actualGlyph.first.pop();

    //         SoundManager::playSound("action");
    //         _shamans.first.changeState(status::action);
    //     } else if(InputManager::action(InputAction::firstRight)){
    //         _inventory.second.attackWith(_actualGlyph.first.getGlyphID());
    //         _actualGlyph.first.pop();

    //         _shamans.first.changeState(status::attack);
    //         SoundManager::playSound("attack");
    //         //moveEffects.push_back(new MoveEffect(sf::Vector2i(153,172), sf::Vector2i(672,305), Resources::key));
    //     }
  }

  if(_intermediate.second.empty()){
    if(InputManager::action(InputAction::secondAction)){
      _input.second.discard();
      _shamans.second.changeState(status::action);
      SoundManager::playSound("action");
    } else if(InputManager::action(InputAction::secondUp)){
      _input.second.add(gm.create(GlyphType::glyph_up));
    } else if(InputManager::action(InputAction::secondDown)){
      _input.second.add(gm.create(GlyphType::glyph_down));
    } else if(InputManager::action(InputAction::secondLeft)){
      _input.second.add(gm.create(GlyphType::glyph_left));
    } else if(InputManager::action(InputAction::secondRight)){
      _input.second.add(gm.create(GlyphType::glyph_right));
    }

    Maybe<Glyph> result = _recipes.build(_input.second.getArray());
    if(result.valid){
      _intermediate.second.add(result.value.clone());
    }
  } else {
    //     if(InputManager::action(InputAction::secondAction)){
    //         _inventory.second.rotate();
    //         _shamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondUp)){
    //         _objective.second.active(_intermediate.second.getGlyphID() );
    //         _intermediate.second.pop();

    //         _shamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondDown)){
    //         _inventory.second.add(_intermediate.second.getGlyphID() );
    //         _intermediate.second.pop();

    //         _shamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondRight)){
    //         _input.second.add(_intermediate.second.getGlyphID());
    //         _intermediate.second.pop(); //only if first To Actual glyph above does not overrite it
    //         _inventory.second.firstToActualGlyph();

    //         _shamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondLeft)){
    //         _inventory.first.attackWith(_intermediate.second.getGlyphID());
    //         _intermediate.second.pop();

    //         _shamans.second.changeState(status::attack);
    //         SoundManager::playSound("attack");
    //     }
    // }
    // if(_objective.first.complete()){
    //     changeScene("endOrc");
    // }
    // if(_objective.second.complete()){
    //     changeScene("endCham");
  }
}

void SceneGame::processInput(){
  InputManager::update(_window);
}

void SceneGame::render(sf::RenderTarget *target) {
  _background.draw(target);

  _shamans.first.draw(target);
  _shamans.second.draw(target);

  _intermediate.first.draw(target);
  _intermediate.second.draw(target);

  _input.first.draw(target);
  _input.second.draw(target);

  _inventory.first.draw(target);
  _inventory.second.draw(target);

  _objective.first.draw(target);
  _objective.second.draw(target);

  gm.draw(target);
}
