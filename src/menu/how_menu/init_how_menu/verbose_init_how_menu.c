/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** Display the verbose (if set true) of the how menu creation
*/

#include "game_info.h"
#include "menu.h"
#include "mylib.h"
#include "colors.h"

void verbose_how_menu_init_fail(game_t *game)
{
	if (game->verbose == true) {
		my_putstr(LIGHT_BLUE);
		my_putstr("[HOW MENU INIT]\n");
		my_putstr(LIGHT_RED);
		my_putstr("\tHow menu failed to create\n");
		my_putstr(WHITE);
	}
}

void verbose_how_menu_init_ok(game_t *game)
{
	if (game->verbose == true) {
		my_putstr(LIGHT_BLUE);
		my_putstr("[HOW MENU INIT]\n");
		my_putstr(GREEN);
		my_putstr("\tHow menu well created\n");
		my_putstr(WHITE);
	}
}
