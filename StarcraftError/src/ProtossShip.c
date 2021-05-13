#include "ProtossShip.h"
#include "TerranShip.h"

FILE *fp;

protossShip *initPhoenix(protossShip *airShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    airShip->protossHP = PHOENIX_HEALTH;
    airShip->protossShield = PHOENIX_SHIELD;
    airShip->protossDMG = PHOENIX_DAMAGE;
    airShip->shipType = PHOENIX;

    if (errno == 0){
        fprintf(fp, "initPhoenix() success\n");
    }
    else {
        fprintf(fp,"\ninitPhoenix() has errno: %d : %s\n", errno, strerror(errno));
    }
    

    return airShip;
}

protossShip *initCarrier(protossShip *airShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    airShip->protossHP = CARRIER_HEALTH;
    airShip->protossShield = CARRIER_SHIELD;
    airShip->protossDMG = CARRIER_DAMAGE;
    airShip->shipType = CARRIER;

    if (errno == 0){
        fprintf(fp, "initCarrier() success\n");
    }
    else {
        fprintf(fp,"\ninitCarrier() has errno: %d : %s\n", errno, strerror(errno));
    }
    

    return airShip;
}

int carrierInteceptors(protossShip *airShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    if (airShip->protossHP < CARRIER_HEALTH){
        return DAMAGED_STATUS_INTERCEPTORS;
    }else{
        return MAX_INTERCEPTORS;
    }

    if (errno == 0){
        fprintf(fp, "carrierInteceptors() success\n");
    }
    else {
        fprintf(fp,"\ncarrierInteceptors() has errno: %d : %s\n", errno, strerror(errno));
    }
    
}

protossShip *damageTaken(protossShip *pShip,terranShip *tShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    static int damageToHP;
    if(pShip->protossShield <= tShip->terranDMG){
        damageToHP = tShip->terranDMG - pShip->protossShield;
        pShip->protossShield = 0;
        pShip->protossHP -= damageToHP;
        damageToHP = 0;
    }else{
        pShip->protossShield -= tShip->terranDMG;
    }

    if (errno == 0){
        fprintf(fp, "damageTaken() success\n");
    }
    else {
        fprintf(fp,"\ndamageTaken() has errno: %d : %s\n", errno, strerror(errno));
    }
    

    return pShip;
}

protossShip *regenerateShield(protossShip *pShip){

    fp = fopen("data.log", "a+");
    if (NULL == fp){
        perror("Error:");
        fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
    }

    if(pShip->shipType == PHOENIX){
        pShip->protossShield = pShip->protossShield + PHOENIX_SHIELD_REGENERATE_RATE;
        if(pShip->protossShield >= PHOENIX_SHIELD){
            pShip->protossShield = PHOENIX_SHIELD;
        }
    }else{
        pShip->protossShield += CARRIER_SHIELD_REGENERATE_RATE;
        if(pShip->protossShield >= CARRIER_SHIELD){
            pShip->protossShield = CARRIER_SHIELD;
        }
    }

    if (errno == 0){
        fprintf(fp, "regenerateShield() success\n");
    }
    else {
        fprintf(fp,"\nregenerateShield() has errno: %d : %s\n", errno, strerror(errno));
    }

    return pShip;
}
