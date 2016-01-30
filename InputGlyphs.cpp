#include "InputGlyphs.hpp"

InputGlyphs::InputGlyphs(int size,
                         sf::Vector2i layout,
                         const sf::Texture& text,
                         GlyphContainer* curr_object) :
  GlyphContainer(size, layout, text),
  _current_object(curr_object)
{}

InputGlyphs::~InputGlyphs() {}

void InputGlyphs::discard() {
  // TODO
}

bool InputGlyphs::add(Glyph g) {
  // TODO
}
