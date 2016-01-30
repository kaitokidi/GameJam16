#ifndef SCENEGAME_HPP
#define SCENEGAME_HPP
#include "Player.h"
#include "Scene.hpp"
#include "utils.hpp"
#include "Background.h"
#include "Resources.hpp"
#include "Inventory.hpp"
#include "InputGlyphs.hpp"
#include "GlyphContainer.hpp"
#include "ObjectiveGlyphs.hpp"

class SceneGame : public Scene {

public:
    SceneGame(Game* g, sf::RenderWindow* w);

    ~SceneGame();

    void init(sf::Vector2f aux = sf::Vector2f(0,0));

    void update(float deltaTime);

    void processInput();

    void render(sf::RenderTarget* target);

    void resizing();

private:

    std::string _next;
    float _nextInputUpdate;

    Background _background;
    std::pair<Player,Player> _chamans;

    //GlyphContainer _recipes;
    std::pair<Inventory,Inventory> _inventory;
    std::pair<InputGlyphs,InputGlyphs> _spelling;
    std::pair<GlyphContainer,GlyphContainer> _actualGlyph;
    std::pair<ObjectiveGlyphs,ObjectiveGlyphs> _finalRitual;



};

#endif // SCENEGAME_HPP
