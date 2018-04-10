#include <stdio.h>

void mai(int maior, int menor, int n)
{
    if(n == 0)
    {
        printf("%d\n%d", menor, maior);
        return;
    }
    int valor;
    scanf("%d", &valor);
    if(valor > maior)
    {
        maior = valor;
    }
    if(valor < menor)
    {
        menor = valor;
    }
    mai(maior, menor, n-1);
}

int main(void)
{
    mai(0 , 99999999, 6);
    return 0;
}
