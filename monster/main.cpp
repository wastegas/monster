//
//  main.cpp
//  monster
//
//  Created by Ronnie Baron on 3/29/14.
//  Copyright (c) 2014 Ronnie Baron. All rights reserved.
//

#include <memory>
#include "monster.h"

int main(int argc, const char * argv[])
{

    std::unique_ptr<Character> m(new Monster("godzilla", 100));
    
    m->attack();
    m->defend();
    
    return 0;
}

