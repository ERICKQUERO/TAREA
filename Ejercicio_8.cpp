#include<stdio.h>
#include<stdlib.h>

int main(){

    int n1,n2,n3;
    printf("\n Introduzca el primer valor: ");
    scanf("%d",&n1);
    printf("\n Introduzca el segundo valor: ");
    scanf("%d",&n2);
    printf("\n Introduzca el tercer valor: ");
    scanf("%d",&n3);

    if(n1<n2 && n1<n3){
      if(n2<n3)  {
        printf("\n %d", n1);
        printf("\n %d", n2);
        printf("\n %d", n3);
      }
      else{
        printf("\n %d", n1);
        printf("\n %d", n3);
        printf("\n %d", n2);
      }
    }
    if(n2<n1 && n2<n3){
        if (n1<n3){
        printf("\n %d", n2);
        printf("\n %d", n1);
        printf("\n %d", n3);
        }
        else{
        printf("\n %d", n2);
        printf("\n %d", n3);
        printf("\n %d", n1);
      }
    }

    if(n3<n1 && n3<n2){
    if(n1<n2)  {
        printf("\n %d", n3);
        printf("\n %d", n1);
        printf("\n %d", n2);
      }
      else{
        printf("\n %d", n3);
        printf("\n %d", n2);
        printf("\n %d", n1);
      }
      }

}
