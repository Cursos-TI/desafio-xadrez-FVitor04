#include <stdio.h>

int main(void) {
  //Peças de Xadrez
    //peças e quatidades de passos
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
  //Torre
      printf("Movimento da peça Torre:\n");
      for (int i = 0; i < torre; i++)//método for
      {
        printf("Direita\n");
      }
      

  //Bispo
      printf("\nMovimento da peça Bispo:\n");
      int movbispo = 0;
      while (movbispo < bispo)//método while
      {
        printf("Cima,Direita\n");
        movbispo++;
      }
      

  //Rainha
      printf("\nMovimento da peça Rainha:\n");
      int movrainha = 0;
      do //método do-while
      {
        printf("Esquerda\n");
        movrainha++;
      } while (movrainha < rainha);
      
  //Cavalo
       //cavalo e quantidade
      int cavalo = 3;
      printf("\nMovimento Cavalo:\n");
      for (int i = 1; i < cavalo; i++)
      {
        printf("Baixo\n");
      }
      while (cavalo <= 3 )
      {
        printf("Esquerda");
        cavalo++;
      }
      

    return 0;
}
