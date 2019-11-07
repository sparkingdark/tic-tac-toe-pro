#include<iostream>
#include<stdlib.h>
#include <cstdlib>

int choice;
int row,columns;
char board_ele[3][3]={'1','2','3','4','5','6','7','8','9'};

void display_board(){
    system("clear");
    std::cout<<"\n\tthe board:\n";

    std::cout<<"     |     |     \n";
    std::cout<<" "<<board_ele[0][0]<<"   |   "<<board_ele[0][1]<<" |  "<<board_ele[0][2]<<"  \n";
    std::cout<<"     |     |     \n";
    std::cout<<"-----|-----|-----\n";
    std::cout<<"     |     |     \n";
    std::cout<<" "<<board_ele[1][0]<<"   |   "<<board_ele[1][1]<<" |  "<<board_ele[1][2]<<"  \n";
    std::cout<<"     |     |     \n";
    std::cout<<"-----|-----|-----\n";
    std::cout<<"     |     |     \n";
    std::cout<<" "<<board_ele[2][0]<<"   |   "<<board_ele[2][1]<<" |  "<<board_ele[2][2]<<"  \n";
    std::cout<<"     |     |     \n";
    std::cout<<"     |     |     \n";

}



void player_row(int choice,char flag)
{
    switch (choice)
    {
    case 1: row=0,columns=0;
            board_ele[row][columns]=flag;
            break;
    case 2: row=0,columns=1;
            board_ele[row][columns]=flag;
            break;
    case 3: row=0,columns=2;
            board_ele[row][columns]=flag;
            break;
    case 4: row=1,columns=0;
            board_ele[row][columns]=flag;
            break;
    case 5: row=1,columns=1;
            board_ele[row][columns]=flag;
            break;
    case 6: row=1,columns=2;
            board_ele[row][columns]=flag;
            break;
    case 7: row=2,columns=0;
            board_ele[row][columns]=flag;
            break;
    case 8: row=2,columns=1;
            board_ele[row][columns]=flag;
            break;
    case 9: row=2,columns=2;
            board_ele[row][columns]=flag;
            break;                                                                
    
    default:
        break;
    }
    
           
           
}
void player_turn()
{
     char flag='O';
     if(flag=='O')
     {
        std::cout<<"plaer 1 turn:";
        std::cin>>choice;   
        player_row(choice,flag);

        display_board();
        
        
     }
     flag='X';
     if(flag=='X')
     {
        std::cout<<"plaer 2 turn:";
        std::cin>>choice;   
        player_row(choice,flag);

        display_board();

        
     } 
     flag='O';  
}
bool game_rule()
{
       
   if ((board_ele[0][0]=='X'&&board_ele[1][1]=='X'&&board_ele[2][2]=='X')||(board_ele[0][0]=='X'&&board_ele[0][1]=='X'&&board_ele[0][2]=='X')||(board_ele[1][0]=='X'&&board_ele[1][1]=='X'&&board_ele[1][2]=='X')||(board_ele[2][0]=='X'&&board_ele[2][1]=='X'&&board_ele[2][2]=='X')||(board_ele[0][0]=='X'&&board_ele[1][0]=='X'&&board_ele[2][0]=='X')||(board_ele[0][1]=='X'&&board_ele[1][1]=='X'&&board_ele[2][1]=='X')||(board_ele[0][2]=='X'&&board_ele[1][2]=='X'&&board_ele[2][2]=='X')||(board_ele[0][2]=='X'&&board_ele[1][1]=='X'&&board_ele[2][0]=='X'))
   {
           return true;
   }
   else if ((board_ele[0][0]=='O'&&board_ele[1][1]=='O'&&board_ele[2][2]=='O')||(board_ele[0][0]=='O'&&board_ele[0][1]=='O'&&board_ele[0][2]=='O')||(board_ele[1][0]=='O'&&board_ele[1][1]=='O'&&board_ele[1][2]=='O')||(board_ele[2][0]=='O'&&board_ele[2][1]=='O'&&board_ele[2][2]=='O')||(board_ele[0][0]=='O'&&board_ele[1][0]=='O'&&board_ele[2][0]=='O')||(board_ele[0][1]=='O'&&board_ele[1][1]=='O'&&board_ele[2][1]=='O')||(board_ele[0][2]=='O'&&board_ele[1][2]=='O'&&board_ele[2][2]=='O')||(board_ele[0][2]=='O'&&board_ele[1][1]=='O'&&board_ele[2][0]=='O'))
   {
           return true;
   }
   else
   {
           return false;
   }
   
   
}

int main(){
    int breake;
    char player1,player2; 

    std::cout<<"\t\ttic  tac  toe\n"<<std::endl;

    std::cout<<"\n\t\tplayer 1:[X}\n"<<std::endl;

    std::cout<<"\n\t\tplayer 2:[O]\n"<<std::endl;
    
    display_board();

  
       for (int i = 0; i < 9; i++)
       {
             if(game_rule()==true)
             {
                     std::cout<<"player 1 won";
                     break;
             }
             if(game_rule()==true)
             {
                 std::cout<<"player 2 won";
                 break;    
             }
             player_turn();
             
             
             
       }

       
       
     

   
    
}