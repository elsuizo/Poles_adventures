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
#include "../inc/game.h"

int game_init_screen() {
   initscr();
   printw("test");
   noecho();
   refresh();

   return 0;
}

int game_init_map() {
   mvprintw(13, 13, "------------------");
   mvprintw(14, 13, "------------------");
   mvprintw(15, 13, "------------------");
   mvprintw(16, 13, "------------------");
   mvprintw(17, 13, "------------------");
   mvprintw(18, 13, "------------------");
   mvprintw(19, 13, "------------------");
   mvprintw(20, 13, "------------------");
   mvprintw(21, 13, "------------------");

   return 0;
}
