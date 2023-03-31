#include <stdio.h>
void main(void){
   double weight,height;
   int BMI;
    printf("input weight in kilograms:\n");
    scanf("%d", &weight);
    printf("\ninput height in meters:\n");
    scanf("%d", &height);
BMI = weight / (height * height);
if (BMI < 18.5)
{
printf("Your BMI is %.2lf, which is in the under weight range.", BMI);
}
else if (BMI == 18.5 || BMI < 25)
{
printf("Your BMI is %.2lf, which is in the normal weight range.", BMI);
}
else if (BMI == 25 || BMI < 30)
{
printf("Your BMI is %.2lf, which is in the overweight range.", BMI);
}
else if (BMI >= 30)
{
printf("Your BMI is %.2lf, which is in the obese.", BMI);
}
}