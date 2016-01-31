#ifndef __RECIPES__
#define __RECIPES__

#include <array>

#include "GlyphContainer.hpp"
#include "Maybe.hpp"

class Recipes : public GlyphContainer {
public:
  Recipes(GlyphManager *n_gm);
  ~Recipes();

  void draw(sf::RenderTarget *rt);
  void populate();
private:
};

#endif
