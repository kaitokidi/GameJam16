#include "Inventory.hpp"
#include <stdio.h>

Inventory::Inventory(const sf::Texture& text, GlyphContainer* curr_object) :
  GlyphContainer(6, sf::Vector2i(2, 3), text),
  _current_object(curr_object)
{
}

Inventory::~Inventory() {}

void Inventory::rotate() {
  // TODO
}

void Inventory::init() {
  add(glyph11);
  add(glyph11);
  add(glyph11);
  add(glyph11);
  add(glyph11);
  firstToActualGlyph();
}

void Inventory::attackWith(GlyphID gid) {
  for(std::vector<Glyph>::iterator it = _glyphs.begin(); it != _glyphs.end(); it++) {
    if(it->getID() == gid) {
      _glyphs.erase(it);
      // update positions
      setPosition(_pos);
      return;
    }
  }
}

void Inventory::firstToActualGlyph() {
  if(!empty()) {
    _current_object->substitute(_glyphs[0].getID());
    _glyphs.erase(_glyphs.begin());
    setPosition(_pos);
  }
}

GlyphID Inventory::getGlyphIDByIndex(int index) {
  return _glyphs[index].getID();
}
