#ifndef SCENEGAME_HPP
#define SCENEGAME_HPP
#include "Player.h"
#include "Scene.hpp"
#include "utils.hpp"
#include "Background.h"
#include "Resources.hpp"
#include "MoveEffect.hpp"

#include "GlyphContainer.hpp"
#include "GlyphManager.hpp"
#include "Recipes.hpp"

class SceneGame : public Scene {
public:
  SceneGame(Game* g, sf::RenderWindow* w);
  ~SceneGame();

  void init(sf::Vector2f aux = sf::Vector2f(0,0));
  void update(float deltaTime);
  void processInput();
  void render(sf::RenderTarget* target);

private:
  std::string _next;
  float _nextInputUpdate;
  GlyphManager gm;

  Background _background;
  std::pair<Player,Player> _shamans;

  Recipes _recipes;
  std::pair<GlyphContainer, GlyphContainer> _inventory;
  std::pair<GlyphContainer, GlyphContainer> _input;
  std::pair<GlyphContainer, GlyphContainer> _intermediate;
  std::pair<GlyphContainer, GlyphContainer> _objective;
};

#endif // SCENEGAME_HPP
