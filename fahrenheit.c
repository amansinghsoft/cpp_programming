#include<stdio.h>
 
int main()
{
    float fahr,celsius;
    printf("Enter temprature in celsius : ");
    scanf("%f",&celsius);

   fahr = (1.8 * celsius) + 32;
   //celsius = 5 * (fahr - 32)/9;
   
   printf("%f\t %f\n", fahr, celsius);
    
    return 0;
}
