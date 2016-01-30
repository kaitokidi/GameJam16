#ifndef __GLYPH_HPP__
#define __GLYPH_HPP__

#include <SFML/Graphics.hpp>


class Glyph {
public:
  Glyph(sf::Texture& text);
  ~Glyph();

  void draw();
  void setPosition(sf::Vector2f pos);
  void setSize(sf::Vector2f size);
  void setSize(float width, float height);
  sf::Vector2f getSize();

private:
  sf::RenderWindow* _window;
  sf::Sprite _sprite;
};

#endif
