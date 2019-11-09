#pragma once

extern int row,columns,choice;

namespace game{
   void player_row(int choice,char flag);
   void player_turn();
   bool game_rule();
}