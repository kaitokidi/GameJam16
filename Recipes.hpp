#ifndef __RECIPES__
#define __RECIPES__

#include <array>

#include "GlyphContainer.hpp"

class Recipes : public GlyphContainer {
public:
  Recipes(GlyphManager *gm);
  ~Recipes();

  void populate();
  Glyph getGlyphByIndex(unsigned int index);
private:
};

#endif
