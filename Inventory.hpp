#ifndef __INVENTORY__
#define __INVENTORY__

#include "GlyphContainer.hpp"

class Inventory : public GlyphContainer {
public:
  Inventory(int size, sf::Vector2i layout,
            const sf::Texture& text, GlyphContainer* curr_object);
  ~Inventory();

  Glyph rotate(Glyph g);

private:
  GlyphContainer* _current_object;
};

#endif
