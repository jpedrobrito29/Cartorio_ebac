#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int registro()

{
   char arquivo [40];
   char cpf [40];
   char nome [40];
   char sobrenome [40];
   char cargo [40];

   printf ("Digite o CPF a ser cadastado: ");
   scanf ("%s", cpf);

   strcpy  (arquivo, cpf); //r copia o aquivo

   FILE *file;
   file = fopen (arquivo, "w");
   fprintf(file, cpf);
   fclose (file);  

   file = fopen (arquivo, "a");
   fprintf(file, ",");
   fclose(file);

   printf ("Digite o nome a ser cadastrado:");
   scanf ("%,s", nome);

   file = fopen(arquivo, "a");
   fprintf (file,nome);
   fclose (file);
   
   printf ("Digite o sobrenome: ");
   scanf ("%,s", sobrenome);

   file = fopen (arquivo, "a");
   fprintf (file, sobrenome);
   fclose(file);

   file = fopen (arquivo, "a");
   fprintf (file, ",");
   fclose (file);

   prinft ("Digite o cargo a ser cadastrado: ");
   scanf ("%,s", cargo);

   file = fopen (arquivo, "a");
   fprintf (file, cargo);
   fclose(file);

   system ("pause");


}

int consulta()

{
    char cpf [40];
    char conteudo[200];

    printf ("Digite o cpf a ser consultado: ");
    scanf ("%s", cpf);

    FILE *file
    file = fopen (cpf, "r");

    if(file = = null);
    {
        Printf ("nao foi possivel abrir o arquivo");   
    }

    while (fgets (conteudo,200, file) ! = null )

    {
        printf("\n essas sao as informacoes do usuarios);
        printf ("%s", conteudo);
        printf ("\n\n");
        
    }
    system ("pause")
    
    }



int deletar()
{
    printf("voce escolheu o deletar de nomes\n");
    system("pause");
}
int main ()



{
    int opcao=0;
    int laco=1;

    for(laco=1;laco=1;)
    {

        system ("cls");


    setlocale(LC_ALL, "Portuguese");

    printf("### CARTORIO DA EBAC ###\n\n");
    printf("Escolha a opcao desejada do menu:\n\n");
    printf ("\t1 - Registrar nomes\n");
    printf ("\t2 - Consultar nomes\n");
    printf ("\t3 - Deletar nomes\n");

    scanf("%d", &opcao);

    system("cls");

    switch(opcao)
    {
    case 1:
    registro ();
    break;

    case 2:
    consulta ();
    break;

    case 3:
    deletar ();
    break;

    default:
    printf("essa opcao nao esta disponivel\n");
    system("pause");
    break;


    }

    }
}
