#include<stdio.h>
int main()
{
    float ht,wt,bmi;
    scanf("%f%f",&wt,&ht);
    bmi=(wt/(ht/100*ht/100));
    
    if(bmi<18.5)
    printf("You are underweight. Have an apple daily.");
    else if(bmi>=18.5&&bmi<=24.9)
    printf("You are normal. Go walking daily and maintain it.");
    else if(bmi>=25.0&&bmi<=29.9)
    printf("You are overweight. Go to gym daily.");
    else
    printf("You are obese. Go to doctor.");
    return 0;
}
