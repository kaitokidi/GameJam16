#ifndef __GLYPH_HPP__
#define __GLYPH_HPP__

#include <SFML/Graphics.hpp>

#include "utils.hpp"

class Glyph {
public:
  Glyph(GlyphID id);
  ~Glyph();

  void draw();
  void setPosition(sf::Vector2f pos);
  void setSize(sf::Vector2f size);
  void setSize(float width, float height);
  GlyphID getID();
  sf::Vector2f getSize();
  void setComplete();
  bool isComplete();

protected:
  sf::RenderWindow* _window;
  sf::Sprite _sprite;

  GlyphID _id;
  bool _complete;
};

#endif
