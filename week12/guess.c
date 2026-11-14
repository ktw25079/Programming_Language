#include <stdlib.h>
#include <time.h>
#include "guess.h"
int target;
void initialize_game(void)
{
    srand((unsigned)time(NULL));
    target=rand()%100+1;
}
