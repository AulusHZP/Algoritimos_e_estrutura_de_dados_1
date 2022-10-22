
#include <math.h> // para definicoes proprias

void multiplo(int n, int x) {
  // definir dado local
  int y = 1; // controle
  int z = 0;
  int w = 0;
  int potencia = 0;
  int soma = 0.0;
  // repetir enquanto controle menor que a quantidade desejada
  while (y <= n) {
    z = 9 + w;
    potencia = pow(z, 2);
    if (z > 0) {
      printf("\n[%d]", potencia);

      soma = soma + potencia;
    } else {
      y = y - 1;
    }
    w = w + 1;
    y = y + 1;
  }
  printf("\nSoma:[%d]", soma);
} // fim multiplo( )

void entrada() {
  // variaveis
  int x = 0;
  int controle = 0;
  int n = 0;

  // entrar com valor
  printf("\nEntre com a quantidade:");
  scanf("%d", &x);

  for (controle = 0; controle < x; controle = controle + 1) {
    printf("\nEntre com um valor:");
    scanf("%d", &n);

    multiplo(n, x);
  }
  // encerrar

  printf("\nApertar ENTER para continuar");
  getchar();
  getchar();

} // fim method01 ( )

int main() { entrada(); } // fim main( )
