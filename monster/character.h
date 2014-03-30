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
    Character(const std::string &n, int l = 0)
    : characterName(n), characterLife(l) {}
    std::string getCharacterName();
    int getCharacterLife();
    virtual void changeLifeValue(int);
    virtual void attack();
    virtual void defend();
};

#endif /* defined(__monster__character__) */
