#include "char_operations.h"
#include "user.h"
#include "game_engine.h"

int main() {
	User_info User_1;
	User_info * User;
	User = &User_1;
	game_start(User);
	deallocate_name(User);
    return 0;
}
