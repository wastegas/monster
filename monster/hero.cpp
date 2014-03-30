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
    monster.changeLifeValue(currentWeapon + 1);
    std::cout << getCharacterName() << ":" << getCharacterLife() << " attacking with " << getWeapon(currentWeapon) << std::endl;
}

void Hero::defend()
{
    std::cout << getCharacterName() << ":" << getCharacterLife() << " defending" << std::endl;
}

std::string Hero::getWeapon(Weapons currentWeapon)
{
    switch (currentWeapon) {
        case Weapons::SWORD:
            return "Sword";
            break;
        case Weapons::SPEAR:
            return "Spear";
            break;
        case Weapons::CLUB:
            return "Club";
    }
}