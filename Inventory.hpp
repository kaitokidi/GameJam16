#ifndef __INVENTORY__
#define __INVENTORY__

#include "GlyphContainer.hpp"

class Inventory : public GlyphContainer {
public:
  Inventory(const sf::Texture& text, GlyphContainer* curr_object);
  ~Inventory();

  void rotate();
  void attackWith(GlyphID gid);
  void firstToActualGlyph();

private:
  GlyphContainer* _current_object;
};

#endif
