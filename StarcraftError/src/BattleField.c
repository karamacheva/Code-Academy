#include "BattleField.h"

FILE *fp;

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr){

  fp = fopen("data.log", "a+");
  if (NULL == fp){
    perror("Error:");
    fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
  }

  int i, len;
  len = strlen(terranFleetStr);
  vectorInit(&battleField->terranFleet, len);
  for (i = 0; i < len; i++){
    terranShip *airShip = (terranShip *)malloc(sizeof(terranShip));

    /*проверка при заделяне на памет*/
    if (NULL == airShip){
      perror("Allocation memory error\n");
      exit(0);
    }

    if (terranFleetStr[i] == 'v'){
      airShip=initViking(airShip);
      vectorPush(&battleField->terranFleet, airShip);
    }else if (terranFleetStr[i] == 'b'){
      airShip=initBattleCrusher(airShip);
      vectorPush(&battleField->terranFleet, airShip);
    }else{
      printf("Invalid ship! The entered ship will not count!\n");
      free(airShip);
    }
  }
  if (vectorIsEmpty(&battleField->terranFleet)){
    perror("Error generating terrain fleet!\n");
    exit(1);
  }

  if (errno == 0){
    fprintf(fp, "generateTerranFleet() success\n");
  }
  else {
    fprintf(fp,"\ngenerateTerranFleet() has errno: %d : %s\n", errno, strerror(errno));
  }
  
}

void generateProtossFleet(BattleField *battleField, const char *protossFleetStr){

  fp = fopen("data.log", "a+");
  if (NULL == fp){
    perror("Error:");
    fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
  }

  int i, len;
  len = strlen(protossFleetStr);
  vectorInit(&battleField->protossFleet, 1);
  for (i = 0; i < len; i++){
    protossShip *airShip = (protossShip*)malloc(sizeof(protossShip));

    /*проверка при заделяне на памет*/
    if (NULL == airShip){
      perror("Allocation memory error\n");
      exit(2);
    }

    if (protossFleetStr[i] == 'p'){
      airShip=initPhoenix(airShip);
      vectorPush(&battleField->protossFleet, airShip);
    }else if (protossFleetStr[i] == 'c'){
      airShip=initCarrier(airShip);
      vectorPush(&battleField->protossFleet, airShip);
    }else{
      printf("Invalid ship! The entered ship will not count!\n");
      free(airShip);
    }
  }
  if (vectorIsEmpty(&battleField->protossFleet)){
    perror("Error generating protoss fleet!\n");
    exit(3);
  }

  if (errno == 0){
    fprintf(fp, "generateProtossFleet() success\n");
  }
  else {
    fprintf(fp,"\ngenerateProtossFleet() has errno: %d : %s\n", errno, strerror(errno));
  }
  
}

void startBattle(BattleField *battleField){

  fp = fopen("data.log", "a+");
  if (NULL == fp){
    perror("Error:");
    fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
  }
  
  while (true){
    if (terranTurnProcess(battleField) == 1){
      printf("TERRAN has won!\n");
      break;
    }

    if (protossTurnProcess(battleField) == 1){
      printf("PROTOSS has won!\n");
      break;
    }
  }

  if (errno == 0){
    fprintf(fp, "startBattle() success\n");
  }
  else {
    fprintf(fp,"\nstartBattle() has errno: %d : %s\n", errno, strerror(errno));
  }
  
}

void deinit(BattleField *battleField){

  fp = fopen("data.log", "a+");
  if (NULL == fp){
    perror("Error:");
    fprintf(fp,"\nerrno: %d : %s\n", errno, strerror(errno));
  }
  
  vectorFree(&battleField->protossFleet);
  if (!vectorIsEmpty(&battleField->protossFleet)){
    perror("Error:");
    exit(4);
  }
  vectorFree(&battleField->terranFleet);
  if (!vectorIsEmpty(&battleField->terranFleet)){
    perror("Error:");
    exit(5);
  }

  if (errno == 0){
    fprintf(fp, "startBattle() success\n");
  }
  else {
    fprintf(fp,"\nstartBattle() has errno: %d : %s\n", errno, strerror(errno));
  }
  
}
