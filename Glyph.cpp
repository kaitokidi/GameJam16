#include "Glyph.hpp"

Glyph::Glyph(GlyphID id) {
  _id = id;

  switch(id) {
  glyph_UP:
    _sprite = sf::Sprite(Resources::glyph_UP);
  glyph_DOWN:
    _sprite = sf::Sprite(Resources::glyph_DOWN);
  glyph_RIGHT:
    _sprite = sf::Sprite(Resources::glyph_RIGHT);
  glyph_LEFT:
    _sprite = sf::Sprite(Resources::glyph_LEFT);
  glyph_11:
    _sprite = sf::Sprite(Resources::glyph_11);
  glyph_12:
    _sprite = sf::Sprite(Resources::glyph_12);
  glyph_13:
    _sprite = sf::Sprite(Resources::glyph_13);
  glyph_14:
    _sprite = sf::Sprite(Resources::glyph_14);
  glyph_15:
    _sprite = sf::Sprite(Resources::glyph_15);
  glyph_16:
    _sprite = sf::Sprite(Resources::glyph_16);
  glyph_17:
    _sprite = sf::Sprite(Resources::glyph_17);
  glyph_18:
    _sprite = sf::Sprite(Resources::glyph_18);
  glyph_19:
    _sprite = sf::Sprite(Resources::glyph_19);
  glyph_21:
    _sprite = sf::Sprite(Resources::glyph_21);
  glyph_22:
    _sprite = sf::Sprite(Resources::glyph_22);
  glyph_23:
    _sprite = sf::Sprite(Resources::glyph_23);
  glyph_24:
    _sprite = sf::Sprite(Resources::glyph_24);
  glyph_26:
    _sprite = sf::Sprite(Resources::glyph_26);
  glyph_31:
    _sprite = sf::Sprite(Resources::glyph_31);
  glyph_32:
    _sprite = sf::Sprite(Resources::glyph_32);
  glyph_33:
    _sprite = sf::Sprite(Resources::glyph_33);
  }
}

Glyph::~Glyph() {}

void Glyph::draw() {
  _window->draw(_sprite);
}

void Glyph::setPosition(sf::Vector2f pos) {
  _sprite.setPosition(pos);
}
