#include "Glyph.hpp"

Glyph::Glyph(GlyphID id) {
  _id = id;
  _complete = false;

  // CANSUR
  switch(id) {
  glyphUP:
    _sprite = sf::Sprite(Resources::glyphUP);
  glyphDOWN:
    _sprite = sf::Sprite(Resources::glyphDOWN);
  glyphRIGHT:
    _sprite = sf::Sprite(Resources::glyphRIGHT);
  glyphLEFT:
    _sprite = sf::Sprite(Resources::glyphLEFT);
  glyph11:
    _sprite = sf::Sprite(Resources::glyph11);
  glyph12:
    _sprite = sf::Sprite(Resources::glyph12);
  glyph13:
    _sprite = sf::Sprite(Resources::glyph13);
  glyph14:
    _sprite = sf::Sprite(Resources::glyph14);
  glyph15:
    _sprite = sf::Sprite(Resources::glyph15);
  glyph16:
    _sprite = sf::Sprite(Resources::glyph16);
  glyph17:
    _sprite = sf::Sprite(Resources::glyph17);
  glyph18:
    _sprite = sf::Sprite(Resources::glyph18);
  glyph19:
    _sprite = sf::Sprite(Resources::glyph19);
  glyph21:
    _sprite = sf::Sprite(Resources::glyph21);
  glyph22:
    _sprite = sf::Sprite(Resources::glyph22);
  glyph23:
    _sprite = sf::Sprite(Resources::glyph23);
  glyph24:
    _sprite = sf::Sprite(Resources::glyph24);
  glyph26:
    _sprite = sf::Sprite(Resources::glyph26);
  glyph31:
    _sprite = sf::Sprite(Resources::glyph31);
  glyph32:
    _sprite = sf::Sprite(Resources::glyph32);
  glyph33:
    _sprite = sf::Sprite(Resources::glyph33);
  }
}

Glyph::~Glyph() {}

void Glyph::draw() {
  _window->draw(_sprite);
}

void Glyph::setPosition(sf::Vector2f pos) {
  _sprite.setPosition(pos);
}

GlyphID Glyph::getID() {
  return _id;
}

sf::Vector2f Glyph::getSize() {
  // TODO
  //return _sprite.getSize();
}

void Glyph::setComplete() {
  _complete = true;
  _sprite.setColor(sf::Color::Black);
}
