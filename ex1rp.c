#include <stdio.h>

int main()
{int contador=0, nota, soma=0;

 while (contador<10)
 {scanf("%d",&nota);
  soma = soma + nota;
  contador = contador + 1;
 }

 printf("Media: %.2f",soma/10.0);
 return(0);
}
