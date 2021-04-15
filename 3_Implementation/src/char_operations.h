#ifndef CHAR_OPERATIONS_H
#define CHAR_OPERATIONS_H

// using any macros here
#define width_of_one_box 7
#define height_of_one_box 6
#define noofbox 5
#define width_of_mat (width_of_one_box * noofbox * 2)
#define height_of_mat height_of_one_box
#define len_of_chars_to_be_put_into_box (noofbox)
#define len_of_chars_to_be_put_into_boxes (noofbox * 20)
#define len_of_alphabet_bag 26 

// prototype of the functions that i want to make it public
void boxes_generator(char[height_of_mat][width_of_mat], char[len_of_chars_to_be_put_into_box], int , int);
void build_chars_to_be_put_into_box(char [len_of_chars_to_be_put_into_boxes], char [20], char[len_of_alphabet_bag]);
#endif