#include <stdio.h>

// Desafio Super Trunfo - Nível Intermediário
// cálculos de densidade populacional e PIB per capita

int main() {
    // var 
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    double pib_per_capita;

    // cadastro das cartas
    printf("Cadastro das Cartas\n");
    
    printf("\nDigite o código da cidade: ");
    scanf("%s", codigo);

    getchar();                                  /*parte onde tive dificuldade pois o codigo nao estava querendo ler o nome com espaço*/ 
    printf("Digite o nome da cidade: ");        /* comecei a usar fgets mas ele pulava a entrada, ia direto pra população*/
    fgets(nome, 50, stdin);                     /* e o getchar foi o que consegui encontrar e que deu certo pra fazer o fgets funcionar*/
    
    printf("Digite a população: ");
    scanf("%d", &populacao);
    
    printf("Digite a área: ");
    scanf("%f", &area);
    
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // calculo
    densidade_populacional = populacao / area;
    pib_per_capita = pib * 1000000000 / populacao;   // multiplicando o PIB para converter para reais
    
    // exibicao dos dados da carta1
    printf("\nCarta 1:\n");
    printf("Estado: A\n");
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita);
    
    // cadast carta 2
    printf("\nCadastro da Carta 2\n");

    printf("\nDigite o código da cidade: ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);  
    
    printf("Digite a população: ");
    scanf("%d", &populacao);
    
    printf("Digite a área: ");
    scanf("%f", &area);
    
    printf("Digite o PIB: ");
    scanf("%lf", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = populacao / area;
    pib_per_capita = pib * 1000000000 / populacao; 

    //  exb dados da carta2
    printf("\nCarta 2:\n");
    printf("Estado: B\n");
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita);

    return 0;
}
