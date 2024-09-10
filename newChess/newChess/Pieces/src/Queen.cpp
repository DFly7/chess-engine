//
//  Queen.cpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#include "Queen.hpp"
#include <stdio.h>


Queen::Queen(int c): Piece(c){}

char Queen::getType() const{
    return(color == 1) ? 'Q' : 'q';
}

int Queen::getValue() const{
    return 10;
}


std::vector<Move> Queen::GenMoves(Piece* Board[8][8], int r, int c) const{
    std::vector<Move> legalMoves;
    
    return legalMoves;
}

std::vector<Move> Queen::GetDiagonal(Piece* Board[8][8], int r, int c) const{
    std::vector<Move> legalMoves;
    
    return legalMoves;
}


std::vector<Move> Queen::GetPlane(Piece* Board[8][8], int r, int c) const{
    std::vector<Move> legalMoves;
    
    printf("HEllo");
    
    return legalMoves;
}
