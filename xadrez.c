#include <stdio.h>

int main(void) {
    //peças e quatidades de passos
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
   //torre
      printf("Movimento da peça Torre:\n", torre);
      for (int i = 0; i < torre; i++)//método for
      {
        printf("Direita\n");
      }
      printf("\n");

    //bispo
      printf("Movimento da peça Bispo:\n", bispo);
      int movbispo = 0;
      while (movbispo < bispo)//método while
      {
        printf("Cima,Direita\n");
        movbispo++;
      }
      printf("\n");

    //rainha
      printf("Movimento da peça Rainha:\n", rainha);
      int movrainha = 0;
      do //método do-while
      {
        printf("Esquerda\n");
        movrainha++;
      } while (movrainha < rainha);
      
      
    return 0;
}

