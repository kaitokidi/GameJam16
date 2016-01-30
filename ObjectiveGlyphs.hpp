#ifndef __OBJECTIVEGLYPHS__
#define __OBJECTIVEGLYPHS__

#include "GlyphContainer.hpp"

class ObjectiveGlyphs : public GlyphContainer {
public:
  ObjectiveGlyphs(int size, sf::Vector2i layout, const sf::Texture& text);
  ~ObjectiveGlyphs();

  void add(Glyph g);
private:
};

#endif
