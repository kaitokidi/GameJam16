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
  Maybe<Glyph> build(const std::array<Glyph,30>& a);
private:
  std::array<std::array<Glyph,30>,6> _recipes;
  bool compare_arrays(const std::array<Glyph,30>& g, const std::array<Glyph,30>& j);
};

#endif
