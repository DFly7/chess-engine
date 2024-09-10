//
//  Pawn.cpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#include "Pawn.hpp"
#include <stdio.h>

Pawn::Pawn(int c): Piece(c){}

char Pawn::getType() const{
    return(color == 1) ? 'P' : 'p';
}

int Pawn::getValue() const{
    return 1;
}

std::vector<Move> Pawn::GenMoves(Piece* Board[8][8], int r, int c) const{
    std::vector<Move> legalMoves;
    
    int direction = (1 == getColor()) ? 1 : -1;
    int startRow = (1 == getColor()) ? 1 : 6;
    
    int newRow = r + direction;
    if(isOnBoard(newRow, c)){
        Move move{"h",r,c,newRow,c};
        legalMoves.emplace_back(move);
    }
    if(r == startRow and Board[r+2][c] == nullptr){
        Move move{"h",r,c,r+2,c};
        legalMoves.emplace_back(move);
    }
    
    if(isOnBoard(newRow, c+1) and Board[newRow][c+1] != nullptr and Board[newRow][c+1]->getColor() != getColor()){
        Move move{"h",r,c,newRow,c+1};
        legalMoves.emplace_back(move);
    }
    if(isOnBoard(newRow, c-1) and Board[newRow][c-1] != nullptr and Board[newRow][c-1]->getColor() != getColor()){
        Move move{"h",r,c,newRow,c-1};
        legalMoves.emplace_back(move);
    }
    
    return legalMoves;
}
