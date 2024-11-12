#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Cálculo da nota final de um aluno
// considerando 2 testes e 4 trabalhos práticos
int main()
{int t1, t2, p1, p2, p3, p4;
 float mt, mp, nf;

 // leitura das classificacoes separando com vírgulas
 printf("Indique as classificacoes no formato seguinte: t1,t2,p1,p2,p3,p4"); 
 scanf("%d,%d,%d,%d,%d,%d",&t1, &t2, &p1, &p2, &p3, &p4);

 mt = (t1+t2)/(float)2; // média aritmética dos testes
 mp = (p1+p2+p3+p4)/(float)4; // média aritmética dos trabalhos
 nf = mt*0.7 + mp*0.3;
 
 printf("Nota final do aluno: %.2f", nf);
 return(0);
}
