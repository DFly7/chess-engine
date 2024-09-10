//
//  Controller.cpp
//  newChess
//
//  Created by Darragh Flynn on 10/09/2024.
//

#include "Controller.hpp"



#include <unordered_map>
#include <vector>




Controller::Controller(){
    model1 = NULL;
}
    
void Controller::setModel(Model* model){
    this->model1 = model;
}
    
    void Controller::gameLoop(){
        std::unordered_map<int, int> Map;
        Map[1] = 2;
        Map[2] = 1;

        while(model1->getFinished() == false){
            char name[6];
            
            int player = model1->getPlayer();
            model1->printBoard(player);

            printf("%d to play, Enter Move: ", player);
            scanf("%s", name);

            printf("You entered %s\n",name);
            
            Makemove(name);
            
            model1->setPlayer(Map[player]);
            
        }
    };
    
    void Controller::Makemove(char name[5]){
        Move move;
        move.name[sizeof(move.name) - 1] = '\0'; // Ensure null termination
        strcpy(move.name, name);
        
        std::unordered_map<char, int> Map;
        
        Map['a'] = 0;
        Map['b'] = 1;
        Map['c'] = 2;
        Map['d'] = 3;
        Map['e'] = 4;
        Map['f'] = 5;
        Map['g'] = 6;
        Map['h'] = 7;

        move.startR = int(name[1])-1 - '0';
        move.startC = Map[name[0]];
        
        move.endR = int(name[3])-1 - '0';
        move.endC = Map[name[2]];
        
        
        printf("Start Row %d, Start Col %d, End Row %d, End Col %d \n", move.startR, move.startC, move.endR, move.endC);
        
        
        model1->makeMove(move);
    }

int Controller::validateMove(Move move){
    
    return 1;
};

std::vector<Move> Controller::generateLegalMoves(Piece* board[8][8]) {
    std::vector<Move> legalMoves;

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(model1->board[i][j] != nullptr){
                
            }
        };
    };

    return legalMoves;
}
