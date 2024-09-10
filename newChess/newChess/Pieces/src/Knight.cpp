//
//  Knight.cpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#include "Knight.hpp"
#include <stdio.h>


Knight::Knight(int c): Piece(c){}

char Knight::getType() const{
    return(color == 1) ? 'N' : 'n';
}

int Knight::getValue() const{
    return 3;
}

std::vector<Move> Knight::GenMoves(Piece* Board[8][8], int r, int c) const{
    std::vector<Move> legalMoves;
    
    printf("Knight");
    
    return legalMoves;
}

