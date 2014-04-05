//
//  monster.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "monster.h"

void Monster::attack(Character& hero)
{
    Weapons currentWeapon = (Weapons)randomInt(FIRE);
    hero.changeLifeValue(currentWeapon);
    std::cout << getCharacterName() << ":" << getCharacterLife() <<  getWeapon(currentWeapon)<< std::endl;
}

std::string Monster::getWeapon(Weapons currentWeapon) const
{
    switch (currentWeapon) {
        case Weapons::MISSED:
            return " missed on this attack";
            break;
        case Weapons::STOMP:
            return " attacking with a Stomp";
            break;
        case Weapons::SWIPE:
            return " attacking with a Swipe";
            break;
        case Weapons::FIRE:
            return " attacking with Fire";
    }
}