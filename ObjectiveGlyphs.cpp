#include "ObjectiveGlyphs.hpp"

ObjectiveGlyphs::ObjectiveGlyphs(const sf::Texture& text) :
  GlyphContainer(sf::Vector2i(10, 1), text)
{
  _gcounter = 10;
  preserve_height = true;
}

ObjectiveGlyphs::~ObjectiveGlyphs() {}

bool ObjectiveGlyphs::complete() {
    return _gcounter == 0;
}

void ObjectiveGlyphs::active(GlyphID gid) {
    for (auto g : _glyphs) {
        if (gid == g.getID() && (! g.isComplete()) ) {
            g.setComplete();
            return;
        }
    }
}
