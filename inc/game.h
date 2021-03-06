/* -------------------------------------------------------------------------
@file game.h

@date 12/02/16 00:50:56
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
#ifndef GAME_H
#define GAME_H
/*-------------------------------------------------------------------------
                              includes
-------------------------------------------------------------------------*/
#include <ncurses.h>
#include <stdlib.h>
#include <inttypes.h>
#include "../inc/pole.h"
/*-------------------------------------------------------------------------
                              prototypes
-------------------------------------------------------------------------*/
int game_init_screen();
int game_init_map();
int game_user_inputs(uint8_t user_input, Pole* pole);
#endif


