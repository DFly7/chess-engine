//
//  Knight.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Knight_hpp
#define Knight_hpp

#include <stdio.h>
#include "Piece.hpp"


class Knight: public Piece{
public:
    Knight(int color);
    
    char getType() const override;
    int getValue() const override;
    std::vector<Move> GenMoves(Piece* Board[8][8], int r, int c) const override;
    
};

#endif /* Knight_hpp */
