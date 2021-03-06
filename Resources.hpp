#ifndef __RESOURCES_HPP__
#define __RESOURCES_HPP__

#include "utils.hpp"

class Resources {
public:
  static void load();
  static sf::Texture key;
  static sf::Texture talkBox;
  static sf::Shader cInvert;
  static sf::Font pauseMenuFont;
  static std::vector<SpriteSheetDescription> descriptions;
  static sf::Texture objectiveBg;
  static sf::Texture actualBgOrc;
  static sf::Texture spellingBgOrc;
  static sf::Texture inventoryBgOrc;
  static sf::Texture objectiveCham;
  static sf::Texture actualBgCham;
  static sf::Texture spellingBgCham;
  static sf::Texture inventoryBgCham;
  static sf::Texture background;
  static sf::Texture glyphTextures[22];
  static sf::Texture recipesBg;

private:
  static SpriteSheetDescription loadDescription(std::string fileName);
};

#endif
