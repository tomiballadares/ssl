#include "Conversion.h"
#include <stdio.h>

const int LOWERF =0;
const int UPPERF=300;
const int STEPF=20;

const int LOWERC= -17;
const int UPPERC=148; 
const int STEPC=11;

int fahr;
int cels;

int main(){


printf ("Conversion de Fahrenheit a Celsius \n");

    for (int fahr=LOWERF; fahr <=UPPERF; fahr=fahr+STEPF){
        printf("%3d %6.1f\n", fahr, Celsius(fahr));
        fahr =fahr +STEPF;
}

printf ("Conversion de Celsius a Fahrenheit \n");
    for (int cels=LOWERC; cels<= UPPERC; cels=cels+STEPC){
        printf("%3d %6.1f\n", cels, Fahrenheit(cels));
        cels=cels+STEPC;
}


}