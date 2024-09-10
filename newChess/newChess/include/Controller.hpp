//
//  Controller.hpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <stdio.h>
#include "Model.hpp"
#include "../Pieces/include/Piece.hpp"

class Controller{
    //   pass in model
    Model* model1;
public:
    Controller();
    void setModel(Model* model);
    void gameLoop();
    void Makemove(char name[5]);
    int validateMove(Move move);
    std::vector<Move> generateLegalMoves(Piece* board[8][8]);
    std::vector<Move> PieceMoves(char type, int color);
    };

#endif /* Controller_hpp */
