#include "char_operations.h" 
#include <stdio.h>
void initialise_mat(char mat[height_of_mat][width_of_mat]){
	for (int i = 0; i < height_of_mat; i++) {
		for (int j = 0; j < width_of_mat; j++) {
			mat[i][j] = ' ';
		}
	}
}

void display_mat(char mat[height_of_mat][width_of_mat]){
	for (int i = 0; i < height_of_mat; i++) {
		for (int j = 0; j < width_of_mat; j++) {
			printf("%c", mat[i][j]);
		}
		printf("\n");
	}
}