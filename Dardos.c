#include <stdio.h>
#include <stdlib.h>


int main()

{

float cor1,cor2;


    printf(" Digite a coordenada x:\n");
    scanf("%f",&cor1);

     printf(" Digite a coordenada y:\n");
    scanf("%f",&cor2);

    //calculo do ponto do meio
    if (cor1<=1 && cor1>=-1 && cor2<=1 && cor2>=-1)
        printf("você pontuou 10 pontos");

    //calculo do ponto central

    else{
    if (cor1>1 && cor1<-1 && cor1<=5 && cor1>=-5 && cor2>1 && cor2<-1 && cor2<=5 && cor2>=-5 )
        printf("Voce pontuou 5 pontos");

      //calculo do ponto externo
    else{
    if (cor1<=10 && cor1>5 && cor1>=-10 && cor1<-5 && cor2<=10 && cor2>5 && cor2>=-10 && cor2<-5)
        printf("Voce pontuou 1 ponto");

   if ((cor1> 10 || cor1 < -10) && (cor2 > 10 || cor2 < -10)){
    printf("voce errou!!");
   }
    }
    }

return 0;
}
