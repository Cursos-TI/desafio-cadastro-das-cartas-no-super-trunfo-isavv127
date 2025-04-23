#include <stdio.h>
//desafio super trunfo - Nível:Novato
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[4];
    char nome[50];  
    int populacao;
    float area; 
    double pib; 
    int pontos_turisticos; 

    // cadastrando das Cartas:
    printf("Cadastro das Cartas\n");
    
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);  
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);  
    
    printf("Digite a população: ");
    scanf("%d", &populacao);  
    
    printf("Digite a área: ");
    scanf("%f", &area);  
    
    printf("Digite o PIB: ");
    scanf("%lf", &pib);  
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);  


    // Exibição dos Dados das Cartas
    printf("\nCarta cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
