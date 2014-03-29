//
//  character.h
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#ifndef __monster__character__
#define __monster__character__

#include <iostream>
#include <string>

class Character
{
private:
    std::string characterName;
    int characterLife;
public:
    Character(std::string n)
    : characterName(n) { characterLife = 0; }
    void changeLifeValue(int);
};

#endif /* defined(__monster__character__) */
