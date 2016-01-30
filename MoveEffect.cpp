#include "MoveEffect.hpp"

MoveEffect::MoveEffect(sf::Vector2i ini, sf::Vector2i end, sf::Texture& texture) : Sprite(texture){

    _end = end;

    setPosition(sf::Vector2f(ini.x,ini.y));
    float angle = getAngle(sf::Vector2f(ini.x,ini.y),sf::Vector2f(end.x,end.y));

    _v.x = std::sin(angle)*500;
    _v.y = std::cos(angle)*-500;
    _alive = true;

}

MoveEffect::~MoveEffect(){}

void MoveEffect::update(float deltaTime){
    move(_v*deltaTime);
    if ((abs(getPosition().x - _end.x) + abs(getPosition().y - _end.y)) < 50){
        _alive = false;
    }
}

bool MoveEffect::alive(){
    return _alive;
}
