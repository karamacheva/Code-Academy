#include<stdio.h>

/*Задача 18 Довършете задачата за кемперите от миналия път като добавите
променлива, в която да се събират парите, които клиента дължи на компанията.
Принтирайте резултата. Питайте клиента дали иска още налични продукти.*/

int main(void){
    unsigned char countKaravani=3;
    unsigned char countKemperi=3;
    float priceKaravani=90;
    float priceKemperi=100;
    float dyljimaSum=0;
    unsigned char daProdyljiLi=1;
    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    while(daProdyljiLi==1){
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    unsigned int rez;
    scanf("%u", &rez);
    if(rez==1){
        if(countKaravani==0){
            printf("Karavanite svyrshiha\n");
            break;
        }
        dyljimaSum+=90;
        countKaravani--;
    }
    else if(rez==2){
        if(countKemperi==0){
            printf("Kemperite svyrshiha\n");
            break;
        }
        dyljimaSum+=100;
        countKemperi--;
    }
    else{
        printf("Invalid input\n");
    }
    printf("Ako iskash da prodyljish da naemash natisni 1. Ako ne iskash natisni 0\n");
    scanf("%d",&daProdyljiLi);
    }
    printf("Sumata koqto dyljite e : %f lv\n", dyljimaSum);
    return 0;
}

