#include <stdio.h>

int main() {

    char placa[20];
    int tipo;
    float horas;
    float precoHora = 0;
    float valorBase;
    float desconto = 0;
    float multa = 0;
    float valorFinal;

    // Entrada
    printf("Digite a placa: ");
    scanf("%s", placa);

    printf("Tipo de veiculo (1-Carro, 2-Moto, 3-Caminhonete): ");
    scanf("%d", &tipo);

    printf("Tempo (horas): ");
    scanf("%f", &horas);

    // Definir preço por tipo
    switch(tipo) {
        case 1:
            precoHora = 5;
            break;
        case 2:
            precoHora = 3;
            break;
        case 3:
            precoHora = 8;
            break;
        default:
            printf("Tipo invalido!\n");
            return 0;
    }

    // Regra mínima
    if (horas < 1) {
        horas = 1;
    }

    // Cálculo base
    valorBase = horas * precoHora;

    // Desconto
    if (horas > 5) {
        desconto = valorBase * 0.10;
    }

    // Multa
    if (horas > 10) {
        multa = 20;
    }

    // Valor final
    valorFinal = valorBase - desconto + multa;

    // Saída
    printf("\n--- RESUMO ---\n");
    printf("Placa: %s\n", placa);

    switch(tipo) {
        case 1:
            printf("Tipo: Carro\n");
            break;
        case 2:
            printf("Tipo: Moto\n");
            break;
        case 3:
            printf("Tipo: Caminhonete\n");
            break;
    }

    printf("Tempo: %.2f horas\n", horas);
    printf("Valor base: R$ %.2f\n", valorBase);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Multa: R$ %.2f\n", multa);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}