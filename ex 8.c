#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// [-100;100]

int main()
{float temperatura, maior, soma=0;
 int contador=0;

 do
 {printf("Temperatura dia %d?",contador+1);
  scanf("%f",&temperatura);
  if ((temperatura<=100)&&(temperatura>=-100))
  //if (!((temperatura>100)||(temperatura<-100)))
   {if (contador==1) maior = temperatura;
    if (temperatura > maior) maior = temperatura;
    soma += temperatura;
    contador++; //contador = contador + 1;
   }
 } while ((temperatura<=100)&&(temperatura>=-100));

 if (contador>0)
 {printf("Temperatura maior: %.2f\n", maior);
  printf("Media: %.2f", soma/(float)contador);
 }
 else printf("Sem temperaturas!");
 return(0);
}

