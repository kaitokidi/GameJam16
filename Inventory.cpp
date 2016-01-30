#include "Inventory.hpp"

Inventory::Inventory(const sf::Texture& text, GlyphContainer* curr_object) :
  GlyphContainer(6, sf::Vector2i(2, 3), text),
  _current_object(curr_object)
{
  add(glyph11);
  add(glyph11);
  add(glyph11);
  add(glyph11);
  add(glyph11);
}

Inventory::~Inventory() {}

void Inventory::rotate() {
  // TODO
}
