#include "InputGlyphs.hpp"

InputGlyphs::InputGlyphs(sf::Texture& text, GlyphContainer* curr_object) :
  GlyphContainer(10, sf::Vector2i(6,1), text),
  _current_object(curr_object)
{}

InputGlyphs::~InputGlyphs() {}

void InputGlyphs::discard() {
  _glyphs.clear();
}

bool InputGlyphs::add(Glyph g) {
  _glyphs.push_back(g);
}
