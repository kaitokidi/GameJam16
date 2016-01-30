#include "SceneGame.hpp"

SceneGame::SceneGame(Game *g, sf::RenderWindow *w) :
    Scene(g, w, sceneTypes::testScene, "end") ,
    _background(TEXTURETPATH + std::string("game.png"), TEXTURETPATH + std::string("orc.png"), TEXTURETPATH + std::string("other_orc.png"), sf::Vector2f(233,20), sf::Vector2f(455,20)),
    //_recipes(Resources::recipesBg),
    _actualGlyph(GlyphContainer(1,sf::Vector2i(1,1),Resources::talkBox),GlyphContainer(1,sf::Vector2i(1,1),Resources::talkBox)),
    _spelling(InputGlyphs(Resources::spellingBgOrc, &_actualGlyph.first),InputGlyphs(Resources::actualBgCham, &_actualGlyph.second)),
    _inventory(Inventory(Resources::inventoryBgOrc, &_actualGlyph.first),Inventory(Resources::actualBgCham, &_actualGlyph.second)),
    _finalRitual(ObjectiveGlyphs(Resources::objectiveBg),ObjectiveGlyphs(Resources::actualBgCham))
{
  _actualGlyph.first.setPosition(sf::Vector2f(153, 172));
  _actualGlyph.first.setSize(sf::Vector2f(75, 75));

  _actualGlyph.second.setPosition(sf::Vector2f(677, 172));
  _actualGlyph.second.setSize(sf::Vector2f(75, 75));

  _spelling.first.setPosition(sf::Vector2f(20, 80));
  _spelling.first.setSize(sf::Vector2f(208, 87));

  _spelling.second.setPosition(sf::Vector2f(677, 80));
  _spelling.second.setSize(sf::Vector2f(208, 87));

  _inventory.first.setSize(sf::Vector2f(198,260));
  _inventory.first.setPosition(sf::Vector2f(25,310));

  _inventory.second.setSize(sf::Vector2f(198,260));
  _inventory.second.setPosition(sf::Vector2f(682,310));

  _chamans.first.setParameters(TEXTURETPATH + std::string("orc.png"), sf::Vector2f(20,172));
  _chamans.second.setParameters(TEXTURETPATH + std::string("other_orc.png"), sf::Vector2f(757,172));


    _finalRitual.first.setSize(sf::Vector2f(208,55));
    _finalRitual.first.setPosition(sf::Vector2f(20,20));

    _finalRitual.second.setSize(sf::Vector2f(208,55));
    _finalRitual.second.setPosition(sf::Vector2f(677,20));

  _view = _window->getDefaultView();
  _next = "end";
  _inventory.first.init();
  _inventory.second.init();
  _view = _window->getDefaultView();
}

SceneGame::~SceneGame(){

}

void SceneGame::init(sf::Vector2f aux){

}

void SceneGame::update(float deltaTime){

    _background.update(deltaTime);

    _chamans.first.update(deltaTime);
    _chamans.second.update(deltaTime);

    if(_actualGlyph.first.empty()){
        if(InputManager::action(InputAction::firstAction)){
            _spelling.first.discard();
            _chamans.first.changeState(status::action);
        } else if(InputManager::action(InputAction::firstUp)){
            _spelling.first.add(glyphUP);
        } else if(InputManager::action(InputAction::firstDown)){
            _spelling.first.add(glyphDOWN);
        } else if(InputManager::action(InputAction::firstLeft)){
            _spelling.first.add(glyphLEFT);
        } else if(InputManager::action(InputAction::firstRight)){
            _spelling.first.add(glyphRIGHT);
        }
    } else {
        if(InputManager::action(InputAction::firstAction)){
            _inventory.first.rotate();
            _chamans.first.changeState(status::action);
             SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::firstUp)){
            _finalRitual.first.add(_actualGlyph.first.getGlyphID() );
            _chamans.first.changeState(status::action);
            SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::firstDown)){
            _inventory.first.add(_actualGlyph.first.getGlyphID() );
            _chamans.first.changeState(status::action);
            SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::firstLeft)){
            _spelling.first.add(_actualGlyph.first.getGlyphID());
            //_inventory.first.firstToActualGlyph();
            _chamans.first.changeState(status::action);
            SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::firstRight)){
            //_inventory.second.attackWith(_actualGlyph.first.getGlyphID());
            _chamans.first.changeState(status::attack);
            SoundManager::playSound("attack");
        }
    }

    if(_actualGlyph.second.empty()){
        if(InputManager::action(InputAction::secondAction)){
            _spelling.second.discard();
            _chamans.second.changeState(status::action);
        } else if(InputManager::action(InputAction::secondUp)){
            _spelling.second.add(glyphUP);
        } else if(InputManager::action(InputAction::secondDown)){
            _spelling.second.add(glyphDOWN);
        } else if(InputManager::action(InputAction::secondLeft)){
            _spelling.second.add(glyphLEFT);
        } else if(InputManager::action(InputAction::secondRight)){
            _spelling.second.add(glyphRIGHT);
        }
    } else {
        if(InputManager::action(InputAction::secondAction)){
            _inventory.second.rotate();
            _chamans.second.changeState(status::action);
            SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::secondUp)){
            _finalRitual.second.add(_actualGlyph.second.getGlyphID() );
            _chamans.second.changeState(status::action);
            SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::secondDown)){
            _inventory.second.add(_actualGlyph.second.getGlyphID() );
            _chamans.second.changeState(status::action);
            SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::secondRight)){
            _spelling.second.add(_actualGlyph.second.getGlyphID());
            //_inventory.second.firstToActualGliph();
            _chamans.second.changeState(status::action);
            SoundManager::playSound("action");

        } else if(InputManager::action(InputAction::secondLeft)){
            //_inventory.first.attackWith(_actualGlyph.second.getGliph());
            _chamans.second.changeState(status::attack);
            SoundManager::playSound("attack");
        }
    }

    if(_finalRitual.first.complete()){
        changeScene("endOrc");
    }
    if(_finalRitual.second.complete()){
        changeScene("endCham");
    }
}

void SceneGame::processInput(){
    InputManager::update();
    sf::Event event;
    while(_window->pollEvent(event)){

        if (event.type == sf::Event::Closed) {_window->close(); exit(0);}
        if (event.type == sf::Event::MouseButtonPressed) {_window->close(); exit(0);}
    }
}

void SceneGame::render(sf::RenderTarget *target){
    _background.draw(target);

    _chamans.first.draw(target);
    _chamans.second.draw(target);

    //_recipes.draw(target);

    _inventory.first.draw(target);
    _inventory.second.draw(target);

    _spelling.first.draw(target);
    _spelling.second.draw(target);

    _finalRitual.first.draw(target);
    _finalRitual.second.draw(target);

    _actualGlyph.first.draw(target);
    _actualGlyph.second.draw(target);
}

void SceneGame::resizing() {

}


