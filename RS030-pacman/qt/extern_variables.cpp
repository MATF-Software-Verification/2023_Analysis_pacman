#include "extern_variables.h"

Game *game = nullptr;
int level_map = 1;
QString player = "Player";

void initializeVariables()
{
    game = new Game();
}
