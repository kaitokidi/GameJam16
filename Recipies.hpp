#ifndef __RECIPIES__
#define __RECIPIES__

#include "GlyphContainer.hpp"

class Recipies : public GlyphContainer {
public:
  Recipies(const sf::Texture& text);
  ~Recipies();

  void populate();
private:
  std::vector<Glyph> 
};

#endif
