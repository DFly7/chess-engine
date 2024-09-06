////
////  main.cpp
////  ChessEngine
////
////  Created by Darragh Flynn on 10/05/2024.
////
//
//
#include <iostream>
#include <fstream>
//#include "peice.cpp"
////#include "pawn.cpp"


void PrintBoard(char Board[8][8]);
void intitialise(char Board[8][8]);
void movePiece(char Board[8][8]);




using namespace std;

int main(){
    printf("hello\n");
    
    string name;
    
    char board[8][8];
    
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++)
            board[i][j] = NULL;
    }
    
    
    board[0][0] = 'R';
    board[7][7] = 'r';

    PrintBoard(board);


    while (name != "quit")
    {
        cout << "Enter your Move: ";
        cin >> name;
        movePiece(board);
        cout << "Hello, " << name << endl;
        PrintBoard(board);

    }
    
    int i = 0;
    while (i<10)
    {
        i++;
    }
    
    cout << i << endl;
}



void PrintBoard(char Board[8][8])
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(Board[i][j] != NULL)
                cout << Board[i][j] << " | "; // Print element with a space after
            else
                cout << " " << " | "; // Print element with a space after

        }
        cout << i+1 << endl; // Move to a new line after each row
    }
    cout << "A   B   C   D   E   F   G   H" << endl;
}

void intitialise(char *Board[8][8])
{
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++)
            Board[i][j] = NULL;
    }
}

void movePiece(char Board[8][8])
{
    Board[3][3] = 'j';
    printf("here");
}




//void intitialise(Piece *Board[8][8]);
//void PrintBoard(Piece *Board[8][8]);
//int movePiece(std:: string name, Piece *Board[8][8]);
//
//
//using namespace std;
//
//int main() {
//    Piece *Board[8][8];
//
//    intitialise(Board);
//    string name;
//    
//    PrintBoard(Board);
//
//    
//    while (name != "quit")
//    {
//        cout << "Enter your Move: ";
//        cin >> name;
//        movePiece(name, Board);
//        cout << "Hello, " << name << endl;
//    }
//
//
//
//  return 0;
//}
//
//int movePiece(std:: string name, Piece *Board)
//{
//    
//    return 1;
//}
//
//
//void intitialise(Piece *Board[8][8])
//{
//
//
//}
//
//void PrintBoard(Piece *Board[8][8])
//{
//    for(int i=0; i<8; i++)
//    {
//        for(int j=0; j<8; j++)
//        {
//            if(Board[i][j] != NULL)
//                cout << Board[i][j]->getletter() << " | "; // Print element with a space after
//            else
//                cout << " " << " | "; // Print element with a space after
//
//        }
//        cout << i+1 << endl; // Move to a new line after each row
//
//    }
//}
//
//int calc(int one, int two)
//{
//    int answer = two*one;
//    return answer;
//}
