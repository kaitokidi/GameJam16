#include "Background.h"

Background::Background(std::string backgroundPath, std::string m1Path, std::string m2Path, sf::Vector2f m1Pos, sf::Vector2f m2Pos){
    if(!_tBackground.loadFromFile(backgroundPath))  std::cout << "failed to load background texture!! 2 faggots" <<  std::endl;
    _background.setTexture(_tBackground);
    _background.setPosition(0,0);

    if(!_tMonster1.loadFromFile(m1Path))  std::cout << "failed to load monster 1 texture!!" <<  std::endl;
    _monster1.setTexture(_tMonster1);
    _monster1.setPosition(m1Pos);

    if(!_tMonster2.loadFromFile(m2Path))  std::cout << "failed to load monster 2 texture!!" <<  std::endl;
    _monster2.setTexture(_tMonster1);
    _monster2.setPosition(m2Pos);


}//2

void Background::update(){}

void Background::draw(sf::RenderTarget& window){
    window.draw(_background);
    window.draw(_monster1);
    window.draw(_monster2);
}
