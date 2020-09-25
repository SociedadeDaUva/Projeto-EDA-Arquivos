#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

//struct dos n�meros aleat�rios que ser�o memorizados
struct numerosMemoria{
       int info;
       struct numerosMemoria*prox;
};
typedef struct numerosMemoria Numeros;

//struct das respostas dadas pelo usu�rio sobre os n�meros que ser�o memorizados
struct respostasMemoria{
       int info;
       struct respostasMemoria*prox;
};
typedef struct respostasMemoria Respostas;

//insere os numeros aleat�rios na lista Numeros
Numeros*insereNumeros(Numeros*a);

//imprime os numeros aleat�rios
void imprimeNumeros(Numeros* a);

//insere as respostas dadas pelo usu�rio na lista de Respostas
Respostas*insereRespostas(Respostas*a, int v);

//inicializa com NULL a lista de Numeros
Numeros* inicializaNumeros();

//inicializa com NULL a lista de Respostas
Respostas*inicializaRespostas();

//retorna o n�mero de acertos, ou seja quando numeros->info=respostas->info
int NumeroDeAcertos(Numeros*a,Respostas*b);

//libera a mem�ria alocada para a lista de n�meros
void liberaNumeros(Numeros* a);

//libera a mem�ria alocada para a lista de respostas
void liberaRespostas(Respostas*a);
