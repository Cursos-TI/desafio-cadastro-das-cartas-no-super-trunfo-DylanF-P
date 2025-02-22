#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int populacao, turisticos;
    float pib, area;
    char nome[50], codigo[50];
    char estado[20];
    int populacao2, turisticos2;
    float pib2, area2;
    char nome2[50], codigo2[50];
    char estado2[20];

    printf("Digite o nome do Estado: ");
    scanf("%s", &estado);

    printf("Digite o Código da Cidade: ");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nome);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a Área Total em KM2: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turisticos);

    printf("Digite o nome do Segundo Estado: ");
    scanf("%s", &estado2);

    printf("Digite o Código da Cidade: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a Área Total em KM2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turisticos2);


    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f  \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turisticos);

    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f  \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turisticos2);









    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
