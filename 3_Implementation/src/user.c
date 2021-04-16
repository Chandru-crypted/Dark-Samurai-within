/**
 * @file user.c
 * @author Chandrasekaran 
 * @brief This file contains the methods to access the user structure
 * All the functions mentioned in this file returns zero when the User 
 * pointer is NULL
 * A common way of returning zero is followed by which we can know 
 * that the desired operation has not happened due to an error.
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "user.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
//#include <conio.h>
#include <stdlib.h>

char get_input();

/**
 * @brief Finds the length of the name field in the User structure
 * The common way breifed in the file description is followed  
 * Also returns zero when the name points to NULL; 
 * @param User 
 * @return int 
 */
int find_length(User_info * User){
	if (NULL == User){
		return 0;
	}
	else{
		if (NULL == User->name){
			return 0;
		}
		User->name_length = strlen(User->name);
		return 1;
	} 
}
/**
 * @brief allocates memory for storing the user name
 *  If there is no memory to allocate name it returns zero
 *  The common way breifed in the file description is followed 
 * @param User 
 * @return int 
 */
int allocate_name(User_info * User){
	if (NULL == User){
		return 0;
	}
	else{
		User->name = (char*)malloc(name_len_limit*sizeof(char));
		if (NULL == User->name){
			return 0;
		}
		return 1;
	}
}

/**
 * @brief Used to initialise the level of the User
 *  The common way breifed in the file description is followed
 * @param User 
 * @return int 
 */
int intialise_which_lvl(User_info * User){
	if (NULL == User){
		return 0;
	}
	else{
		User->which_lvl = 0;
		return 1;
	}
}
/**
 * @brief Changes the attribute which level in the structure pointer 
 * The common way breifed in the file description is followed
 * @param User 
 * @param level 
 * @return int 
 */
int change_lvl(User_info * User, int level){
	if (NULL == User){
		return 0;
	}
	else{
		User->which_lvl = level;
		return 1;
	}
}
/**
 * @brief Used to initialise the name (char pointer) of the User
 * The common way breifed in the file description is followed
 * @param User 
 * @return int 
 */
int initialise_name(User_info * User){
	if (NULL == User){
		return 0;
	}
	else{
		User->name = NULL;
		return 1;
	}
}
/**
 * @brief Get the Username from stdin
 * Also checking the input entered whether it contains only lowecase letter 
 * if it contains upper case letter it is converted into lowercase
 * @param User 
 * @return User_info_status 
 */

User_info_status getUsername(User_info * User){
	int ret = 0;
	ret = initialise_name(User); 
	// name is intialised
	ret = intialise_which_lvl(User);
	// lvl is intialised
	ret = allocate_name(User);
	if (0 == ret){
		return no_mem;
	}
	printf("Enter your name : ");
	scanf("%19s", User->name);
	for(int i = 0; *(User->name + i) != '\0';i++){
		if (isalpha(*(User->name + i))){
			if (isupper(*(User->name + i))){
				*(User->name + i) = tolower(*(User->name + i));
			}
		}
		else{
			return not_valid_name;
		}
	}
	find_length(User);
	return valid_name;
}

char get_input(){
	char ch = 0;
	// while(1){
	// 	if (kbhit()){
	// 		ch = getch();
	// 		return ch;
	// 	}
	// } 
	ch = getchar();
	ch = getchar();
	return ch;
}

User_info_status getUserdigit(User_info * User){
	char ch = 0;
	printf("\n");
	ch = get_input();
	if (((int)(ch - 48) >= 1) && ((int)(ch - 48) < 6)){
		User->digit_entered = ch - 48;
		return valid_digit;
	}
	else{
		return not_valid_digit;
	}
	return valid_digit;
}

void deallocate_name(User_info * User){
	free(User->name);
	User->name = NULL;
}