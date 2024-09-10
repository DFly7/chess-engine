//
//  Piece.cpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#include "Piece.hpp"
    
Piece::Piece(int color){
    this->color = color;
    }

int Piece::getColor() const{
    return color;
}

bool Piece::isOnBoard(int row, int col) const{
    return row >= 0 && row < 8 && col >= 0 && col < 8;
}
