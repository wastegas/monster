//
//  hero.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "hero.h"

void Hero::attack(Character& monster)
{
    Weapons currentWeapon = (Weapons)randomInt(SWORD);
    monster.changeLifeValue(currentWeapon);
    std::cout << getCharacterName() << ":" << getCharacterLife() <<  getWeapon(currentWeapon) << std::endl;
}

std::string Hero::getWeapon(Weapons currentWeapon) const
{
    switch (currentWeapon) {
        case Weapons::MISSED:
            return " missed on this attack";
            break;
        case Weapons::SWORD:
            return " attacking with a Sword";
            break;
        case Weapons::SPEAR:
            return " attacking with a Spear";
            break;
        case Weapons::CLUB:
            return " attacking with a Club";
    }
}