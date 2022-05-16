#include <stdio.h>
#include <stdlib.h>
#include "list.h"


typedef struct{
   int sudo[9][9];
}Node;

Node* createNode(){
  Node* n=(Node*) malloc(sizeof(Node));
  return n;
}

Node* copy(Node* n){
    Node* new=(Node*) malloc(sizeof(Node));
    *new = *n;
    return new;
}

Node* read_file (char* file_name){
  Node* n = createNode();
  FILE* file = fopen (file_name, "r");
  int i,j;
  for(i=0;i<9;i++){
       for(j=0;j<9;j++){
          if(!fscanf (file, "%d", &n->sudo[i][j]))
            printf("failed to read data!");
       }
  }

  fclose (file);
  return n;
}

void print_node(Node* n){
    int i,j;
    for(i=0;i<9;i++){
       for(j=0;j<9;j++)
          printf("%d ", n->sudo[i][j]);
       printf("\n");
    }
    printf("\n");
}
//recorrer submatriz parte del 0 hasta 8
/*int recorrerSubmatriz(Node * nodo){
  int k=4,p;
  int contS=0;
  for(p=0;p<9;p++){
    int i=3*(k/3) + (p/3) ;
    int j=3*(k%3) + (p%3) ;
    printf("%d ",nodo->sudo[i][j]);
    if(p%3 == 2) printf("\n");
   
  return contS;
}*/
//crear arreglo(arreglo de 10 elem valor 0) donde las posiciones corresponden al valor aux y si se supera es mas de 1

int is_valid(Node* nodo){
  /*int i=0,j=0,aux=1;
  int arregloPos[10];
 
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      if(nodo->sudo[i][j])
     
       
    }
  }*/
  return 1;
}


List* get_adj_nodes(Node* n){
  List* list=createList();
  int i,j,RA=1;
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      if (n->sudo[i][j] == 0){
        while(RA < 10){
          Node * adj_n = (Node*) malloc(sizeof(Node));
          adj_n=copy(n);
          adj_n->sudo[i][j] = RA;
          //if (is_valid == 1){}
          push(list,adj_n);
          RA++;
        }
      }
    }
  }
  return list;
}


int is_final(Node* n){
  int i,j;
  //if(is_valid(n) == 0)return0;
  for(i=0;i<9;i++){
    for(j=0;j<9;j++){
      if(n->sudo[i][j] == 0){}
      return 0;  
    }
  }
    return 1;
}

Node* DFS(Node* initial, int* cont){
  /*Stack * P=createStack();
  push(p,initial);
  while(Pila->size != 0){
   
  }
  */
  return NULL;
}



/*
int main( int argc, char *argv[] ){

  Node* initial= read_file("s12a.txt");;

  int cont=0;
  Node* final = DFS(initial, &cont);
  printf("iterations:%d\n",cont);
  print_node(final);

  return 0;
}*/
