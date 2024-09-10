//
//  Piece.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Piece_hpp
#define Piece_hpp

#include <stdio.h>
#include <vector>

#include "Move.hpp"

class Piece {
public:
    int color;

    Piece(int color);
    int getColor() const;
    bool isOnBoard(int row, int col) const;

    virtual char getType() const = 0;
    virtual int getValue() const = 0;
    virtual std::vector<Move> GenMoves(Piece* Board[8][8], int r, int c) const = 0;
};

#endif /* Piece_hpp */


