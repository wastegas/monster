//
//  character.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "character.h"
#include <random>

std::string Character::getCharacterName() const
{
    return characterName;
}

int Character::getCharacterLife() const
{
    return characterLife;
}

void Character::changeLifeValue(int hit)
{
    characterLife -= hit;
    if (characterLife > 100)    // fully healed
        characterLife = 100;
}

void Character::defend(Character& c)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, HITBACK);
    Defenses currentDefense = static_cast<Defenses>(dis(gen));
    changeLifeValue(currentDefense * (-1));
    std::cout << getCharacterName() << ":" << getCharacterLife() << getDefense(currentDefense, c) << std::endl;
}


std::string Character::getDefense(Defenses currentDefense, Character& c)
{
    switch (currentDefense) {
        case Defenses::FAILED:
            changeLifeValue(5);
            return " was unable to defend itself";
            break;
        case Defenses::BLOCK:
            return " was able to block and heal";
        case Defenses::SHIELD:
            return " was able to use shield and heal";
            break;
        case Defenses::HITBACK:
            return " was able to hit back";
            c.changeLifeValue(currentDefense);
            break;
    }
}