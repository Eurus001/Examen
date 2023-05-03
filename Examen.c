#include <stdio.h>

void ImprimirFibonacci(int n){

    int a, b, c;

    a = b = 1;
   
    printf("El termino 1 de la serie de fibonacci es %d \n El termino 2 de la serie de fibonacci es %d ", a, b);

    for(int i = 1; i <= n-2; i++) {

        c = a + b;
        printf("El termino %d de la serie de fibonacci es: %d \n", (i + 2) , c);
        a = b;
        b = c;
    }
    
}

int main(){

    int n;

    printf("Ingrese un numero entero positivo n para generar los primeros n digitos de la serie de fibonacci: \n");

    scanf("%d", &n);

    if (n > 0){

        ImprimirFibonacci(n);

    } else {
        printf("Su numero no es un entero positivo");
    }


    return 0; 
}