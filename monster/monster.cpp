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
    hero.changeLifeValue(currentWeapon);
    std::cout << getCharacterName() << ":" << getCharacterLife() <<  getWeapon(currentWeapon)<< std::endl;
}

void Monster::defend(Character& hero)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, HITBACK);
    Defenses currentDefense = static_cast<Defenses>(dis(gen));
    changeLifeValue(currentDefense * (-1));
    std::cout << getCharacterName() << ":" << getCharacterLife() << getDefense(currentDefense, hero) << std::endl;
}

std::string Monster::getWeapon(Weapons currentWeapon)
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

std::string Monster::getDefense(Defenses currentDefense, Character& hero)
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
            hero.changeLifeValue(currentDefense);
            break;
    }
}