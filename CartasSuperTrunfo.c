#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nomePais[30];
    char nomeEstado[30];
    char codigoCidade[3];
    unsigned int populacao;
    unsigned int pontosTuristicos;
    float area;
    float pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome do País: ");
    scanf("%s", &nomePais);

    printf("Digite o nome do Estado: ");
    scanf("%s", &nomeEstado);

    printf("Digite o nome do Código: ");
    scanf("%s", &codigoCidade);

    printf("Digite a quantidade Populacional: ");
    scanf("%u", &populacao);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%u", &pontosTuristicos);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a Área: ");
    scanf("%f", &area);

    float pibPerCapita = 0;
    float densidade = 0;

    if(area > 0) {
        densidade = populacao / area;
    }

    if(populacao > 0){
        pibPerCapita = pib / populacao;
    }

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n**** Informações da Carta ****");
    printf("\nPaís: %s", nomePais);
    printf("\nEstado: %s", nomeEstado);
    printf("\nCódigo: %s", codigoCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nPontos Turísticos: %d", pontosTuristicos);
    printf("\nÁrea: %.2f", area);
    printf("\nPIB: %.2f", pib);
    printf("\nDensidade Populacional: %.2f", densidade);
    printf("\nPIB per Capita: %.2f", pibPerCapita);
    printf("\n****************\n");

    return 0;
}
