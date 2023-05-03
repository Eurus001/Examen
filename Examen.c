#include <stdio.h>

void ImprimirFibonacci(int n){

    int a, b, c, d;

    a = b = 1;
    d= 2;
    
    //primeros terminos siempre son los mismos


    printf("El termino 1 de la serie de fibonacci es %d \nEl termino 2 de la serie de fibonacci es %d\n", a, b);

    for(int i = 1; i <= n-2; i++) {

        c = a + b;
        printf("El termino %d de la serie de fibonacci es: %d \n", (i + 2) , c);
        a = b;
        b = c;
        d = d + c;
    }

    //suma
    printf ("La suma de los numeros es: %d", d);
}

int main(){

    int n;

    printf("Ingrese un numero entero positivo n para generar los primeros n digitos de la serie de fibonacci: \n");

    scanf("%d", &n);

    //verifica que el entero sea positivo
    if (n > 0){

        ImprimirFibonacci(n);

    } else {
        //error
        printf("Su numero no es un entero positivo");
    }


    return 0; 
}