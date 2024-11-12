#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// definição de uma função
int menu()
{ int op;
  printf("M E N U\n");
  printf("1-Consulta do Saldo\n");
  printf("2-Levantamento\n");
  printf("3-Deposito\n");
  printf("4-Levantamentos sem sucesso\n");
  printf("0-Sair\n");
  printf("Operacao?");
  scanf("%d",&op);
  return(op);
}

float depositar(float saldo, float quantia)
{return(saldo+quantia);
}

float levantar(float saldo, float quantia)
{return(saldo-quantia);
}

float lerQuantia()
{int qt;
 printf("Quantia?");
 scanf("%f",&qt);
 return(qt);
}

int main()
{float saldo=0, quantia=0;
 int opcao, tentativas=0;
 char resposta;
 do
 {opcao = menu();

  switch (opcao)
  {case 1:printf("Saldo: %.2f euros\n", saldo); 
	  break;
   case 2:quantia = lerQuantia();
	  if (saldo>=quantia) 
	     {saldo = levantar(saldo, quantia);
	      printf("Levantamento efetuado!\n");
	     }
	  else {tentativas++;
		printf("Saldo insuficiente!\n");
	       }
	  break;
   case 3:quantia = lerQuantia();
          saldo = depositar(saldo,quantia);
	  break;
   case 4:printf("Tentativas: %d\n", tentativas);
	  break;
   case 0: printf("Deseja mesmo sair? (S/N)");
           scanf(" %c",&resposta);
	   opcao = -1;
	   if ((resposta == 'S')||(resposta=='s'))
		   opcao = 0;
	   break;
   default: 
	   break;
  }

 } while (opcao!=0);

 return(0);
}
