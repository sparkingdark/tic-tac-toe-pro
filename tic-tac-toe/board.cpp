#include<iostream>
#include<cstdlib>
#include"board.h"
#include"board_ele.h"


namespace board
{
    void information()
{
    std::cout<<"\t\t---------tic  tac  toe----------\n"<<std::endl;

    std::cout<<"\n\t\t------player 1:[O]-------\n"<<std::endl;

    std::cout<<"\n\t\t-----player 2:[X]-----\n"<<std::endl;
    
}


void display_board(){
    system("clear");
    information();

    std::cout<<"\t\t"<<"     |     |     \n";
    std::cout<<"\t\t"<<" "<<board_ele[0][0]<<"   |   "<<board_ele[0][1]<<" |  "<<board_ele[0][2]<<"  \n";
    std::cout<<"\t\t"<<"     |     |     \n";
    std::cout<<"\t\t"<<"-----|-----|-----\n";
    std::cout<<"\t\t"<<"     |     |     \n";
    std::cout<<"\t\t"<<" "<<board_ele[1][0]<<"   |   "<<board_ele[1][1]<<" |  "<<board_ele[1][2]<<"  \n";
    std::cout<<"\t\t"<<"     |     |     \n";
    std::cout<<"\t\t"<<"-----|-----|-----\n";
    std::cout<<"\t\t"<<"     |     |     \n";
    std::cout<<"\t\t"<<" "<<board_ele[2][0]<<"   |   "<<board_ele[2][1]<<" |  "<<board_ele[2][2]<<"  \n";
    std::cout<<"\t\t"<<"     |     |     \n";
    std::cout<<"\t\t"<<"     |     |     \n";

}

} // namespace board
