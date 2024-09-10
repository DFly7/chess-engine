//
//  Model.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Model_hpp
#define Model_hpp

#include <stdio.h>

#ifndef model_h
#define model_h

#include <string>

#include "../Pieces/include/Piece.hpp"
#include "../Pieces/include/Pawn.hpp"
#include "../Pieces/include/Knight.hpp"
#include "../Pieces/include/King.hpp"
#include "../Pieces/include/Queen.hpp"
#include "../Pieces/include/Rook.hpp"
#include "../Pieces/include/Bishop.hpp"

#include "../include/Move.hpp"

class Model {
public:
    std::string fen;
    Piece* board[8][8];
    int playerMove;
    bool isFinished;

    Model();
    Model(std::string fen);
    
    void initializeBoard();
    void printBoard(int player);

    void makeMove(Move move);
    void setPlayer(int p);
    void setFinished(int f);
    int getPlayer();
    int getFinished();

};

#endif /* model_h */


#endif /* Model_hpp */
