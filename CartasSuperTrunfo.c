#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int    iCodCid;        //Código da Cidade
    char   sNomeCid[50];   //Nome da Cidade
    int    iPopulacao;     //População
    float  fArea;          //Área
    double dPib;           //PIB
    int    iNumPtTur;      //Número de pontos turísticos 
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o Código da Cidade:\n");
    scanf("%d", &iCodCid);
    printf("Informe o Nome da Cidade:\n");
    scanf("%s", sNomeCid);
    printf("Informe a População da Cidade:\n");
    scanf("%d", &iPopulacao);
    printf("Informe a Área da Cidade:\n");
    scanf("%f", &fArea);
    printf("Informe o Pib da Cidade:\n");
    scanf("%lf", &dPib);
    printf("Informe o Número de Pontos Turísticos da Cidade:\n");
    scanf("%d\n", &iNumPtTur);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da Cidade: %d\n", iCodCid);
    printf("Cidade: %s\n", sNomeCid);
    printf("População: %d\n", iPopulacao);
    printf("Área: %.2f\n", fArea);
    printf("Pib: %.2f\n", dPib);
    printf("Número de Pontos Turísticos: %d\n", iNumPtTur);

    return 0;
}
