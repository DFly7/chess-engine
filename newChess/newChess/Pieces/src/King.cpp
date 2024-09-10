//
//  King.cpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#include "King.hpp"


King::King(int c): Piece(c){}

char King::getType() const{
    return(color == 1) ? 'K' : 'k';
}

int King::getValue() const{
    return 1000;
}

std::vector<Move> King::GenMoves(Piece* Board[8][8], int r, int c) const{
    std::vector<Move> legalMoves;
    
    
    
    return legalMoves;
}
