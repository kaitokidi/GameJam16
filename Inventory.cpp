#include "Inventory.hpp"

Inventory::Inventory(int size,
                     sf::Vector2i layout,
                     const sf::Texture& text,
                     GlyphContainer* curr_object) :
  GlyphContainer(size, layout, text),
  _current_object(curr_object)
{}

Inventory::~Inventory() {}

Glyph Inventory::rotate(Glyph g) {
  // TODO
}
