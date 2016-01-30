#include "Glyph.hpp"

Glyph::Glyph(sf::Texture& text) :
  _sprite(text)
{}

Glyph::~Glyph() {}

void Glyph::draw() {
  _window->draw(_sprite);
}

void Glyph::setPosition(sf::Vector2f pos) {
  _sprite.setPosition(pos);
}
