#include "BattleField.h"

FILE *fp;

int terranTurnProcess(BattleField *battleField){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    static int turnCounter = 0;
    int lastShip,terranFleetSize,currShip;
    lastShip = vectorGetSize(&battleField->protossFleet);
    protossShip* protossAirShip = battleField->protossFleet.items[lastShip-1];
    terranShip* terranAirShip;
    terranFleetSize = vectorGetSize(&battleField->terranFleet);
    for(currShip = 0;currShip<terranFleetSize;currShip++){
        terranAirShip = battleField->terranFleet.items[currShip];
        if(terranAirShip->shipType == VIKING){
            terranAirShip = vikingAttack(terranAirShip,protossAirShip);
        }else{
            terranAirShip = BattleCruserAttack(terranAirShip,turnCounter);
        }
        protossAirShip = damageTaken(protossAirShip,terranAirShip);
        if (protossAirShip->protossHP <= 0){
            protossShipDestroyed(terranAirShip,currShip,lastShip-1);
            vectorDelete(&battleField->protossFleet, lastShip - 1);
            if (vectorIsEmpty(&battleField->protossFleet)){
                return 1;
            }
            lastShip = vectorGetSize(&battleField->protossFleet);
            protossAirShip = battleField->protossFleet.items[lastShip - 1];
        }
    }
    printf("Last Protoss AirShip with ID: %d has %d health and %d shield left\n", lastShip - 1, protossAirShip->protossHP, protossAirShip->protossShield);
    protossAirShip = regenerateShield(protossAirShip);
    turnCounter++;
    if(turnCounter > YAMATO_CANNON_LOADING_TURNS){
        turnCounter = 0;
    }

    if (errno == 0){
        fprintf(fp, "terranTurnProcess() success\n");
    }
    else {
        fprintf(fp,"\nterranTurnProcess() has errno: %d : %s\n", errno, strerror(errno));
    }

    return 0;
}

void protossShipDestroyed(terranShip *terranAirship,int terranShipId,int protossShipId){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    if(terranAirship->shipType == VIKING){
        printf("Viking with ID: %d killed enemy airship with ID: %d\n",terranShipId,protossShipId);
    }else{
        printf("BattleCruiser with ID: %d killed enemy airship with ID: %d\n",terranShipId,protossShipId);
    }

    if (errno == 0){
        fprintf(fp, "protossShipDestroyed() success\n");
    }
    else {
        fprintf(fp,"\nprotossShipDestroyed() has errno: %d : %s\n", errno, strerror(errno));
    }
}
