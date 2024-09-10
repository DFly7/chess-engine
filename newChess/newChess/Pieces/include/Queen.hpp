//
//  Queen.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Queen_hpp
#define Queen_hpp

#include <stdio.h>
#include "Piece.hpp"


class Queen: public Piece{
public:
    Queen(int color);
    
    char getType() const override;
    int getValue() const override;
    std::vector<Move> GenMoves(Piece* Board[8][8], int r, int c) const override;
    std::vector<Move> GetDiagonal(Piece* Board[8][8], int r, int c) const;
    std::vector<Move> GetPlane(Piece* Board[8][8], int r, int c) const;
};


#endif /* Queen_hpp */
