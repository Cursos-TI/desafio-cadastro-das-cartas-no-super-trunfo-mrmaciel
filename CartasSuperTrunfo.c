#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char   cEstado;        //Estado
    int    iCodCid;        //Código da Cidade
    char   sNomeCid[50];   //Nome da Cidade
    int    iPopulacao;     //População
    float  fArea;          //Área    
    double dPib;           //PIB    
    int    iNumPtTur;      //Número de pontos turísticos 
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o estado, código da cidade, nome, população, área, etc.
    printf("Informe o Estado:\n");
    scanf("%c", &cEstado);
    printf("Informe o Código da Carta:\n");
    scanf("%d", &iCodCid);
    printf("Informe o Nome da Cidade:\n");
    scanf("\n%[^\n]",sNomeCid);
    printf("Informe a População da Cidade:\n");
    scanf("%d", &iPopulacao);
    printf("Informe a Área da Cidade:\n");
    scanf("%f", &fArea);    
    printf("Informe o Pib da Cidade:\n");
    scanf("%lf", &dPib);
    printf("Informe o Número de Pontos Turísticos da Cidade:\n");
    scanf("%d", &iNumPtTur);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    printf("Estado: %c\n", cEstado);    
    printf("Código da Carta: %c0%d\n", cEstado, iCodCid);
    printf("Cidade: %s\n", sNomeCid);
    printf("População: %d\n", iPopulacao);
    printf("Área: %.2f km²\n", fArea);
    printf("Densidade Populacional: %.2f pessoas/km²\n", iPopulacao/fArea);
    printf("PIB: %.2f reais\n", dPib);
    printf("PIB per capta: %.2lf reais\n", dPib/iPopulacao);
    printf("Número de Pontos Turísticos: %d\n", iNumPtTur);
    printf("\n");

    return 0;
}
