//
//  hero.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "hero.h"
#include <random>

void Hero::attack(Character& monster)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, SWORD);
    Weapons currentWeapon = static_cast<Weapons>(dis(gen));
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