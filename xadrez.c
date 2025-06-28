#include <stdio.h>


//Peças de Xadrez
    //peças e quatidades de passos
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    //movimentos das peças
    void movtorre(int mov);
    void movbispo(int mov);
    void movrainha(int mov);
    void movcavalo(void);

  int main(void){
    //Torre Entrada  
    printf("Movimento da peça Torre:\n");
      movtorre(torre);

    //Bispo Entrada
    printf("\nMovimento da peça Bispo:\n");
      movbispo(bispo);

    //Rainha Entrada
    printf("\nMovimento da peça Rainha:\n");
      movrainha(rainha);
    
    //Cavalo Entrada
    printf("\nMovimento da peça Cavalo:\n");
      movcavalo();
  }

    
     //Torre
      void movtorre(int mov) 
      {
        if (mov == 0) return;//Base
        printf("Direita\n"); //Saida da peça
        movtorre(mov - 1); //Metódo recursivo
      }
      

     //Bispo
      void movbispo(int mov){
        if (mov == 0) return;//Base
         for (int v = 0; v < 1; v++){ //Movimento vertical "Cima"
            printf("Cima,");//Saida da peça "Vertical"
         for (int h = 0; h < 1; h++){ //Movimento horizontal "Direita"
            printf("Direita\n");//Saida da peça "Horizontal"
         }
         }
          movbispo(mov -1); //Metódo recursivo
      }
      

  //Rainha
      void movrainha(int mov){
        if (mov == 0) return;//Base
          printf("Esquerda\n");//Saida da peça
          movrainha(mov - 1); //Metódo recursivo
      }
      
  //Cavalo
      void movcavalo(void){
          int horz = 0; //Movimento "Vertical" duas casas para cima
          int Subir = 2; //Movimento "Subir" duas casas para cima

          for (int i = 0; i < Subir; i++ ){ //Movimento vertical 
            printf("Cima\n"); //Saida do movimento Vertical
            horz++;

              if (horz < Subir){ //Metódo if: Ir para o movimento horizontal "Direita" apos se o movimento vertical "Subir" tiver subido as duas casas 
                continue;
              }
          
          for (int j = 0; j < 3; j++){ //Movimento horizontal
            if (j == 1){
              printf("Direita\n"); //Saida do movimento Horizontal
              break; //Parar o Loop apos a Conclusão
            }
          }
        }
      }

