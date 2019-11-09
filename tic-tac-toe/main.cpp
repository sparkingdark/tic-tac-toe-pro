#include<iostream>
#include<stdlib.h>
#include"board.h"
#include"board_ele.h"
#include"game.h"
using namespace board;
using namespace game;
int main(){
    int breake;
    char player1,player2; 
    
    display_board();
     for (int i = 0; i < 9; i++)
       {
             if(game_rule()==true)
             {
                     std::cout<<"player 1 won"<<"\n"<<std::endl;
                     break;
             }
             if(game_rule()==true)
             {
                 std::cout<<"player 2 won"<<std::endl;
                 break;    
             }
             player_turn();
        }

   
}