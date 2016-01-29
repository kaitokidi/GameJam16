#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "utils.hpp"

class Background{

public:
    Background(std::string backgroundPath, std::string m1Path, std::string m2Path, sf::Vector2f m1Pos, sf::Vector2f m2Pos);
    void update();
    void draw(sf::RenderTarget& window);

private:
    sf::Texture _tMonster1;
    sf::Texture _tMonster2;
    sf::Texture _tBackground;

    sf::Sprite _monster1;
    sf::Sprite _monster2;
    sf::Sprite _background;
};

#endif // BACKGROUND_H
