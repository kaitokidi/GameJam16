#include "SceneTest.hpp"
#include "Resources.hpp"

SceneTest::SceneTest(Game *g, sf::RenderWindow *w, std::string next, std::string text) : Scene(g, w, sceneTypes::testScene, "test")  {
    _view = _window->getDefaultView();
    _next = next;
    _text.setFont(Resources::pauseMenuFont);
    _text.setString(text);
}

SceneTest::~SceneTest() {}

void SceneTest::init(sf::Vector2f aux) {
    _texture = Resources::key;
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getLocalBounds().width/2, _sprite.getLocalBounds().height/2);
    _sprite.setPosition(_window->getSize().x/2, _window->getSize().y/2);
    _text.setOrigin(_text.getGlobalBounds().width/2, _text.getGlobalBounds().height/2);
    _text.setPosition(_sprite.getPosition().x, _sprite.getPosition().y + _sprite.getGlobalBounds().height);
}

void SceneTest::update(float deltaTime) {}

void SceneTest::processInput(){
    sf::Event event;
    while(_window->pollEvent(event)){
        if (event.type == sf::Event::Closed) {_window->close(); exit(0);}
        if (event.type == sf::Event::KeyReleased) changeScene(_next);
    }
    InputManager::update();
}

void SceneTest::render(sf::RenderTarget *target){
    target->draw(_sprite);
    target->draw(_text);
}

void SceneTest::resizing() {}
