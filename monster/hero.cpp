//
//  hero.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "hero.h"

void Hero::attack()
{
    std::cout << getCharacterName() << ":" << getCharacterLife() << " attacking" << std::endl;
}

void Hero::defend()
{
    std::cout << getCharacterName() << ":" << getCharacterLife() << " defending" << std::endl;
}