#include <stdio.h>

unsigned int eh_igual_ou_acima_da_media(int valor, double media) {
  if (valor >= media) {
    return 1;
  }
  return 0;
}

long long qtd_valores_iguais_ou_acima_da_media(unsigned int tamanho, long long array[],
                                         double media) {
  long long resultado = 0;
  for (int i = 0; i < tamanho; i++) {
    resultado = resultado + eh_igual_ou_acima_da_media(array[i], media);
  }
  return resultado;
}

unsigned int esta_abaixo_da_media(int valor, double media) {
  if (valor < media) {
    return 1;
  }
  return 0;
}

long long qtd_valores_abaixo_da_media(unsigned int tamanho, long long array[],
                                         double media) {
  long long resultado = 0;
  for (int i = 0; i < tamanho; i++) {
    resultado = resultado + esta_abaixo_da_media(array[i], media);
  }
  return resultado;
}

float calcular_media(unsigned int tamanho, long long array[]) {
  long long soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma = soma + array[i];
  }
  double media = (double) soma / tamanho;
  return media;
}

void ler_array(unsigned int tamanho, long long array[]) {
  for (int i = 0; i < tamanho; i++) {
    scanf("%lld", &array[i]);
  }
}

int main(void) {
  unsigned int tamanho;
  scanf("%u", &tamanho);
  long long array[tamanho];
  ler_array(tamanho, array);

  double media = calcular_media(tamanho, array);
  long long valores_abaixo_da_media =
      qtd_valores_abaixo_da_media(tamanho, array, media);
  long long valores_iguais_ou_acima_da_media =
      qtd_valores_iguais_ou_acima_da_media(tamanho, array, media);
  printf("%.1f\n%lld\n%lld\n", media, valores_abaixo_da_media,
         valores_iguais_ou_acima_da_media);
}
