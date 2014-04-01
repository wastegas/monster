//
//  character.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include "character.h"

std::string Character::getCharacterName() const
{
    return characterName;
}

int Character::getCharacterLife() const
{
    return characterLife;
}

void Character::changeLifeValue(int hit)
{
    characterLife -= hit;
    if (characterLife > 100)    // fully healed
        characterLife = 100;
}