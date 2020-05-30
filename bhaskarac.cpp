#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
main(){
    setlocale(LC_ALL, "");
    int a, b, c, delta, raiz;
    float x1, x2;
    system("cls");
    printf("Calculadora de bháskara.\n");
    printf("Digite os valores de A, B e C para montar a equação de segundo grau (apenas números inteiros).\n");
    scanf("%i %i %i", &a, &b, &c);
    printf("Confira a resolução da equação a seguir: %ix²+%ix+%i\n", a, b, c);
    printf("Delta = (%i)² - 4x%ix%i\n", b, a, c);
    delta = (b*b) - (4*a*c);
    printf("Delta = %i\n", delta);
    if (delta >= 0){
        raiz = sqrt(delta);
        printf("X = -B + - Raiz de (Delta) / 2xA\n");
        printf("X = -(%i) + - %i / %i\n", b, raiz, a*2);
        x1 = (b*-1+raiz)/(2*a);
        x2 = (b*-1-raiz)/(2*a);
        printf("A primeira raiz (x1) é: %.2f\n", x1);
        printf("A primeira raiz (x2) é: %.2f\n", x2);
    } else {
        printf("Esta equação não possui raízes reais.");
    }
}