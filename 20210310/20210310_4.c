/*Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията.*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define numberOfPackages 3 

typedef struct package
{
    float weight;
    float volume;
} t_package;

FILE *fp;

void getPackageInfo(t_package *p)
{
    float buff;
    printf("Enter package weight: \n");
    scanf(" %lf", &buff);
    p->weight = buff;
    printf("Enter package volume: \n");
    scanf("%lf", &buff);
    p->volume = buff;
    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }
}

void printPackage(t_package *p)
{
    printf("Weight: %.2lf\n", p->weight);
    printf("Volume: %.2lf\n", p->volume);
    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }
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
if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
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
    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
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
    if (errno == 0)
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, "Succsessfull");
    }
    else
    {
        fprintf(fp, "%s -> %d : %s\n", __func__, errno, strerror(errno));
    }
}

int main(void)
{
    int i;
    float priceBulk = 0, priceSeparately = 0;
    fp = fopen("myfile4.txt", "w");
    if (fp == NULL)
    {
        printf("Problem opening file!\n");
        exit(0);
    }
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
    fclose(fp);

    return 0;
}