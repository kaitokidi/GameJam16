#include "SceneGame.hpp"

SceneGame::SceneGame(Game *g, sf::RenderWindow *w) :
    Scene(g, w, sceneTypes::testScene, "end"),
    _background(TEXTURETPATH + std::string("game.png"),
                TEXTURETPATH + std::string("orc.png"),
                TEXTURETPATH + std::string("other_orc.png"),
                sf::Vector2f(233,20), sf::Vector2f(455,20))

    // _recipes(Resources::talkBox),
    // _actualGlyph(GlyphContainer(sf::Vector2i(1,1),Resources::talkBox),GlyphContainer(sf::Vector2i(1,1),Resources::talkBox)),
    // _spelling(InputGlyphs(Resources::talkBox, &_actualGlyph.first),InputGlyphs(Resources::talkBox, &_actualGlyph.second)),
    // _inventory(Inventory(Resources::talkBox, &_actualGlyph.first),Inventory(Resources::talkBox, &_actualGlyph.second)),
    // _finalRitual(ObjectiveGlyphs(Resources::talkBox),ObjectiveGlyphs(Resources::talkBox))
{
    // _actualGlyph.first.setPosition(sf::Vector2f(153, 172));
    // _actualGlyph.first.setSize(sf::Vector2f(75, 75));

    // _actualGlyph.second.setPosition(sf::Vector2f(672, 172));
    // _actualGlyph.second.setSize(sf::Vector2f(75, 75));

    // _spelling.first.setPosition(sf::Vector2f(20, 80));
    // _spelling.first.setSize(sf::Vector2f(208, 87));
    // _spelling.first.preserveHeight(true);

    // _spelling.second.setPosition(sf::Vector2f(672, 80));
    // _spelling.second.setSize(sf::Vector2f(208, 87));
    // _spelling.second.preserveHeight(true);

    // _inventory.first.setSize(sf::Vector2f(160,240));
    // _inventory.first.setPosition(sf::Vector2f(68,305));

    // _inventory.second.setSize(sf::Vector2f(160,240));
    // _inventory.second.setPosition(sf::Vector2f(672,305));

    // _recipes.populate();

    // _chamans.first.setParameters(TEXTURETPATH + std::string("orc.png"), sf::Vector2f(20,172));
    // _chamans.second.setParameters(TEXTURETPATH + std::string("other_orc.png"), sf::Vector2f(757,172));

    // _finalRitual.first.setSize(sf::Vector2f(208,55));
    // _finalRitual.first.setPosition(sf::Vector2f(20,20));

    // _finalRitual.second.setSize(sf::Vector2f(208,55));
    // _finalRitual.second.setPosition(sf::Vector2f(672,20));

    // _recipes.setPosition(sf::Vector2f(233, 305));
    // _recipes.setSize(sf::Vector2f(434, 270));

    // for ( int i = 0; i < 3; ++i){
    //     int r = random()%3;
    //     GlyphID id = _recipes.getGlyphIDByIndex(r);
    //     _finalRitual.first.add(id);
    //     _finalRitual.second.add(id);
    // }

    // for ( int i = 0; i < 2; ++i){
    //     int r = random()%2 +3;
    //     GlyphID id = _recipes.getGlyphIDByIndex(r);
    //     //_finalRitual.first.add(id);
    //     //_finalRitual.second.add(id);
    // }

    // GlyphID id = _recipes.getGlyphIDByIndex(5);
    // _finalRitual.first.add(id);
    // _finalRitual.second.add(id);

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

    _chamans.first.update(deltaTime);
    _chamans.second.update(deltaTime);

    // if(_actualGlyph.first.empty() || _actualGlyph.first.glyphNone()){
    //     if(InputManager::action(InputAction::firstAction)){
    //         _spelling.first.discard();
    //         _chamans.first.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstUp)){
    //         _spelling.first.add(GlyphID::glyphUP);

    //         GlyphID gid = _recipes.build(_spelling.first.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.first.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::firstDown)){
    //         _spelling.first.add(GlyphID::glyphDOWN);

    //         GlyphID gid = _recipes.build(_spelling.first.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.first.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::firstLeft)){
    //         _spelling.first.add(GlyphID::glyphLEFT);

    //         GlyphID gid = _recipes.build(_spelling.first.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.first.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::firstRight)){
    //         _spelling.first.add(GlyphID::glyphRIGHT);

    //         GlyphID gid = _recipes.build(_spelling.first.getVectorGlyphID());
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

    //         _finalRitual.first.active(_actualGlyph.first.getGlyphID() );
    //         _actualGlyph.first.pop();

    //         _chamans.first.changeState(status::action);
    //         SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstDown)){
    //         _inventory.first.add(_actualGlyph.first.getGlyphID() );

    //         _actualGlyph.first.pop();
    //         _chamans.first.changeState(status::action);
    //         SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::firstLeft)){
    //         _spelling.first.add(_actualGlyph.first.getGlyphID());
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
    //         _spelling.second.discard();
    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondUp)){
    //         _spelling.second.add(GlyphID::glyphUP);

    //         GlyphID gid = _recipes.build(_spelling.second.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.second.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::secondDown)){
    //         _spelling.second.add(GlyphID::glyphDOWN);

    //         GlyphID gid = _recipes.build(_spelling.second.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.second.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::secondLeft)){
    //         _spelling.second.add(GlyphID::glyphLEFT);

    //         GlyphID gid = _recipes.build(_spelling.second.getVectorGlyphID());
    //         if(gid != GlyphID::glyph_none){
    //             _actualGlyph.second.add(gid);
    //         }
    //     } else if(InputManager::action(InputAction::secondRight)){
    //         _spelling.second.add(GlyphID::glyphRIGHT);

    //         GlyphID gid = _recipes.build(_spelling.second.getVectorGlyphID());
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
    //         _finalRitual.second.active(_actualGlyph.second.getGlyphID() );
    //         _actualGlyph.second.pop();

    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondDown)){
    //         _inventory.second.add(_actualGlyph.second.getGlyphID() );
    //         _actualGlyph.second.pop();

    //         _chamans.second.changeState(status::action);
    //          SoundManager::playSound("action");
    //     } else if(InputManager::action(InputAction::secondRight)){
    //         _spelling.second.add(_actualGlyph.second.getGlyphID());
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
    // if(_finalRitual.first.complete()){
    //     changeScene("endOrc");
    // }
    // if(_finalRitual.second.complete()){
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

    _chamans.first.draw(target);
    _chamans.second.draw(target);

    gm.draw(target);
}

void SceneGame::resizing() {}
