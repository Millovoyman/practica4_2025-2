// Emilio Flores Mejía
// Ejercicio 3
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int res = 0;
    int i;
    
    for(i = 0; i < 11; i++);
    {
        res = res + i;
    }
    printf("Solución 1 - El número es: %d\n", res);
    
    res = 0;
    for(i = 1; i <= 10; i++);
    {
        res = res + i;
    }
    printf("Solución 2 - El número es: %d\n", res);
    
    res = 0;
     for(i = 0; i <= 10; i++);
    {
        res = res + i;
    }
    printf("Solución 3 - El número es: %d\n", res);
    
    res = 0;
     for(i = 1; i < 11; i++);
    {
        res = res + i;
    }
    printf("Solución 4 - El número es: %d\n", res);
    
    return 0;
}
