/* -------------------------------------------------------------------------
@file game.c

@date 12/02/16 00:50:00
@author Martin Noblia
@email martin.noblia@openmailbox.org

@brief

@detail

Licence:
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
---------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------
                              includes
-------------------------------------------------------------------------*/
#include "../inc/main.h"


/*-------------------------------------------------------------------------
                              implementations
-------------------------------------------------------------------------*/
int game_init_screen() {
   initscr();
   printw("test");
   noecho();
   refresh();

   return 0;
}

int game_init_map() {
   /* test map */
   mvprintw( 8, 13, "------------------");
   mvprintw( 9, 13, "|................|");
   mvprintw(10, 13, "|................|");
   mvprintw(11, 13, "|................|");
   mvprintw(12, 13, "|................|");
   mvprintw(13, 13, "|................|");
   mvprintw(14, 13, "|................|");
   mvprintw(15, 13, "|................|");
   mvprintw(16, 13, "------------------");

   return 0;
}

int game_user_inputs(uint8_t user_imput, Pole* pole) {

   /* Vim user imputs */
   switch (user_imput) {
      case 'h':
      case 'H':
         if (pole_check_move_left(pole)) {
           pole_move_left(pole);
         }
         break;
      case 'j':
      case 'J':
         if (pole_check_move_down(pole)) {
            pole_move_down(pole);
         }
         break;
      case 'k':
      case 'K':
         if (pole_check_move_up(pole)) {
            pole_move_up(pole);
         }
         break;
      case 'l':
      case 'L':
         if (pole_check_move_rigth(pole)) {
            pole_move_rigth(pole);
         }
         break;
   }
   return 0;
}
