//
//  peice.cpp
//  ChessEngine
//
//  Created by Darragh Flynn on 25/05/2024.
//

#include <string>
#include <stdio.h>

class Piece{
public:
    int color;
    char letter;
    
    Piece(int Color, char Letter)
    {
        color = Color;
        letter = Letter;
    }
    
    char getletter()
    {
        return letter;
    }
    
};

class Pawn : public Piece {
public:
    Pawn(int Color, char Letter) : Piece(Color, Letter) {}
    
    void ValidMove()
    {
        
    }
};
