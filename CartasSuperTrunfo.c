#include <stdio.h>
#include <string.h> // Inclusão da biblioteca string.

// Desafio Super Trunfo - Países, PIB Per Capita e Densidade Populacional.
// Desenvolvido por Anderson Ferreira Fontes

int main() {
    // DEFINIÇÃO DAS VARIÁVEIS DE CADA CARTA, AGRUPADAS POR TIPOS DE DADOS:
    // Variáveis da carta 1:
    unsigned long int populacao1;
    int num_pontos_turisticos1;
    char estado1[2], codigo_da_carta1[4], nome_da_cidade1[51];
    float area_territorio1, PIB1, PIBperCapita1, densidade1;
    float superPoder1; // Nova variável para armazenar o superpoder da carta 1
    
    //Variáveis da carta 2:
    unsigned long int populacao2;
    int num_pontos_turisticos2;
    char estado2[2], codigo_da_carta2[4], nome_da_cidade2[51];
    float area_territorio2, PIB2, PIBpercapita2, densidade2;
    float superPoder2; // Nova variável para armazenar o superpoder da carta 2
    
    // TÍTULO E SUBTÍTULO DO JOGO

    printf("SUPER TRUNFO\nUtilizando a inteligência divertidamente!\n\nDigite os dados de cada carta e, em seguida, visualize os resultados:\n\n");
    
    // CADASTRO DE CARTAS:
    // Entrada de dados da Carta 1:
    printf("INSIRA OS DADOS DA CARTA 1:\n\n");
    printf("Digite o Estado (Somente uma letra, de A até H): "); scanf(" %c", &estado1);
    printf("Digite um Código para o Estado (Ex.: 01, 02, etc.): "); scanf("%3s", codigo_da_carta1);
    getchar(); // Limpa o buffer antes de usar fgets()
    printf("Digite o Nome da Cidade: "); fgets(nome_da_cidade1, sizeof(nome_da_cidade1), stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0'; // Removendo o '\n' do fgets()
    printf("Digite tamanho da População (Só números. Ex.: 12500): "); scanf("%lu", &populacao1);
    printf("Digite a área total em Km² (Ex.: 2658.32): "); scanf("%f", &area_territorio1);
    getchar(); // Limpa o buffer para evitar erros no próximo scanf
    printf("Digite o PIB (Ex.: 789.52): "); scanf("%f", &PIB1);
    printf("Digite Número de Pontos Turísticos (Ex.: 154): "); scanf("%d", &num_pontos_turisticos1);

    // Definindo as operações de PIB percapita e Densidade Populacional da Carta 1
    PIBperCapita1 = PIB1 / populacao1; // Cálculo do PIB Per capita da carta 1;
    densidade1 = (float) populacao1 / area_territorio1; // Cálculo da Densidade Populacional da carta 1.

    // Cálculo do Super Poder da Carta 1
    superPoder1 = populacao1 + area_territorio1 + PIB1 + num_pontos_turisticos1 + PIBperCapita1 + (1.0 / densidade1);

    //Impressão dos dados da Carta 1:
    printf("\n\nDADOS DA CARTA 1\n\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo_da_carta1); //Concatenando os dados de duas variáveis
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu de Habitantes\n", populacao1);
    printf("Área Total: %.2f Km²\n", area_territorio1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1 / 1000000000.0);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f reais\n", PIBperCapita1 * 1000);
    printf("Super Poder da carta 1: %f\n\n", superPoder1); // Impressão do super poder da cart 1

    // Entrada dos dados da Carta 2:
    printf("AGORA INSIRA OS DADOS DA CARTA 2:\n\n");
    printf("Digite o Estado (Somente uma letra, de A até H): "); scanf(" %c", &estado2);
    printf("Digite um Código para o Estado (Ex.: 01, 02, etc.): "); scanf("%3s", codigo_da_carta2);
    getchar(); // Limpa o buffer antes de usar fgets()
    printf("Digite o Nome da Cidade: "); fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // Removendo o '\n' do fgets()
    printf("Digite tamanho da População (Só números. Ex.: 12500): "); scanf("%lu", &populacao2);
    printf("Digite a área total em Km² (Ex.: 2658.32): "); scanf("%f", &area_territorio2);
    getchar(); // Limpa o buffer para evitar erros no próximo scanf
    printf("Digite o PIB (Ex.: 789.52): "); scanf("%f", &PIB2);
    printf("Digite Número de Pontos Turísticos (Ex.: 154): "); scanf("%d", &num_pontos_turisticos2);

    // Definindo as operações de PIB percapita e Densidade Populacional da Carta 2
    PIBpercapita2 = PIB2 / populacao2; // Cálculo do PIB Per capita da carta 2;
    densidade2 = (float) populacao2 / area_territorio2; // Cálculo da Densidade Populacional da carta 2.

    // Cálculo do Super Poder da Carta 2
    superPoder2 = populacao2 + area_territorio2 + PIB2 + num_pontos_turisticos2 + PIBpercapita2 + (1.0 / densidade2);

    //Impressão dos dados da Carta 2:
    printf("\n\nDADOS DA CARTA 2\n\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo_da_carta2); //Concatenando os dados de duas variáveis
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu de Habitantes\n", populacao2);
    printf("Área Total: %.2f Km²\n", area_territorio2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2 / 1000000000.0);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f reais\n", PIBpercapita2 * 1000);
    printf("Super Poder da carta 2: %f", superPoder2); // Impressão do super poder da cart 2

    // Comparação das Cartas (Atributo: População):
    printf("\n\nCOMPARAÇÃO DAS CARTAS\n\n");

    printf("Carta 1 - %s -  %d Habitantes;", nome_da_cidade1, populacao1);
    printf("\nCarta 2 - %s -  %d Habitantes;", nome_da_cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!  ", nome_da_cidade1);
    } else{
        printf("\nResultado: Carta 2 (%s) venceu!  ", nome_da_cidade2);
    }
    
    // Fim do jogo.
    printf("\n\nMeus Parabéns! Você completou o jogo.\n\n"); // Para facilitar a experiência do usuário.

    return 0;
}
