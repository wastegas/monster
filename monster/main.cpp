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
    
    m->attack();
    m->defend();
    
    h->attack();
    h->defend();
    
    return 0;
}

