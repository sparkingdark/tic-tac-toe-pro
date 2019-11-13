#include<iostream>
#include"start.h"
#include"board.h"
#include"board_ele.h"
#include"game.h"
using namespace board;
using namespace game;
namespace start
{
  void start(){  

while(true){

   try
       {
        
        display_board();
    
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
    
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        
    }
    
  }
   
}
} // namespace start
