//
//  King.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef King_hpp
#define King_hpp

#include <stdio.h>
#include "Piece.hpp"


class King: public Piece{
public:
    King(int color);
    
    char getType() const override;
    int getValue() const override;
    std::vector<Move> GenMoves(Piece* Board[8][8], int r, int c) const override;
};

#endif /* King_hpp */
