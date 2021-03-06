//
//  hero.h
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#ifndef __monster__hero__
#define __monster__hero__

#include "character.h"

class Hero : public Character
{
private:
public:
    enum Weapons
    {
        MISSED,
        CLUB,
        SPEAR,
        SWORD
    };
    Hero(const std::string n) : Character(n) {}
    void attack(Character&);
    std::string getWeapon(Weapons) const;
};

#endif /* defined(__monster__hero__) */
