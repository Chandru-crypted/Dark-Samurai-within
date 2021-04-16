#ifndef USER_C
#define USER_C

#define name_len_limit 20

typedef struct User_info {
	char * name;
	int name_length;
	int which_lvl;
	int digit_entered;
} User_info;

typedef enum User_info_status{
	not_valid_name = -1, 
	not_valid_digit = -1,
	valid_name = 1, 
	valid_digit = 1,
	no_mem = 0

} User_info_status;

int intialise_name(User_info *);
int intialise_which_lvl(User_info *);
int find_length(User_info *);
int allocate_name(User_info *);
int change_lvl(User_info *, int );
User_info_status getUsername(User_info *);
User_info_status getUserdigit(User_info *);
void deallocate_name(User_info *);
#endif