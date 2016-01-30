#include "SceneGame.hpp"

SceneGame::SceneGame(Game *g, sf::RenderWindow *w) :
    Scene(g, w, sceneTypes::testScene, "end") ,
//    _background(std::string backgroundPath, std::string m1Path, std::string m2Path, sf::Vector2f m1Pos, sf::Vector2f m2Pos),
  //  _chamans((std::string Path, sf::Vector2f(0,0)),(std::string Path, sf::Vector2f(100,100))),
    //_recipes(Resources::recipesBg),
    _actualGlyph(GlyphContainer(1,sf::Vector2i(1,1),Resources::actualBgOrc),GlyphContainer(1,sf::Vector2i(1,1),Resources::actualBgCham)),
    _spelling(InputGlyphs(Resources::spellingBgOrc, &_actualGlyph.first),InputGlyphs(Resources::actualBgCham, &_actualGlyph.second)),
    _inventory(Inventory(Resources::inventoryBgOrc, &_actualGlyph.first),Inventory(Resources::actualBgCham, &_actualGlyph.second)),
    _finalRitual(ObjectiveGlyphs(Resources::objectiveBg),ObjectiveGlyphs(Resources::actualBgCham))
{

    _next = "end";
}

SceneGame::~SceneGame(){

}

void SceneGame::init(sf::Vector2f aux){

}

void SceneGame::update(float deltaTime){

    //_background.update(deltaTime);

    //_chamans.first.update(deltaTime);
   // _chamans.second.update(deltaTime);

    if(_actualGlyph.first.empty()){
        if(InputManager::action(InputAction::firstAction)){
            _spelling.first.discard();
            //_chamans.first.changeState(status::action);
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
            inventory.first.rotate();
            //_chamans.first.changeState(status::action);
        } else if(InputManager::action(InputAction::firstUp)){
            _finalRitual.first.add(_actualGlyph.first.getGliphID() );
            //_chamans.first.changeState(status::action);
        } else if(InputManager::action(InputAction::firstDown)){
            //inventory.first.add(_actualGlyph.first.getGliphID() );
            //_chamans.first.changeState(status::action);
        } else if(InputManager::action(InputAction::firstLeft)){
            _spelling.first.add(_actualGlyph.first.getGliphID());
           // inventory.first.firstToActualGliph();
           // _chamans.first.changeState(status::action);
        } else if(InputManager::action(InputAction::firstRight)){
            //inventory.second.attackWith(_actualGlyph.first.getGliphID());
            //_chamans.first.changeState(status::attack);
        }
    }

    if(_actualGlyph.second.empty()){
        if(InputManager::action(InputAction::secondAction)){
            _spelling.second.discard();
            //_chamans.second.changeState(status::action);
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
            inventory.second.rotate();
            //_chamans.second.changeState(status::action);
        } else if(InputManager::action(InputAction::secondUp)){
            _finalRitual.second.add(_actualGlyph.second.getGliphID() );
            //_chamans.second.changeState(status::action);
        } else if(InputManager::action(InputAction::secondDown)){
            //inventory.second.add(_actualGlyph.second.getGliphID() );
            //_chamans.second.changeState(status::action);
        } else if(InputManager::action(InputAction::secondLeft)){
            _spelling.second.add(_actualGlyph.second.getGliphID());
           // inventory.second.firstToActualGliph();
            //_chamans.second.changeState(status::action);
        } else if(InputManager::action(InputAction::secondRight)){
           // inventory.first.attackWith(_actualGlyph.second.getGliph());
            //_chamans.second.changeState(status::attack);
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
    }
}

void SceneGame::render(sf::RenderTarget *target){
/*
    _background.draw(target);

    _chamans.first.draw(target);
    _chamans.second.draw(target);

    _recipes.draw(target);

    _inventory.first.draw(target);
    _inventory.second.draw(target);

    _spelling.first.draw(target);
    _spelling.second.draw(target);

    _finalRitual.first.draw(target);
    _finalRitual.second.draw(target);

    _actualGlyph.first.draw(target);
    _actualGlyph.second.draw(target);
    */
}

void SceneGame::resizing() {

}


