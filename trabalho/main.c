/* TRABALHO PROGRAMACAO
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void menu() {
	printf("......... MENU ......... \n\n");
	printf("1 - Inserir jogador ..... \n\n");
	printf("2 - Ordenar Jogador por nome  \n\n");
	printf("3 - Imprimir\n");
}

main(){

	FILE *fp;
	int i, j, a, insert_jogador;
	char  nome[5][30], aux[30], nomeee[30];
    char utilizadores[100] = "utilizadores.txt";
	int  jogador_numero;
    char jogador_nome[100];
    char nome_ficheiro[100];

    char nomes[5][100];
    char nomes2[5][100];
    int num_elem_lidos;


	menu();
	scanf("%i",&insert_jogador);

	switch(insert_jogador)
	{
		case 1:
            fp = fopen(utilizadores,"wb");

			printf("Quantos jugadores pretende introduzir?");
			fflush(stdin);
			scanf("%i",&a);


			for(i=0; i<a; i++)
                {
                    printf("Entre com o nome: ");
                    gets(nome[i]);
                }
				system ("cls");

				menu();
				scanf("%i",&insert_jogador);
            fclose(fp);
			break;

		case 2:

                 printf("\n\n");
                 printf("Dados lidos a partir do ficheiro %s:\n",nome_ficheiro);

                 fp = fopen(nome_ficheiro,"rb");

                 if (fp == NULL) {
                      printf ("\nNao foi possivel abrir o ficheiro %s.",utilizadores);
                 }
                 else {
                      num_elem_lidos = fread(nomes2,sizeof(nomes2)/5,5,fp);
                      if(num_elem_lidos != 5)
                          printf("\nForam lidos apenas %d nomes", num_elem_lidos);
                      else {
                          for (i=0;i<5;i++) {
                             printf("Nome %d ..... %s\n",i+1,nomes2[i]);
                         }
                      }
                      fclose(fp);
                 }

			break;

	}

getch();
}
