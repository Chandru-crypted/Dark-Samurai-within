#include "char_operations.h"
#include "user.h"
#include "frames.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int game_start(User_info * User){
	int ret = 0;
	char mat[height_of_mat][width_of_mat];
	char alphabet_bag[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
							'h', 'i', 'j', 'k', 'l', 'm', 'n', 
							'o', 'p', 'q', 'r', 's', 't', 'u',
							'v', 'w', 'x', 'y', 'z'};
	char chars_to_be[len_of_chars_to_be_put_into_boxes];
	ret = getUsername(User);
	if (ret != 1){
		printf("Please provide correct name next time, please restart the game");
		return 0;
	}
	srand(time(0));
	initialise_mat(mat);
	build_chars_to_be_put_into_box(chars_to_be, User->name, alphabet_bag);
	int start = 0, stop = 0;
	for(User->which_lvl = 0; User->which_lvl < User->name_length ;User->which_lvl += 1){
		stop = start + noofbox;
		boxes_generator(mat, chars_to_be, start, stop);
		display_mat(mat);
		ret = getUserdigit(User);
		if (ret != 1){
			printf("\nPlease give a input between 1 to 5\n");
		}
		if (chars_to_be[(User->which_lvl * noofbox) + User->digit_entered - 1] != User->name[User->which_lvl]){
			printf("\nWell played, Good Game, score = %d / %d\n", User->which_lvl, User->name_length);
			return 0;
		}
		start = stop;
	}
	if (User->which_lvl == User->name_length){
		printf("\nCongrats ! You have won it\n"); 
	}
	return 1;
}