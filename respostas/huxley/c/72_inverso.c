#include <stdio.h>

void ler(int n)
{
    int value;
    scanf("%d", &value);
    
    if(n == -1)
    {
        return;
    }
    ler(n-1);
    printf("%d ", value);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    ler(n-1);
    return 0;
}
