//
//  randomint.h
//  monster
//
//  Created by Ronnie Baron on 4/4/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#ifndef monster_randomint_h
#define monster_randomint_h

#include <random>

int randomInt(const int& i)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    return std::uniform_int_distribution<> dis(0, i);
}

#endif
