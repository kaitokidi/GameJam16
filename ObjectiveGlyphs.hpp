#ifndef __OBJECTIVEGLYPHS__
#define __OBJECTIVEGLYPHS__

#include "GlyphContainer.hpp"

class ObjectiveGlyphs : public GlyphContainer {
public:
  ObjectiveGlyphs(const sf::Texture& text);
  ~ObjectiveGlyphs();

  void add(Glyph g);
  bool complete();
private:
};

#endif
