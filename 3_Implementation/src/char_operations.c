#include "char_operations.h"
#include<stdlib.h>

int box_generator(char[height_of_mat][width_of_mat], int, char, char);


// definitions of the functions 

int box_generator(char mat[height_of_mat][width_of_mat], int start_col, char inside_box, char indicating_loc_of_box) {
    int row = 0;
	int mid = width_of_one_box / 2;
    for (int j = start_col; j < (start_col + width_of_one_box); j++) {
        mat[row][j] = '*';
    }
    row++;
    for (int j = start_col; j < (start_col + width_of_one_box); j++) {
        if ((j == start_col) || (j == (start_col + (width_of_one_box - 1)))) {
            mat[row][j] = '|';
        } else {
            mat[row][j] = ' ';
        }
    }
    row++;
    for (int j = start_col; j < (start_col + width_of_one_box); j++) {
        if ((j == start_col) || (j == (start_col + (width_of_one_box - 1)))) {
            mat[row][j] = '|';
        } else if (j == (start_col + mid)) {
            mat[row][j] = inside_box;
        } else {
            mat[row][j] = ' ';
        }
    }
    row++;
    for (int j = start_col; j < (start_col + width_of_one_box); j++) {
        if ((j == start_col) || (j == (start_col + (width_of_one_box - 1)))) {
            mat[row][j] = '|';
        } else {
            mat[row][j] = ' ';
        }
    }
    row++;
    for (int j = start_col; j < (start_col + width_of_one_box); j++) {
        mat[row][j] = '*';
    }
    row++;
    mat[row][start_col + mid - 1] = '[';
    mat[row][start_col + mid] = indicating_loc_of_box;
    mat[row][start_col + mid + 1] = ']';

    start_col += width_of_one_box;
    for (int i = 0; i < height_of_one_box; i++) {
        for (int j = start_col; j < (start_col + width_of_one_box); j++) {
            mat[i][j] = ' ';
        }
    }
	start_col += width_of_one_box;
	return (start_col);

}

void boxes_generator(char mat[height_of_mat][width_of_mat], char chars_to_be_put_into_boxes[len_of_chars_to_be_put_into_boxes], int start, int stop){
	int noofboxes = noofbox;
	int col = 0;
	for (int i = start; i < stop;i++){
		col = box_generator(mat, col, chars_to_be_put_into_boxes[i], (i + 48 + 1 - start));
	}
}

void randomize_alphabet_bag(char alphabet_bag[len_of_alphabet_bag]){
	int i = 0, j = 0, k = 0, temp = 0;
    for (i = 0; i < (len_of_alphabet_bag / 2);i++){
		j = rand() % len_of_alphabet_bag;
		k = rand() % len_of_alphabet_bag;
		temp = alphabet_bag[j];
        alphabet_bag[j] = alphabet_bag[k];
		alphabet_bag[k] = temp;
	}
}

void randomize_chars_to_be_put_into_box(char chars_to_be_put_into_boxes[len_of_chars_to_be_put_into_boxes], int start, int stop){
	int i = 0, j = 0, k = 0, temp = 0, len_of_char = (stop - start);
    for (i = start; i < (stop);i++){
		j = start +(rand() % len_of_char);
		k = start + (rand() % len_of_char);
		temp = chars_to_be_put_into_boxes[j];
        chars_to_be_put_into_boxes[j] = chars_to_be_put_into_boxes[k];
		chars_to_be_put_into_boxes[k] = temp;
	}
	
}

void build_chars_to_be_put_into_box(char chars_to_be_put_into_boxes[len_of_chars_to_be_put_into_boxes], char name[len_of_chars_to_be_put_into_boxes], char alphabet_bag[len_of_alphabet_bag]){
	int j = 0, start = 0, stop = 0; // for chars_to_be_put_into_boox iterator
	for(int i = 0; name[i] != '\0'; i++){
		start = j;
		randomize_alphabet_bag(alphabet_bag);
		chars_to_be_put_into_boxes[j] = name[i];
		j++;
		int count = 1, k = 0;
		while (count < noofbox){
			if(alphabet_bag[k] != name[i]){
				chars_to_be_put_into_boxes[j] = alphabet_bag[k];
				j++;
				count++;
			}
			k++;
		}
		stop = j;
		randomize_chars_to_be_put_into_box(chars_to_be_put_into_boxes, start ,stop);
	} 
}