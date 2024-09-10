//
//  Rook.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Rook_hpp
#define Rook_hpp

#include <stdio.h>
#include "Queen.hpp"

class Rook: public Queen{
public:
    Rook(int c);
    
    char getType() const override;
    int getValue() const override;
    std::vector<Move> GenMoves(Piece* Board[8][8], int r, int c) const override;
};

#endif /* Rook_hpp */
