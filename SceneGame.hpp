#ifndef SCENEGAME_HPP
#define SCENEGAME_HPP
#include "Player.h"
#include "Scene.hpp"
#include "utils.hpp"
#include "Background.h"
#include "Resources.hpp"
#include "MoveEffect.hpp"
#include "GlyphManager.hpp"

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
  GlyphManager gm;

  Background _background;
  std::pair<Player,Player> _chamans;

  // Recipies _recipes;
  // std::pair<Inventory,Inventory> _inventory;
  // std::pair<InputGlyphs,InputGlyphs> _spelling;
  // std::pair<GlyphContainer,GlyphContainer> _actualGlyph;
  // std::pair<ObjectiveGlyphs,ObjectiveGlyphs> _finalRitual;

  std::vector<MoveEffect* > moveEffects;
};

#endif // SCENEGAME_HPP
