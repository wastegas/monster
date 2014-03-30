//
//  monster.h
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#ifndef __monster__monster__
#define __monster__monster__

#include "character.h"

class Monster : public Character
{
private:
    
public:
    enum Weapons
    {
        STOMP,
        SWIPE,
        FIRE
    };
    Monster(const std::string n) : Character(n) {}
    void attack(Character&);
    void defend();
    std::string getWeapon(Weapons);
};

#endif /* defined(__monster__monster__) */
