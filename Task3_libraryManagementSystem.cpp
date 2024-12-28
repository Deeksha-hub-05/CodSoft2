#include <iostream>
#include <vector>
using namespace std;
 void displayBoard(const vector<char>&board){
    cout<<"\n";
    cout<<" "<<board[0]<<"|"<<board[1]<<"|"<<board[2]<<"\n";
    cout<<"--+---+---\n";
    cout<<" "<<board[3]<<"|"<<board[4]<<"|"<<board[5]<<"\n";
    cout<<"--+---+---\n";
    cout<<board[6]<<"|"<<board[7]<<"|"<<board[8]<<"\n\n";
 }

 bool checkWin(const vector<char>&board,char player){
    return ((board[0]==player&&board[1]==player&&board[2]==player)||
            (board[3]==player&&board[4]==player&&board[5]==player)||
            (board[6]==player&&board[7]==player&&board[8]==player)||
            (board[0]==player&&board[3]==player&&board[6]==player)||
            (board[1]==player&&board[4]==player&&board[7]==player)||
            (board[2]==player&&board[5]==player&&board[8]==player)||
            (board[0]==player&&board[4]==player&&board[8]==player)||
            (board[2]==player&&board[4]==player&&board[6]==player));
 }

 bool checkDraw(const vector<char>&board){
    for(char cell:board){
        if(cell==' '){
            return false;
        }
    }
    return true;
 }
    void playGame(){
    vector<char>board(9,' ');
    char currentPlayer='X';
    bool gameOver=false;
    while (!gameOver){
        displayBoard(board);
        int move;
        cout<<"Player"<<currentPlayer<<",enter your move(1-9):";
        cin>>move;
         
        if (move<1||move>9||board[move-1]!= ' '){
            cout<<"Invalid move.Try again!\n";
            continue;
        }
        board[move-1]=currentPlayer;
         
        if (checkWin(board,currentPlayer)){
            displayBoard(board);
            cout<<"Player"<<currentPlayer<<"wins!\n";
            gameOver=true;
        }else if(checkDraw(board)){
            displayBoard(board);
            cout<<"It's a draw!\n";
            gameOver=true;
        }else{//switch players
            currentPlayer=(currentPlayer=='X')?'O':'X';
        }
    }
 }
 int main()
 {
    char playAgain;
    do{
        playGame();
        cout<<"Do you want to play again?(y/n):";
        cin>>playAgain;
    }while (playAgain=='y'||playAgain=='Y');
    cout<<"Thanks for playing!\n";
    return 0;
 }