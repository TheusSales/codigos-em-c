#include <stdio.h>

int main(void) {
  char nome[100];
  double cpf;
  int num_dep;
  float rend_an;
  float imp_ren;
  float desc;
  char yn;
 
  printf("***********************\n");
  printf("    CALCULADORA IR     \n");
  printf("***********************\n");
  printf("\n");
  
  while(1){
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    printf("CPF do contribuinte: ");
    scanf("%d", &cpf);
    printf("Número de dependentes: ");
    scanf("%i", &num_dep);
    printf("Renda anual: ");
    scanf("%f", &rend_an);
  
    desc = num_dep * 500;
    
    if (rend_an <= 20000) {
      printf("\nIsento\n");
    }
    else if (rend_an > 20000 && rend_an < 50000) {
      imp_ren = (rend_an - desc) * 0.05;
      printf("\n%s seu imposto de renda é: R$%.2f\n", nome, imp_ren);
    }
    else if (rend_an > 50000 && rend_an < 100000 ) {
      imp_ren = (rend_an - desc) * 0.1;
      printf("\n%s seu imposto de renda é: R$%.2f\n",nome, imp_ren);
    }
    else {
      imp_ren = (rend_an - desc) * 0.15;
      printf("\n%s seu imposto de renda é: R$%.2f\n",nome, imp_ren);
    }
    
    printf("\nAperte qualquer tecla para calcular outro IR\n");
    printf("OU");
    printf("\nDigite n tecla para sair\n");
    scanf("%s", &yn);
    // printf("%s",&yn);
    if(yn=='n'){
      break;
    }
  }
  return 0;
}