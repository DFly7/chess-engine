//
//  Pawn.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Pawn_hpp
#define Pawn_hpp

#include <stdio.h>
#include "Piece.hpp"

class Pawn : public Piece{
public:
    Pawn(int color);
     
    char getType() const override;
    int getValue() const override;
    std::vector<Move> GenMoves(Piece* Board[8][8], int r, int c) const override;
};

#endif /* Pawn_hpp */
