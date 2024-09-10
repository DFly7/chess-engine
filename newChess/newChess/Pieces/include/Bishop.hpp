//
//  Bishop.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Bishop_hpp
#define Bishop_hpp

#include <stdio.h>

#include "Queen.hpp"

class Bishop: public Queen{
public:
    Bishop(int c);
    
    char getType() const override;
    int getValue() const override;
    std::vector<Move> GenMoves(Piece* Board[8][8], int r, int c) const override;
};

#endif /* Bishop_hpp */
