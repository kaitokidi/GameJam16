#ifndef SCENEGAME_HPP
#define SCENEGAME_HPP
#include "Scene.hpp"
#include "utils.hpp"

//TODO delete it when implemented
class Chaman;
class Background;
class GlyphContainer;

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
/*
    Background _background;
    std::pair<Chaman> _chamans;

    GlyphContainer _recipes;
    std::pair<Inventory> _inventory;
    std::pair<InputGlyphs> _spelling;
    std::pair<GlyphContainer> _actualGlyph;
    std::pair<ObjectiveGlyphs> _finalRitual;
*/


};

#endif // SCENEGAME_HPP
