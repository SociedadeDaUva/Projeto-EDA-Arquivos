#include"FuncoesJogoDaMemoria.h"
#include"FuncoesJogoDaMemoria.c"

void JogoDaMemoria(){
    int i=0, j=0, acertos=0;
    int n;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite a quantidade de n�meros que voc� quer memorizar: \n");
    scanf("%d", &n);
    char c;
    int respostas_auxiliar;//ajuda a inserir na lista de respostas
    Numeros* numeros;
    Respostas* respostas;

    srand(time(NULL));//gera n�meros aleat�rios

    printf("Este programa gera n n�meros aleat�rios de 1 a 100: \n");
    printf("Voc� deve decorar os n�meros exibidos em 5 segundos e depois escrev�-los na ordem de baixo para cima\n");
    printf("Pressione ENTER para iniciar\n");
    numeros=inicializaNumeros();

    do{
       c=getch();
    }while(c!=13);

    for(i=0;i<n;i++){
        numeros=insereNumeros(numeros);
    }

    j=5;

    do{
       system("cls");//limpa a tela prompt
       printf("Decore os numeros abaixo em %d\n\n\n", j);
       j--;
       imprimeNumeros(numeros);
       Sleep(1000);
    }while(j>0);

    system("cls");
    printf("informe os n�meros que foram exibidos\n\n\n");
    respostas=inicializaRespostas();
    for(i=0;i<n;i++){
        printf("\t%d� n�mero: ", i+1);
        scanf("%d", &respostas_auxiliar);
        respostas=insereRespostas(respostas, respostas_auxiliar);
        acertos=NumeroDeAcertos(numeros,respostas);
    }

    if(acertos==n){
       printf("\n\nParab�ns! Sua mem�ria � muito boa.Veja os numeros exibidos:\n\n\t");
       imprimeNumeros(numeros);
    }
    else{
       printf("\n\n Voce Errou! Veja os n�meros exibidos: \n\n\t");
       imprimeNumeros(numeros);
    }
    printf("\n\n");
    liberaNumeros(numeros);
    liberaRespostas(respostas);
    system("pause");
}
