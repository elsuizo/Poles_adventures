/* -------------------------------------------------------------------------
@file pole.h

@date 12/02/16 01:02:25
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
#ifndef POLE_H
#define POLE_H
/*-------------------------------------------------------------------------
                              includes
-------------------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include <ncurses.h>

/*-------------------------------------------------------------------------
                              custom types
-------------------------------------------------------------------------*/
typedef struct _pole {
   uint8_t x_position;
   uint8_t y_position;
}Pole;

/*-------------------------------------------------------------------------
                              prototypes
-------------------------------------------------------------------------*/
Pole* pole_init(uint8_t initial_x, uint8_t initial_y);
void pole_draw(Pole* pole);
void pole_move_left(Pole* pole);
void pole_move_down(Pole* pole);
void pole_move_up(Pole* pole);
void pole_move_rigth(Pole* pole);

bool pole_check_move_rigth(Pole* pole);
bool pole_check_move_left(Pole* pole);
bool pole_check_move_down(Pole* pole);
bool pole_check_move_up(Pole* pole);
#endif

