#include <stdio.h>
#include <time.h>

int main(void) {
  struct tm *dataHoraAtual;
  time_t segundos;

  time(&segundos);
  dataHoraAtual = localtime(&segundos);

  printf("Data atual: %02d/%02d/%d\n\n", dataHoraAtual->tm_mday, dataHoraAtual->tm_mon + 1, dataHoraAtual->tm_year + 1900);

  return 0;
}
