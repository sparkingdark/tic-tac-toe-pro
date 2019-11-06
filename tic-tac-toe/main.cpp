#include<iostream>
#include<stdlib.h>

/* struct index
{
    int row,colum;
};*/

int choice;

char board_ele[3][3]={'1','2','3','4','5','6','7','8','9'};

void display_board(){
    system("CLS");
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


/* struct index find_index_update(const char* a[],int n,int elem)
{
    

	int i = 0;
    int j=0;
	while (i < n)
	{
        while (j<n)
        {
        
		if (a[i][j] == elem) {
			break;
		}
        else
        {
            j++;
        }
        }
		i++;
	}
    
    struct index p;
	if(i<n&&j<n)
    {
        p.row=i;
        p.colum=j;
        return p;
    }
    
    p.row=0;
    p.colum=0;
    return p;
    
    
}*/

void player_1()
{
    std::cin>>choice;

    switch (choice)
    {
       case 1:board_ele[0][0]='X';
              break;
       case 2:board_ele[0][1]='X';
              break;
       case 3:board_ele[0][2]='X';
              break;
        case 4:board_ele[1][0]='X';
              break;
        case 5:board_ele[1][1]='X';
              break;
        case 6:board_ele[1][2]='X';
              break;
        case 7:board_ele[2][0]='X';
              break;
        case 8:board_ele[2][1]='X';
              break;
        case 9:board_ele[2][2]='X';
              break;
              
        default:std::cout<<"invalid option";            
    }
}

void player_2()
{
    std::cin>>choice;

    switch (choice)
    {
       case 1:board_ele[0][0]='O';
              break;
       case 2:board_ele[0][1]='O';
              break;
       case 3:board_ele[0][2]='O';
              break;
        case 4:board_ele[1][0]='O';
              break;
        case 5:board_ele[1][1]='O';
              break;
        case 6:board_ele[1][2]='O';
              break;
        case 7:board_ele[2][0]='O';
              break;
        case 8:board_ele[2][1]='O';
              break;
        case 9:board_ele[2][2]='O';
              break;
              
        default:std::cout<<"invalid option";            
    }
}

void player_turn()
{
     int flag=0;
     if(flag==0)
     {
        player_1(); 

        display_board();
        
        flag=1;
     }
     else if(flag==1)
     {
        player_2();

        display_board();

        flag=0;
     }   
}


int main(){
    int breake;
    char player1,player2; 

    std::cout<<"\t\ttic  tac  toe\n"<<std::endl;

    std::cout<<"\n\t\tplayer 1:[X}\n"<<std::endl;

    std::cout<<"\n\t\tplayer 2:[O]\n"<<std::endl;
    
    display_board();
    
    //struct index updater;

   while (true)
   {
       player_turn();
       
       std::cout<<"if want to break;";
       std::cin>>breake;
       if(breake==1)break;
   }
   

   
    
}