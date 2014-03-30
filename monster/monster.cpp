//
//  monster.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "monster.h"
#include <random>

void Monster::attack(Character& hero)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, FIRE);
    Weapons currentWeapon = static_cast<Weapons>(dis(gen));
    hero.changeLifeValue(currentWeapon + 1);
    std::cout << getCharacterName() << ":" << getCharacterLife() << " attacking with " << getWeapon(currentWeapon)<< std::endl;
}

void Monster::defend()
{
    std::cout << getCharacterName() << ":" << getCharacterLife() << " defending" << std::endl;
}

std::string Monster::getWeapon(Weapons currentWeapon)
{
    switch (currentWeapon) {
        case Weapons::STOMP:
            return "a Stomp";
            break;
        case Weapons::SWIPE:
            return "a Swipe";
            break;
        case Weapons::FIRE:
            return "Fire";
    }
}