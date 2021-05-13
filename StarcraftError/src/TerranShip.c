#include "TerranShip.h"

FILE *fp;

terranShip* initViking(terranShip *airShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    airShip->terranHP=VIKING_HEALTH;
    airShip->terranDMG=VIKING_DAMAGE;
    airShip->shipType=VIKING;

    if (errno == 0){
        fprintf(fp, "initViking() success\n");
    }
    else {
        fprintf(fp,"\ninitViking() has errno: %d : %s\n", errno, strerror(errno));
    }
    

    return airShip;
}

terranShip* initBattleCrusher(terranShip* airShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    airShip->terranHP=BATTLE_CRUSER_HEALTH;
    airShip->terranDMG=BATTLE_CRUSER_DAMAGE;
    airShip->shipType=BATTLE_CRUSER;

    if (errno == 0){
        fprintf(fp, "initBattleCrusher() success\n");
    }
    else {
        fprintf(fp,"\ninitBattleCrusher() has errno: %d : %s\n", errno, strerror(errno));
    }

    return airShip;
}


terranShip* vikingAttack(terranShip* tShip,protossShip* pShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    if(pShip->shipType==PHOENIX){
        tShip->terranDMG=VIKING_DMG_AGAINST_PHOENIX;
    }else{
        tShip->terranDMG=VIKING_DAMAGE;
    }

    if (errno == 0){
        fprintf(fp, "vikingAttack() success\n");
    }
    else {
        fprintf(fp,"\nvikingAttack() has errno: %d : %s\n", errno, strerror(errno));
    }

    return tShip;
}

terranShip* BattleCruserAttack(terranShip* tShip,int turnCount){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    if(turnCount==YAMATO_CANNON_LOADING_TURNS){
        tShip->terranDMG=YAMATO_CANNON_DMG;
    }else{
        tShip->terranDMG=BATTLE_CRUSER_DAMAGE;
    }

    if (errno == 0){
        fprintf(fp, "BattleCruserAttack() success\n");
    }
    else {
        fprintf(fp,"\nBattleCruserAttack() has errno: %d : %s\n", errno, strerror(errno));
    }

    return tShip;
}
