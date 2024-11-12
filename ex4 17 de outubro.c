#include <stdio.h>
 int main()
 {int contador=0, nota, menor=20;
 
 while (contador<20)
 {scanf("%d",&nota);
 if (contador == 0) menor = nota;
 else if (nota < menor) menor = nota;
 contador++;
 }
 
 printf("Nota menor: %d" ,menor);
 return(0);
 }
