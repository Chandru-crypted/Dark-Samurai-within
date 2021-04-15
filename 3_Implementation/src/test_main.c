#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "char_operations.h"
#include <string.h>
#include <conio.h>

char get_input();

int main() {
	srand(time(0));
    char mat[height_of_mat][width_of_mat];
    for (int i = 0; i < height_of_mat; i++) {
        for (int j = 0; j < width_of_mat; j++) {
            mat[i][j] = ' ';
        }
    }
	char alphabet_bag[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
							'h', 'i', 'j', 'k', 'l', 'm', 'n', 
							'o', 'p', 'q', 'r', 's', 't', 'u',
							'v', 'w', 'x', 'y', 'z'};
	char name[20];
	printf("Enter your name : ");
	scanf("%s", name);
	char chars_to_be[len_of_chars_to_be_put_into_boxes];
	int len = strlen(name); 
	build_chars_to_be_put_into_box(chars_to_be, name, alphabet_bag);
	char ch; 
	int start = 0, stop = 0;
	for(int k = 0; k < len;k++){
		stop = start + noofbox;
		boxes_generator(mat, chars_to_be, start, stop);
		for (int i = 0; i < height_of_mat; i++) {
			for (int j = 0; j < width_of_mat; j++) {
				printf("%c", mat[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		ch = get_input();
		if (ch == 'q'){
			break;
		}
		if (chars_to_be[((k * noofbox) + (int)(ch - 48)) - 1] != name[k]){
			printf("GG Bye");
			break;
		}
		start = stop;
	}
	printf("Congrats ! You have won it"); 
    return 0;
}

char get_input(){
	char ch = 0;
	while(1){
		if (kbhit()){
			ch = getch();
			return ch;
		}
	} 
}