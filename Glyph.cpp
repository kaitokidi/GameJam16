#include "Glyph.hpp"

#include "Resources.hpp"

Glyph::Glyph() {}

Glyph::Glyph(GlyphID id) {
  _id = id;
  _complete = false;

  _sprite = sf::Sprite(Resources::key);

    //   ____    _    _   _ ____  _   _ ____
    //  / ___|  / \  | \ | / ___|| | | |  _ \
    // | |     / _ \ |  \| \___ \| | | | |_) |
    // | |___ / ___ \| |\  |___) | |_| |  _ <
    //  \____/_/   \_\_| \_|____/ \___/|_| \_\

  // switch(id) {
  // glyphUP:
  //   _sprite = sf::Sprite(Resources::glyphUP);
  // glyphDOWN:
  //   _sprite = sf::Sprite(Resources::glyphDOWN);
  // glyphRIGHT:
  //   _sprite = sf::Sprite(Resources::glyphRIGHT);
  // glyphLEFT:
  //   _sprite = sf::Sprite(Resources::glyphLEFT);
  // glyph11:
  //   _sprite = sf::Sprite(Resources::glyph11);
  // glyph12:
  //   _sprite = sf::Sprite(Resources::glyph12);
  // glyph13:
  //   _sprite = sf::Sprite(Resources::glyph13);
  // glyph14:
  //   _sprite = sf::Sprite(Resources::glyph14);
  // glyph15:
  //   _sprite = sf::Sprite(Resources::glyph15);
  // glyph16:
  //   _sprite = sf::Sprite(Resources::glyph16);
  // glyph17:
  //   _sprite = sf::Sprite(Resources::glyph17);
  // glyph18:
  //   _sprite = sf::Sprite(Resources::glyph18);
  // glyph19:
  //   _sprite = sf::Sprite(Resources::glyph19);
  // glyph21:
  //   _sprite = sf::Sprite(Resources::glyph21);
  // glyph22:
  //   _sprite = sf::Sprite(Resources::glyph22);
  // glyph23:
  //   _sprite = sf::Sprite(Resources::glyph23);
  // glyph24:
  //   _sprite = sf::Sprite(Resources::glyph24);
  // glyph26:
  //   _sprite = sf::Sprite(Resources::glyph26);
  // glyph31:
  //   _sprite = sf::Sprite(Resources::glyph31);
  // glyph32:
  //   _sprite = sf::Sprite(Resources::glyph32);
  // glyph33:
  //   _sprite = sf::Sprite(Resources::glyph33);
  // }
}

Glyph::~Glyph() {}

void Glyph::draw(sf::RenderTarget* target) {
  target->draw(_sprite);
}

void Glyph::setPosition(sf::Vector2f pos) {
  _sprite.setPosition(pos);
}

GlyphID Glyph::getID() {
  return _id;
}

sf::Vector2f Glyph::getSize() {
  return sf::Vector2f(_sprite.getTexture()->getSize().x * _sprite.getScale().x,
                      _sprite.getTexture()->getSize().y * _sprite.getScale().y);
}

void Glyph::setComplete() {
  _complete = true;
  _sprite.setColor(sf::Color::Black);
}

bool Glyph::isComplete() {
  return _complete;
}

void Glyph::setRenderTarget(sf::RenderTarget* t) {
  _window = t;
}

void Glyph::setSize(sf::Vector2f size) {
  setSize(size.x, size.y);
}

void Glyph::setSize(float width, float height) {
  float x_ratio = width / _sprite.getTexture()->getSize().x;
  float y_ratio = height / _sprite.getTexture()->getSize().y;
  _sprite.setScale(sf::Vector2f(x_ratio, y_ratio));
}
