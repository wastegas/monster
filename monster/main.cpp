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
        h->defend(*m);
        
        h->attack(*m);
        m->defend(*h);
        if (m->getCharacterLife() < 1 || h->getCharacterLife() < 1)
            break;
    }
    
    
    return 0;
}

