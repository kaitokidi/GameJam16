#include "Game.hpp"
#include "SceneGame.hpp"

Game::Game() : _window(sf::VideoMode::getFullscreenModes()[0],"dhfgsadhkf", sf::Style::Close | sf::Style::Fullscreen) {
    _window.setFramerateLimit(FRAMERATE);
    _window.setKeyRepeatEnabled(false);

    _lastScene = nullptr;
    _currentScene = nullptr;

    initInput();
    Resources::load();
    SoundManager::load();

    SoundManager::setGlobalSoundVolumen(100.0f);
    SoundManager::setGlobalMusicVolumen(100.0f);
    SoundManager::playMusic("music");
    SoundManager::setLoop(true, "music");
}

Game::~Game() {
    for (auto it = _scenes.begin(); it != _scenes.end(); ++it) {
        delete it->second;
    }
}

void Game::start() {
    loadScenes();
    changeScene("test");

    while (_currentScene != nullptr) {
        _currentScene->run();
    }

    exit(0);
}

void Game::changeScene(std::string sceneName) {
    auto it = _scenes.find(sceneName);
    if (it == _scenes.end()) {

        if(sceneName == "previous" && _lastScene != nullptr){

            _currentScene = _lastScene;
            _lastScene = nullptr;

        } else {
            std::cout << "The selected scene does not exist: " << sceneName << std::endl;
            exit(EXIT_FAILURE);
        }
    } else {
        if (_currentScene != nullptr) {
            _lastScene = _currentScene;
            _currentScene->killScene();
        }
        _currentScene = (*it).second;
        _currentScene->init();
    }
}

void Game::loadScenes() {
    _scenes.insert(std::make_pair("test", new SceneTest(this, &_window, "test2")));
    _scenes.insert(std::make_pair("test2", new SceneGame(this, &_window)));
    _scenes.insert(std::make_pair("EndRed", new SceneTest(this, &_window, "previous", "First Player Won! Press a key to restart")));
    _scenes.insert(std::make_pair("EndGreen", new SceneTest(this, &_window, "previous", "Second Player Won! Press any key to restart")));
}

void Game::loadScene(std::string sceneName) {}

void Game::initInput() {
    InputManager::bind(InputAction::firstUp, sf::Keyboard::W);
    InputManager::bind(InputAction::firstDown, sf::Keyboard::S);
    InputManager::bind(InputAction::firstLeft, sf::Keyboard::A);
    InputManager::bind(InputAction::firstRight, sf::Keyboard::D);
    InputManager::bind(InputAction::firstAction, sf::Keyboard::Space);

    InputManager::bind(InputAction::secondUp, sf::Keyboard::Up);
    InputManager::bind(InputAction::secondDown, sf::Keyboard::Down);
    InputManager::bind(InputAction::secondLeft, sf::Keyboard::Left);
    InputManager::bind(InputAction::secondRight, sf::Keyboard::Right);
    InputManager::bind(InputAction::secondAction, sf::Keyboard::RShift);
}
