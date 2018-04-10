#include <stdio.h>

int leng(int i, char* c)
{
    if(i == 255)
    {
        return 255;
    }
    
    if(c[i] == '\0')
    {
        return i;
    }
    
    return leng(i+1, c);
}

void imprimir(int n, char* c)
{
    printf("%c", c[n]);
    
    if(n == 0)
    {
        return;
    }
    
    imprimir(n-1, c);
}

int main() {
    char c[255];
    scanf("%s", c);
    int len = leng(0, c);
    imprimir(len, c);
	return 0;
}
