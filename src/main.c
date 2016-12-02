/* -------------------------------------------------------------------------
@file main.c

@date 12/02/16 00:46:27
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
#include "../inc/main.h"

int main(void)
{
   int ch;
   game_init_screen();
   game_init_map();
   Pole* dominant;
   dominant = pole_init(3,3);
   pole_draw(dominant);
   while ((ch = getch()) != 'q') {
   }
   endwin();

   return 0;
}
