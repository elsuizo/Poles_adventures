/* -------------------------------------------------------------------------
@file pole.c

@date 12/02/16 01:01:47
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
#include "../inc/pole.h"

Pole* pole_init(uint8_t initial_x, uint8_t initial_y) {
   Pole* new_Pole = (Pole*)malloc(sizeof(Pole));
   if (new_Pole == NULL) {
      printf("memory allocation error\n");
      return NULL;
   }
   new_Pole->x_position = initial_x;
   new_Pole->y_position = initial_y;

   return new_Pole;
}

void pole_draw(Pole* pole) {
   mvprintw(pole->y_position, pole->x_position, "X");
}

void pole_move_left(Pole* pole) {
   mvprintw(pole->y_position, pole->x_position, ".");
   pole->x_position--;
   pole_draw(pole);
}

void pole_move_down(Pole* pole) {
   mvprintw(pole->y_position, pole->x_position, ".");
   pole->y_position++;
   pole_draw(pole);
}

void pole_move_up(Pole* pole) {
   mvprintw(pole->y_position, pole->x_position, ".");
   pole->y_position--;
   pole_draw(pole);
}

void pole_move_rigth(Pole* pole) {
   mvprintw(pole->y_position, pole->x_position, ".");
   pole->x_position++;
   pole_draw(pole);
}

bool pole_check_move_left(Pole* pole) {
   uint8_t new_x;
   uint8_t new_y;
   new_x = pole->x_position;
   new_y = pole->y_position;
   return (mvinch(new_y, new_x - 1) == '.') ? true: false;
}

bool pole_check_move_down(Pole* pole) {
   uint8_t new_x;
   uint8_t new_y;
   new_x = pole->x_position;
   new_y = pole->y_position;
   return (mvinch(new_y + 1, new_x) == '.') ? true: false;
}

bool pole_check_move_up(Pole* pole) {
   uint8_t new_x;
   uint8_t new_y;
   new_x = pole->x_position;
   new_y = pole->y_position;
   return (mvinch(new_y - 1, new_x) == '.') ? true: false;
}

bool pole_check_move_rigth(Pole* pole) {
   uint8_t new_x;
   uint8_t new_y;
   new_x = pole->x_position;
   new_y = pole->y_position;
   return (mvinch(new_y, new_x + 1) == '.') ? true: false;
}
