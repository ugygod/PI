#include <stdio.h>

int main()
{int contador=0, nota, maior=0;

 do
 {scanf("%d",&nota);
  if (nota>maior) maior = nota;
  contador++;
 } while (contador<10);

 printf("Nota maior: %d",maior);
 return(0);
}
