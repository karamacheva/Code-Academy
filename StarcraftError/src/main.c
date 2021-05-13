#include "BattleField.h"

FILE *fp;

int main(){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    const int buffSize = 50;
    char terranFleet[buffSize];
    char protossFleet[buffSize];
    scanf("%s %s", terranFleet, protossFleet);

    BattleField battleField;
    generateTerranFleet(&battleField, terranFleet);
    generateProtossFleet(&battleField, protossFleet);
    startBattle(&battleField);
    deinit(&battleField);

    if (errno == 0){
        fprintf(fp, "main() success\n");
    }
    else {
        fprintf(fp,"\nmain() has errno: %d : %s\n", errno, strerror(errno));
    }
    fclose(fp);
    return EXIT_SUCCESS;
}
