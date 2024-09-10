//
//  Move.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Move_hpp
#define Move_hpp

#include <stdio.h>

struct Move{
    char name[6];
    int startR;
    int startC;
    int endR;
    int endC;
};

#endif /* Move_hpp */
