#ifndef __RECIPIES__
#define __RECIPIES__

#include "GlyphContainer.hpp"
#include "Recipe.hpp"

class Recipies : public GlyphContainer {
public:
  Recipies(const sf::Texture& text);
  ~Recipies();

  void populate();
private:
  std::vector<std::pair<Glyph,Recipe>> recipies;
};

#endif
