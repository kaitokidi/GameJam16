#include "SceneGame.hpp"

SceneGame::SceneGame(Game *g, sf::RenderWindow *w) :
    Scene(g, w, sceneTypes::testScene, "end"),
    _background(TEXTURETPATH + std::string("game.png"),
                TEXTURETPATH + std::string("orc.png"),
                TEXTURETPATH + std::string("other_orc.png"),
                sf::Vector2f(233,20), sf::Vector2f(455,20)),
    _intermediate(GlyphContainer(sf::Vector2i(1,1), Resources::talkBox),
                  GlyphContainer(sf::Vector2i(1,1), Resources::talkBox)),
    _input(GlyphContainer(sf::Vector2i(8,1), Resources::talkBox),
           GlyphContainer(sf::Vector2i(8,1), Resources::talkBox)),
    _inventory(GlyphContainer(sf::Vector2i(2,3), Resources::talkBox),
               GlyphContainer(sf::Vector2i(2,3), Resources::talkBox)),
    _objective(GlyphContainer(sf::Vector2i(6,1), Resources::talkBox),
               GlyphContainer(sf::Vector2i(6,1), Resources::talkBox))
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

    // _recipes.populate();

    _shamans.first.setParameters(TEXTURETPATH + std::string("orc.png"), sf::Vector2f(20,172));
    _shamans.second.setParameters(TEXTURETPATH + std::string("other_orc.png"), sf::Vector2f(757,172));

    _objective.first.setSize(sf::Vector2f(208,55));
    _objective.first.setPosition(sf::Vector2f(20,20));

    _objective.second.setSize(sf::Vector2f(208,55));
    _objective.second.setPosition(sf::Vector2f(672,20));

    // _recipes.setPosition(sf::Vector2f(233, 305));
    // _recipes.setSize(sf::Vector2f(434, 270));

    // for ( int i = 0; i < 3; ++i){
    //     int r = random()%3;
    //     GlyphID id = _recipes.getGlyphIDByIndex(r);
    //     _objective.first.add(id);
    //     _objective.second.add(id);
    // }

    // for ( int i = 0; i < 2; ++i){
    //     int r = random()%2 +3;
    //     GlyphID id = _recipes.getGlyphIDByIndex(r);
    //     //_objective.first.add(id);
    //     //_objective.second.add(id);
    // }

    // GlyphID id = _recipes.getGlyphIDByIndex(5);
    // _objective.first.add(id);
    // _objective.second.add(id);

    _view = _window->getDefaultView();
    _next = "end";
    // _inventory.first.init();
    // _inventory.second.init();
    // //_view = _window->getDefaultView();
    // // initView(&_view, sf::Vector2i(_window->getSize().x,_window->getSize().y));
    initView(&_view, sf::Vector2i(900,600));
    _nextInputUpdate = 0.0f;
}

SceneGame::~SceneGame() {}

void SceneGame::init(sf::Vector2f aux) {}

void SceneGame::update(float deltaTime){
    _background.update(deltaTime);

    _shamans.first.update(deltaTime);
    _shamans.second.update(deltaTime);

    // if(_actualGlyph.first.empty() || _actualGlyph.first.glyphNone()){
    //     if(InputManager::action(InputAction::firstAction)){
    //         _input.first.discard();
    //         _chamans.first.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstUp)){
    //         _input.first.add(GlyphID::glyphUP);

    //         GlyphID gid = _recipes.build(_input.first.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.first.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::firstDown)){
    //         _input.first.add(GlyphID::glyphDOWN);

    //         GlyphID gid = _recipes.build(_input.first.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.first.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::firstLeft)){
    //         _input.first.add(GlyphID::glyphLEFT);

    //         GlyphID gid = _recipes.build(_input.first.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.first.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::firstRight)){
    //         _input.first.add(GlyphID::glyphRIGHT);

    //         GlyphID gid = _recipes.build(_input.first.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.first.add(gid);
    //         }
    //     }
    // } else {
    //     if(InputManager::action(InputAction::firstAction)){
    //         _inventory.first.rotate();
    //         _chamans.first.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstUp)){

    //         _objective.first.active(_actualGlyph.first.getGlyphID() );
    //         _actualGlyph.first.pop();

    //         _chamans.first.changeState(status::action);
    //         SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstDown)){
    //         _inventory.first.add(_actualGlyph.first.getGlyphID() );

    //         _actualGlyph.first.pop();
    //         _chamans.first.changeState(status::action);
    //         SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstLeft)){
    //         _input.first.add(_actualGlyph.first.getGlyphID());
    //         _inventory.first.firstToActualGlyph();
    //         _actualGlyph.first.pop();

    //         SoundManager::playSound("action");
    //         _chamans.first.changeState(status::action);
    //     } else if(InputManager::action(InputAction::firstRight)){
    //         _inventory.second.attackWith(_actualGlyph.first.getGlyphID());
    //         _actualGlyph.first.pop();

    //         _chamans.first.changeState(status::attack);
    //         SoundManager::playSound("attack");
    //         //moveEffects.push_back(new MoveEffect(sf::Vector2i(153,172), sf::Vector2i(672,305), Resources::key));
    //     }
    // }

    // if(_actualGlyph.second.empty()){
    //     if(InputManager::action(InputAction::secondAction)){
    //         _input.second.discard();
    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondUp)){
    //         _input.second.add(GlyphID::glyphUP);

    //         GlyphID gid = _recipes.build(_input.second.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.second.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::secondDown)){
    //         _input.second.add(GlyphID::glyphDOWN);

    //         GlyphID gid = _recipes.build(_input.second.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.second.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::secondLeft)){
    //         _input.second.add(GlyphID::glyphLEFT);

    //         GlyphID gid = _recipes.build(_input.second.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.second.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::secondRight)){
    //         _input.second.add(GlyphID::glyphRIGHT);

    //         GlyphID gid = _recipes.build(_input.second.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.second.add(gid);
    //         }
    //     }
    // } else {
    //     if(InputManager::action(InputAction::secondAction)){
    //         _inventory.second.rotate();
    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondUp)){
    //         _objective.second.active(_actualGlyph.second.getGlyphID() );
    //         _actualGlyph.second.pop();

    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondDown)){
    //         _inventory.second.add(_actualGlyph.second.getGlyphID() );
    //         _actualGlyph.second.pop();

    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondRight)){
    //         _input.second.add(_actualGlyph.second.getGlyphID());
    //         _actualGlyph.second.pop(); //only if first To Actual glyph above does not overrite it
    //         _inventory.second.firstToActualGlyph();

    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondLeft)){
    //         _inventory.first.attackWith(_actualGlyph.second.getGlyphID());
    //         _actualGlyph.second.pop();

    //         _chamans.second.changeState(status::attack);
    //         SoundManager::playSound("attack");
    //     }
    // }
    // if(_objective.first.complete()){
    //     changeScene("endOrc");
    // }
    // if(_objective.second.complete()){
    //     changeScene("endCham");
    // }

    // for(auto it = moveEffects.begin(); it != moveEffects.end(); ++it){
    //     (*it)->update(deltaTime);
    //     if(! (*it)->alive()) {
    //         delete *it;
    //         moveEffects.erase(it);
    //     }
    // }
}

void SceneGame::processInput(){
    InputManager::update(_window);
}

void SceneGame::render(sf::RenderTarget *target){
    _background.draw(target);

    _shamans.first.draw(target);
    _shamans.second.draw(target);

    gm.draw(target);
}
