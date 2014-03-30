//
//  character.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "character.h"

std::string Character::getCharacterName()
{
    return characterName;
}

int Character::getCharacterLife()
{
    return characterLife;
}

void Character::changeLifeValue(int hit)
{
    characterLife -= hit;
}