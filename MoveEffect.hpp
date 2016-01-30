#ifndef MOVEEFFECT_HPP
#define MOVEEFFECT_HPP
#include "utils.hpp"

class MoveEffect : public sf::Sprite
{

public:

    MoveEffect(sf::Vector2i ini, sf::Vector2i end, sf::Texture &texture);
    ~MoveEffect();

    bool alive();
    void update(float deltaTime);

private:

    sf::Vector2i _end;
    sf::Vector2f _v;

    bool _alive;
};

#endif // MOVEEFFECT_HPP
