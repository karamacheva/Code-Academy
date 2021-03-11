/*Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
​
​
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct package
{
    float weight;
    float volume;
} t_package;

void getPackageInfo(t_package *p)
{
    float buff;
    printf("Enter package weight: \n");
    scanf(" %lf", &buff);
    p->weight = buff;
    printf("Enter package volume: \n");
    scanf("%lf", &buff);
    p->volume = buff;
}

void printPackage(t_package *p)
{
    printf("Weight: %.2lf\n", p->weight);
    printf("Volume: %.2lf\n", p->volume);
}

float calculatePrice(float weight, float volume)
{
    float weightP = 0;
    float volumeP = 0;
    if (weight <= 0)
    {
        printf("calculate_price: Invalid value for weight!\n");
        exit(1);
    }
    else if (weight <= 20)
    {
        weightP = 0.46;
    }
    else if (weight <= 50)
    {
        weightP = 0.69;
    }
    else if (weight <= 100)
    {
        weightP = 1.02;
    }
    else if (weight <= 200)
    {
        weightP = 1.75;
    }
    else if (weight <= 350)
    {
        weightP = 2.13;
    }
    else if (weight <= 500)
    {
        weightP = 2.44;
    }
    else if (weight <= 1000)
    {
        weightP = 3.20;
    }
    else if (weight <= 2000)
    {
        weightP = 4.27;
    }
    else if (weight <= 3000)
    {
        weightP = 5.03;
    }
    else if (weight > 3000)
    {
        weightP = 5.03;
    }

    if (volume <= 0)
    {
        printf("calculate_price: Invalid value for weight!\n");
        exit(1);
    }
    else if (volume < 10)
    {
        volumeP = 0.01;
    }
    else if (volume < 50)
    {
        volumeP = 0.11;
    }
    else if (volume < 100)
    {
        volumeP = 0.22;
    }
    else if (volume < 150)
    {
        volumeP = 0.33;
    }
    else if (volume < 250)
    {
        volumeP = 0.56;
    }
    else if (volume < 400)
    {
        volumeP = 1.50;
    }
    else if (volume < 500)
    {
        volumeP = 3.11;
    }
    else if (volume <= 600)
    {
        volumeP = 4.89;
    }
    else if (volume > 600)
    {
        volumeP = 5.79;
    }

    return weightP + volumeP;
}

float bulkPrice(t_package **p, int n)
{
    int i;
    float bulkWeight = 0;
    float bulkVolume = 0;

    for (i = 0; i < n; i++)
    {
        bulkWeight += p[i]->weight;
        bulkVolume += p[i]->volume;
    }

    return calculatePrice(bulkWeight, bulkVolume);
}

void printPackages(t_package **p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("package %d\n", i + 1);
        printPackage(p[i]);
    }
}

int main(void)
{
    int i, numberOfPackages;
    float priceBulk = 0, priceSeparately = 0;
    printf("Please enter the number of packages: \n");
    scanf("%d", &numberOfPackages);
    t_package *packages[numberOfPackages];
    for (i = 0; i < numberOfPackages; i++)
    {
        packages[i] = (t_package *)malloc(sizeof(t_package));
    }
    for (i = 0; i < numberOfPackages; i++)
    {
        printf("package %d\n", i + 1);
        getPackageInfo(packages[i]);
    }
    for (i = 0; i < numberOfPackages; i++)
    {
        priceSeparately += calculatePrice(packages[i]->weight, packages[i]->volume);
    }
    printf("The price calculated separately is %.2lf\n", priceSeparately);
    priceBulk = bulkPrice(packages, numberOfPackages);
    printf("The bulk price is %.2lf\n", priceBulk);
    for (i = 0; i < numberOfPackages; i++)
    {
        free(packages[i]);
    }
    free(packages);

    return 0;
}
