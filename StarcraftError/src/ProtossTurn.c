#include "BattleField.h"

FILE *fp;

int protossTurnProcess(BattleField *battleField){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    int lastTerranShip,protossFleetSize,currShip,numberOfInterceptors;
    lastTerranShip = vectorGetSize(&battleField->terranFleet);
    protossShip* protossAirShip;
    terranShip* terranAirShip = battleField->terranFleet.items[lastTerranShip-1];
    protossFleetSize = vectorGetSize(&battleField->protossFleet);
    for(currShip = 0;currShip < protossFleetSize; currShip++){
        protossAirShip = battleField->protossFleet.items[currShip];
        if(protossAirShip->shipType == CARRIER){
            numberOfInterceptors = carrierInteceptors(protossAirShip);
            for(int numberOfAttacks=0; numberOfAttacks<numberOfInterceptors; numberOfAttacks++){
                terranAirShip->terranHP = terranAirShip->terranHP - protossAirShip->protossDMG;
                if(terranAirShip->terranHP<=0){
                    terranShipDestroyed(protossAirShip,currShip,lastTerranShip-1);
                    vectorDelete(&battleField->terranFleet, lastTerranShip - 1);
                    if (vectorIsEmpty(&battleField->terranFleet)){
                        return 1;
                    }
                    lastTerranShip = vectorGetSize(&battleField->terranFleet);
                    terranAirShip = battleField->terranFleet.items[lastTerranShip - 1];
                }
            }
        }else{
            terranAirShip->terranHP = terranAirShip->terranHP - protossAirShip->protossDMG;
            if(terranAirShip->terranHP <= 0){
            terranShipDestroyed(protossAirShip,currShip,lastTerranShip-1);
            vectorDelete(&battleField->terranFleet, lastTerranShip - 1);
                if (vectorIsEmpty(&battleField->terranFleet)){
                    return 1;
                }
                lastTerranShip = vectorGetSize(&battleField->terranFleet);
                terranAirShip = battleField->terranFleet.items[lastTerranShip - 1];
            }
        }
    }
    printf("Last Terran AirShip with ID: %d has %d health left\n", lastTerranShip - 1, terranAirShip->terranHP);

    if (errno == 0){
        fprintf(fp, "protossTurnProcess() success\n");
    }
    else {
        fprintf(fp,"\nprotossTurnProcess() has errno: %d : %s\n", errno, strerror(errno));
    }

    return 0;
}

void terranShipDestroyed(protossShip *protossAirShip,int protossShipId,int terranShipId){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    if(protossAirShip->shipType == PHOENIX){
        printf("Phoenix with ID: %d killed enemy airship with ID: %d\n",protossShipId,terranShipId);
    }else{
        printf("Carrier with ID: %d killed enemy airship with ID: %d\n",protossShipId,terranShipId);
    }

    if (errno == 0){
        fprintf(fp, "terranShipDestroyed() success\n");
    }
    else {
        fprintf(fp,"\nterranShipDestroyed() has errno: %d : %s\n", errno, strerror(errno));
    }
}