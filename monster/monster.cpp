//
//  monster.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "monster.h"

void Monster::attack()
{
    std::cout << getCharacterName() << ":" << getCharacterLife() << " attacking" << std::endl;
}

void Monster::defend()
{
    std::cout << getCharacterName() << ":" << getCharacterLife() << " defending" << std::endl;
}
