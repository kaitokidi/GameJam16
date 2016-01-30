#ifndef __OBJECTIVEGLYPHS__
#define __OBJECTIVEGLYPHS__

#include "GlyphContainer.hpp"

class ObjectiveGlyphs : public GlyphContainer {
public:
  ObjectiveGlyphs(const sf::Texture& text);
  ~ObjectiveGlyphs();

  void add(Glyph g);
  void add(GlyphID gid);
  bool complete();
  void active(GlyphID gid);

private:
  unsigned int _gcounter;
};

#endif
