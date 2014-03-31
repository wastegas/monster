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

void Hero::defend(Character& monster)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, HITBACK);
    Defenses currentDefense = static_cast<Defenses>(dis(gen));
    changeLifeValue(currentDefense * (-1));
    std::cout << getCharacterName() << ":" << getCharacterLife() << getDefense(currentDefense, monster) << std::endl;
}

std::string Hero::getWeapon(Weapons currentWeapon)
{
    switch (currentWeapon) {
        case Weapons::MISSED:
            return " missed";
            break;
        case Weapons::SWORD:
            return " attacking with a Sword";
            break;
        case Weapons::SPEAR:
            return " attacking with a Spear";
            break;
        case Weapons::CLUB:
            return " attacking Club";
    }
}

std::string Hero::getDefense(Defenses currentDefense, Character& monster)
{
    switch (currentDefense) {
        case Defenses::FAILED:
            return " was unable to defend itself";
            break;
        case Defenses::BLOCK:
            return " was able to block and heal";
        case Defenses::SHIELD:
            return " was able to use shield and heal";
            break;
        case Defenses::HITBACK:
            return " was able to hit back";
            monster.changeLifeValue(currentDefense);
            break;
    }
}