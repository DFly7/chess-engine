//
//  main.cpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#include <iostream>
#include "Pieces/include/Piece.hpp"
#include "Pieces/include/Pawn.hpp"
#include "Pieces/include/Knight.hpp"
#include "Pieces/include/Queen.hpp"

#include "Pieces/include/Rook.hpp"

#include "include/Model.hpp"
#include "include/Controller.hpp"



#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::cout << "Hello, World!\n";
    std::string start = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";
    Model* model1 = new Model("rnb1kbnr/p1pppppp/8/1p1q4/2P5/8/PP1PPPPP/RNBQKBNR");
        
    Controller* control = new Controller();
    control->setModel(model1);
    
    std::vector<Move> movez;
    
    std::vector<Move> vec2;

    model1->printBoard(1);

    vec2 = model1->board[3][2]->GenMoves(model1->board, 3, 2);
    
    movez.insert(movez.end(), vec2.begin(), vec2.end());
    // Method 1: Range-based for loop
    printf("Moves\n");
    for (Move num : movez) {
        printf("start Row: %d, start COL: %d, End Row: %d, End Col: %d\n", num.startR,num.startC,num.endR,num.endC);
    }
    
//    control->gameLoop();
    
    
    return 0;
}
