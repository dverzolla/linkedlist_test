#include <stdio.h>
#include <stdlib.h>

 struct dic{
     char *original;
     char *complementar;
     struct dic *prox;
 };
 
 struct dic* ini=NULL;
 struct dic* last=NULL;''
 
 //adicionar um novo dic � nossa lista
 void dic_add(char *original, char *complementar){
         
     //se last � igual a Null quer dizer que a lista est� vazia
     if (last == NULL){
         // o elemento ser� o primeiro
         last = (struct dic*)malloc(sizeof(struct dic));
         (*last).original = original;
         (*last).complementar = complementar;
         // Defini��o da cabe�a da fila
         ini = last;
     } else {
         // o elemento ser� o �ltimo
         (*last).prox = (struct dic*)malloc(sizeof(struct dic));
         last = (*last).prox;
         (*last).original = original;
         (*last).complementar = complementar;
     }        
 }
 
 //Percorrer e Imprimir a lista ligada
 void dic_print(){
     int sair = 0;
     struct dic* act = ini;
    
     do {
         if (act == last)
             sair = 1;
         printf("----------------------------------------------\n");
         printf("original: %s\n",(*act).original);
         printf("complementar: %s\n",(*act).complementar);
         printf("prox: %d\n", (*act).prox);
         act = (*act).prox;
     } while(sair == 0);
     printf("----------------------------------------------");
 }