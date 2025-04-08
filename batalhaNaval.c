#include <stdio.h>

#define lin 10
#define col 10

int main(){    
int tabuleiro [lin][col] = {0};
int linha1,linha2,linha3,linha4,coluna1,coluna2,coluna3,coluna4;
int pode=0;
//iniciando o jogo e imprimindo a matriz zerada demostrando o tabuleiro
   
printf("BEM VINDO AO JOGO DE BATALHA NAVAL\n");
printf("\n"); 
printf(" *** MAPA DO JOGO ***\n");
printf("  A B C D E F G H I J\n");
for (int i = 0; i < lin; i++)

//imprime o tabuleiro zerado
{printf("%d",i);
    for ( int j = 0; j < col; j++)
        {printf(" %d",tabuleiro[i][j]);}
    
    printf("\n");}

    printf("\n");
    
// orientações da jogabilidade
//ESSE WHILE FECHA NO FINAL DO SWITCH 1 DEPOIS DO DEFAULT
printf("O ZERO SIGNIFICA A AGUA E O NUMERO 3 SIGNIFICARÁ A LOCALIZAÇÃO DO NAVIO\n");
printf("VEJA A SEQUÊNCIA QUE SERÃO INSERIDAS AS POSIÇÃO DOS NAVIOS\n");
printf("1.VERTICAL(o navio ocupa 3 linhas e 1 coluna)\n");
printf("2.HORIZONTAL(o navio ocupa 1 linha e 3 colunas)\n");;
printf("3.DIAGONAL ESQUERDA PARA DIREITA(o navio ocupa 3 linhas e 3 colunas)\n");
printf("4.DIAGONAL DIREITA PARA ESQUERDA(o navio ocupa 3 linhas e 3 colunas)\n");

printf("\n");

do           //inserindo o valor das linhas do primeiro navio
   {printf("PRIMEIRO NAVIO NA VERTICAL\n");
    printf("Escolha a primeira linha da posição do navio entre 0 e 7\n");
    scanf("%d",&linha1);
    
    if (linha1<0 || linha1>7)
    {printf("Opção inválida! Escolha novamente\n");
    printf("\n");}

   }while(linha1<0 || linha1>7);

    printf("\n");

   do           //inserindo o valor das colunas do primeiro navio
   {printf("As colunas são representadas por letras,e cada letra equivale a uma sequência numérica\n");
    printf("Sendo assim o numero 0 equivale a letra A,1 equivale a letra B e assim sucessivamente\n");
    printf("Escolha a coluna entre 0 e 9\n");
    scanf("%d",&coluna1);

    if (coluna1<0 || coluna1>9)
    {printf("Opção inválida! Escolha novamente\n");
    printf("\n");}
        
    }while (coluna1<0 || coluna1>9);

    printf("\n");
    printf("Você escolheu a posição do navio na vertical, linha %d e coluna %d\n",linha1,coluna1);

    //impressão do tabuleiro com o primeiro navio na vertical

    tabuleiro[linha1][coluna1]=3;
    tabuleiro[linha1+1][coluna1]=3;
    tabuleiro[linha1+2][coluna1]=3;
    printf(" (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\n");
    printf("  A  B  C  D  E  F  G  H  I  J\n");
   
    for (int i = 0; i < lin; i++)

{printf("%d",i);

        for ( int j = 0; j < col; j++)
        {
            printf(" %d ",tabuleiro[i][j]);
    
        }
        printf("\n");
    }
    printf("\n");


// SEGUNDO NAVIO *****************************************************************************************
do{
    pode=1;
do                           
{printf("SEGUNDO NAVIO NA HORIZONTAL\n");
 printf("Escolha a linha da posição do navio horizontal entre 0 e 9\n");
 scanf("%d",&linha2);
 
 if (linha2<0 || linha2>9)
 {printf("Opção inválida! Escolha novamente\n");
 printf("\n");}

}while(linha2<0 || linha2>9);

 printf("\n");

 do{                              
  printf("O primeiro navio ocupa as linhas %d , %d e %d na coluna %d\n",linha1,linha1+1,linha1+2,coluna1);
  printf("Escolha a coluna entre 0 e 7\n");
  scanf("%d",&coluna2);
 
  if (coluna2<0 || coluna2>7)
  {   printf("Opção inválida! Escolha novamente\n");
      printf("\n");}
  
}while(coluna2<0 || coluna2>7);
 
                             //analisa se os navios estão se sobrepondo
    for (int j = coluna2; j < coluna2+2; j++)
    {
        if (tabuleiro[linha2][j]!=0)
        {
            printf("Os navios estão se sobrepondo! Escolha outra posição para o segundo navio\n");
        
        pode=0;
        break;
    }
}
    
}while(!pode);                  

tabuleiro[linha2][coluna2]=3;
tabuleiro[linha2][coluna2+1]=3;
tabuleiro[linha2][coluna2+2]=3;
printf("\n");
printf("Você escolheu a posição do navio na horizontal, linha %d e coluna %d\n",linha2,coluna2);


printf(" (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\n");
printf("  A  B  C  D  E  F  G  H  I  J\n");

for (int i = 0; i < lin; i++)

{printf("%d",i);

    for ( int j = 0; j < col; j++)
    {
        printf(" %d ",tabuleiro[i][j]);

    }
    printf("\n");
}

//TERCEIRO NAVIO ****************************************************************************************************


do{pode=1;                            
    do                                   
    {printf("\nTERCEIRO NAVIO NA DIAGONAL ESQUERDA PARA DIREITA\n");
    printf("Escolha a linha do navio DIAGONAL ESQUERDA entre 0 e 7\n");
    scanf("%d",&linha3);
    
    if (linha3<0 || linha3>7)
    {printf("Opção inválida! Escolha novamente\n");
        printf("\n");}
       
    }while(linha3<0 || linha3>7);
    
    printf("\n");
       
        do                                
         {printf("O primeiro navio ocupa as linhas %d , %d e %d na coluna %d\n",linha1,linha1+1,linha1+2,coluna1);
         printf("O segundo navio ocupa a linha %d nas colunas %d ,%d e %d\n",linha2,coluna2,coluna2+1,coluna2+2);
         printf("Escolha a coluna entre 0 e 7\n");
         scanf("%d",&coluna3);
        
         if (coluna3<0 || coluna3>7)
        {printf("Opção inválida! Escolha novamente\n");
         printf("\n");}
      
        }while(coluna3<0 || coluna3>7);   
    
                                    //analisa se os navios estão se sobrepondo
    
            for (int j = coluna3; j < coluna3+2; j++)
           {
               if (tabuleiro[linha3][j] || tabuleiro[linha3+1][j] || tabuleiro[linha3+2][j] !=0)
               {
                   printf("Os navios estão se sobrepondo! Escolha outra posição para o terceiro navio\n");
               
               pode=0;
               break;
           }
       }
           
       }while(!pode);                
    
       tabuleiro[linha3][coluna3]=3;
       tabuleiro[linha3+1][coluna3+1]=3;
       tabuleiro[linha3+2][coluna3+2]=3;
       
       printf("\n");
       printf("Você escolheu a posição do navio na diagonal esquerda para direita, linha %d e coluna %d\n",linha3,coluna3);
    
       printf(" (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\n");
       printf("  A  B  C  D  E  F  G  H  I  J\n");
      
       for (int i = 0; i < lin; i++)
    
      {printf("%d",i);
    
           for ( int j = 0; j < col; j++)
           {
               printf(" %d ",tabuleiro[i][j]);
       
           }
           printf("\n");
       }
    // ULTIMO NAVIO**********************************************************************************************
    
       do{
        pode=1;
       printf("\nULTIMO NAVIO NA DIAGONAL DIREITA PARA ESQUERDA(o navio ocupa 3 linhas e 3 colunas)\n");
       do
       {printf("Escolha a linha do navio DIAGONAL DIREITA entre 0 e 7\n");
       scanf("%d",&linha4);
       
       if (linha4<0 || linha4>7)
       {printf("Opção inválida! Escolha novamente\n");
           printf("\n");}
         
        }while(linha4<0 || linha4>7);
    
        printf("\n");
        
        do{                               
         printf("O primeiro navio ocupa as linhas %d , %d e %d na coluna %d\n",linha1,linha1+1,linha1+2,coluna1);
         printf("O segundo navio ocupa a linha %d nas colunas %d ,%d e %d\n",linha2,coluna2,coluna2+1,coluna2+2);
         printf("O terceiro navio ocupa as linhas %d ,%d e %d e as colunas %d ,%d e%d\n",linha3,linha3+1,linha3+2,coluna3,coluna3+1,coluna3+2);
         printf("Escolha a coluna entre 2 e 9\n");
         scanf("%d",&coluna4);
        
         if (coluna4<2 || coluna4>9)
        {printf("Opção inválida! Escolha novamente\n");
         printf("\n");}
      
        }while(coluna4<2 || coluna4>9);   
    
                                   //analisa se os navios estão se sobrepondo
    
        for (int j = coluna4-2; j < coluna4; j++)
        {
            if (tabuleiro[linha4][j] || tabuleiro[linha4+1][j] || tabuleiro[linha4+2][j] !=0)
            {
                printf("Os navios estão se sobrepondo! Escolha outra posição para o quarto navio\n");
            
            pode=0;
            break;
        }
    }
        
    }while(!pode);                   
    
    tabuleiro[linha4][coluna4]=3;
    tabuleiro[linha4+1][coluna4-1]=3;
    tabuleiro[linha4+2][coluna4-2]=3;
    
    printf("\n");
    printf("Você escolheu a posição do navio na diagonal direita para esquerda, linha %d e coluna %d\n",linha4,coluna4);
    
    printf(" (0)(1)(2)(3)(4)(5)(6)(7)(8)(9)\n");
    printf("  A  B  C  D  E  F  G  H  I  J\n");
    
    for (int i = 0; i < lin; i++)
    
    {printf("%d",i);
    
        for ( int j = 0; j < col; j++)
        {
            printf(" %d ",tabuleiro[i][j]);
    
        }
        printf("\n");
    }

return 0;
}