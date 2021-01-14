#include<stdio.h>

int main(void){
    //количеството на продуктите в магазина
    float tomatoWeight;
    float flourWeight;
    unsigned char yoghurtCount;
    unsigned char iceCreamCount;
    float bonbonsWeight;
    unsigned char lollipopsCount;
    //цените на продуктите
    double tomatoPrice=4.50;
    double flourPrice=1.80;
    double yoghurtPrice=0.50;
    double iceCreamPrice=0.60;
    double bonbonsPrice=1.50;
    unsigned char lollipopsCount;
    double lollipopsPrice=0.15;
    printf("Welcome in our shop! Today we are offering-tomato,flor,yoghurt,bonbons,lollipopsand ice cream!\n");
    //Приемаме,че клиент иска да си купи домати,както е в примера на задачата
    printf("How many kilos of tomatoes would you want?\n ");
    scanf("%f",&tomatoWeight);
    float fTomatoTotal = tomatoWeight * tomatoPrice;
    printf("The total sum is: %f",fTomatoTotal);
    return 0;
}