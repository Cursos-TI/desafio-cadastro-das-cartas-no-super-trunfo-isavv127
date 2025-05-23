#include <stdio.h>

int main() {
    // Variáveis gerais
    char codigo[4], nome[50];
    unsigned long int populacao, populacao1, populacao2;
    float area, area1, area2;
    double pib, pib1, pib2;
    int pontos_turisticos, pt1, pt2;
    float densidade1, densidade2;
    double pib_pc1, pib_pc2;
    float sp1, sp2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);  

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // salvando dados carta 1
    populacao1 = populacao;
    area1 = area;
    pib1 = pib;
    pt1 = pontos_turisticos;

    densidade1 = populacao1 / area1;
    pib_pc1 = pib1 * 1000000000.0 / populacao1;
    sp1 = (float)populacao1 + area1 + (float)(pib1 * 1000000000.0) +
          (float)pt1 + (float)pib_pc1 + (1.0f / densidade1);

    // exibindo carta 1
    printf("\nCarta 1:\n");
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pt1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pib_pc1);
    printf("Super Poder: %.2f\n", sp1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin);  

    printf("Digite a população: ");
    scanf("%lu", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // salvando oss dados carta 2
    populacao2 = populacao;
    area2 = area;
    pib2 = pib;
    pt2 = pontos_turisticos;

    densidade2 = populacao2 / area2;
    pib_pc2 = pib2 * 1000000000.0 / populacao2;
    sp2 = (float)populacao2 + area2 + (float)(pib2 * 1000000000.0) +
          (float)pt2 + (float)pib_pc2 + (1.0f / densidade2);

    // exibindo carta 2
    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pt2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pib_pc2);
    printf("Super Poder: %.2f\n", sp2);

    //comparar
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pt1 > pt2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_pc1 > pib_pc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", sp1 > sp2);

    return 0;
}
