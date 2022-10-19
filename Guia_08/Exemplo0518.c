#include <stdio.h>
int main(){
 float a, b, soma=0;
  puts("Informe o fim");
  printf("Fim (B): ");
  scanf("%f", &b);
  if(b<=1){
    printf("ERRO! A deve ser maior que 1!");
  }
  for(int i=9+1;i<b;i++){
    int flag=1;
    for(int j=2;j<i;j++){
      if(i%j==0){ 
        flag=0;
        break;
      }
    }
    if(flag){
      soma+=i;
    }
  }
  printf("Soma %.2f: ", soma);
  return 0;
}