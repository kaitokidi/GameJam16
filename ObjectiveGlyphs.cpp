#include "ObjectiveGlyphs.hpp"

ObjectiveGlyphs::ObjectiveGlyphs(const sf::Texture& text) :
  GlyphContainer(10, sf::Vector2i(10, 1), text)
{
  _gcounter = 10;
}

ObjectiveGlyphs::~ObjectiveGlyphs() {}

void ObjectiveGlyphs::add(Glyph g) {
  add(g.getID());
}

void ObjectiveGlyphs::add(GlyphID gid) {
  for (auto g : _glyphs) {
    if (gid == g.getID()) {
      if(!g.isComplete()){
        g.setComplete();
        _gcounter--;
        return;
      }
    }
  }
}

bool ObjectiveGlyphs::complete() {
  return _gcounter == 0;
}
