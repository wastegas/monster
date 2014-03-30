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
    Monster(const std::string n, int l) : Character(n, l) {}
    void attack();
    void defend();
};

#endif /* defined(__monster__monster__) */
