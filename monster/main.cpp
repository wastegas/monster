//
//  main.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include <memory>
#include "monster.h"
#include "hero.h"

int main(int argc, const char * argv[])
{

    std::unique_ptr<Character> m(new Monster("godzilla"));
    std::unique_ptr<Character> h(new Hero("superman"));
    
    while (m->getCharacterLife() > 1 || h->getCharacterLife() > 1) {
        m->attack(*h);
        if (h->getCharacterLife() < 1)
            break;
        h->defend(*m);
        if (m->getCharacterLife() < 1 || h->getCharacterLife() < 1)
            break;
        h->attack(*m);
        if (m->getCharacterLife() < 1)
            break;
        m->defend(*h);
        if (m->getCharacterLife() < 1 || h->getCharacterLife() < 1)
            break;
    }
    
    if (m->getCharacterLife() < 1)
        std::cout << m->getCharacterName() << ":" << m->getCharacterLife() << " lost the match" << std::endl;
    else
        std::cout << h->getCharacterName() << ":" << h->getCharacterLife() << " lost the match" << std::endl;

    
    return 0;
}

