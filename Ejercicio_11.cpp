#include<stdio.h>
#include<stdlib.h>

int main(){
float m,x1,x2,y1,y2;

printf ("\nIntroduce el valor de X de el primer vector");
scanf ("%f",&x1);
printf ("\nIntroduce el valor de Y de el primer vector");
scanf ("%f",&y1);
printf ("\nIntroduce el valor de X de el segundo vector");
scanf ("%f",&x2);
printf ("\nIntroduce el valor de y de el segundo vector");
scanf ("%f",&y2);

m=(y1-y2)/(x1-x2);

printf ("\n\tLa pendiente %0.2f tiende a infinito",m);
printf ("\nLa linea es vertical");


}

