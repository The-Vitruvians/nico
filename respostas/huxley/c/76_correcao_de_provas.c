#include <stdio.h>
#include <string.h>

// Função que compara o array de respostas de um aluno com o gabarito e retorna 
// sua nota.
int nota(char* gabarito, char* respostas, int n, int total)
{
    
    if(respostas[n] == gabarito[n])
    {
        total += 1;
    }
    
    // o loop para quando n(iteração atual que começa no valor max. vai diminuindo)
    // for igual a zero.
    if(n == 0)
    {
        return total;
    }
    
    // chamada recursiva para a função.
    return nota(gabarito, respostas, n-1, total);
}

//  loop para ler as respostas de cada aluno e imprimir suas notas
void uaiou(char* gabarito, int counter, int aprovados, int* notas)
{
    int n;
    scanf("%d", &n);
    
    //o loop para quando o numero leido for 999
    if(n == 9999)
    {
        printf("%.1f%%\n", 100*((float)aprovados/(float)(counter-1)));
        return;
    }
    
    char respostas[10];
    scanf("%s", respostas);
    
    // Usando a função declarada anteriormente para encontrar a nota de cada 
    // aluno
    float notaAluno = (float)nota(gabarito, respostas, 9, 0);
    
    // Encontrando se o aluno foi aprovado para imprimir a porcentagem de
    // aprovados no programa.
    if(notaAluno >= 6)
    {
        aprovados += 1;
    }
    
    // Definindo a incidência de cada nota.
    if(notaAluno == 0)
    {
        notas[0] += 1;
    }
    else if(notaAluno == 1)
    {
        notas[1] += 1;
    }
    else if(notaAluno == 2)
    {
        notas[2] += 1;
    }
    else if(notaAluno == 3)
    {
        notas[3] += 1;
    }
    else if(notaAluno == 4)
    {
        notas[4] += 1;
    }
    else if(notaAluno == 5)
    {
        notas[5] += 1;
    }
    else if(notaAluno == 6)
    {
        notas[6] += 1;
    }
    else if(notaAluno == 7)
    {
        notas[7] += 1;
    }
    else if(notaAluno == 8)
    {
        notas[8] += 1;
    }
    else if(notaAluno == 9)
    {
        notas[9] += 1;
    }
    else if(notaAluno == 10)
    {
        notas[10] += 1;
    }
    
    printf("%d %.1f\n", counter, notaAluno);
    
    // Incrementando o contador usado no calculo de porcentagem.
    
    counter+=1;
    
    // Chamada recursiva para a função.
    uaiou(gabarito, counter, aprovados, notas);
}

void lupefo(int i, int j, int maiorIncidencia, int num, int* notas)
{
    if(i == j)
    {
        printf("%.1f", (float)num);
        return;
    }
    
    // O array 'notas' carrega a incidência de cada uma das notas.
    // Aqui buscamos qual é a nota de maior incidência.
    if(notas[i] > maiorIncidencia)
    {
        maiorIncidencia = notas[i];
        num = i;
    }
    
    lupefo(i+1, j, maiorIncidencia, num, notas);
}

int main(void) {
    char gabarito[10];
    // Declarando uma array com a incidência de cada uma das dez notas
    int notas[11];
    notas[0] = 0;
    notas[1] = 0;
    notas[2] = 0;
    notas[3] = 0;
    notas[4] = 0;
    notas[5] = 0;
    notas[6] = 0;
    notas[7] = 0;
    notas[8] = 0;
    notas[9] = 0;
    notas[10] = 0;
    scanf("%s", gabarito);
    
	// Iniciando o loop para encontrar as notas de cada aluno.
    uaiou(gabarito, 1, 0, &notas);
	
	// Iniciando o loop para encontrar a nota de maior incidência.
    lupefo(0, 11, 0, 0, notas);
    
	return 0;
}
