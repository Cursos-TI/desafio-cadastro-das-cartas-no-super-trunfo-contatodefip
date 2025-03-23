#include <stdio.h>
#include <string.h> // Inclusão da biblioteca string.

// Desafio Super Trunfo - Paíseso.
// Desenvolvido por Anderson Ferreira Fontes

int main() {
    // DEFINIÇÃO DAS VARIÁVEIS DE CADA CARTA, AGRUPADAS POR TIPOS DE DADOS:
    // Variáveis da carta 1:
    int populacao1, num_pontos_turisticos1;
    char estado1[2], codigo_da_carta1[4], nome_da_cidade1[51];
    float area_territorio1, PIB1;

    //Variáveis da carta 2:
    int populacao2, num_pontos_turisticos2;
    char estado2[2], codigo_da_carta2[4], nome_da_cidade2[51];
    float area_territorio2, PIB2;
    
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
    printf("Digite tamanho da População (Só números. Ex.: 12500): "); scanf("%d", &populacao1);
    printf("Digite a área total em Km² (Ex.: 2658.32): "); scanf("%f", &area_territorio1);
    printf("Digite o PIB (Ex.: 789.52): "); scanf("%f", &PIB1);
    printf("Digite Número de Pontos Turísticos (Ex.: 154): "); scanf("%d", &num_pontos_turisticos1);

    //Impressão dos dados da Carta 1:
    printf("\n\nDADOS DA CARTA 1\n\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo_da_carta1); //Concatenando os dados de duas variáveis
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d de Habitantes\n", populacao1);
    printf("Área Total: %.2f Km²\n", area_territorio1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);

    printf("\n\nMeus Parabéns!\n\n"); // Para facilitar a experiência do usuário.

    // Entrada dos dados da Carta 2:
    printf("AGORA INSIRA OS DADOS DA CARTA 2:\n\n");
    printf("Digite o Estado (Somente uma letra, de A até H): "); scanf(" %c", &estado2);
    printf("Digite um Código para o Estado (Ex.: 01, 02, etc.): "); scanf("%3s", codigo_da_carta2);
    getchar(); // Limpa o buffer antes de usar fgets()
    printf("Digite o Nome da Cidade: "); fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0'; // Removendo o '\n' do fgets()
    printf("Digite tamanho da População (Só números. Ex.: 12500): "); scanf("%d", &populacao2);
    printf("Digite a área total em Km² (Ex.: 2658.32): "); scanf("%f", &area_territorio2);
    printf("Digite o PIB (Ex.: 789.52): "); scanf("%f", &PIB2);
    printf("Digite Número de Pontos Turísticos (Ex.: 154): "); scanf("%d", &num_pontos_turisticos2);

    //Impressão dos dados da Carta 2:
    printf("\n\nDADOS DA CARTA 2\n\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo_da_carta2); //Concatenando os dados de duas variáveis
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d de Habitantes\n", populacao2);
    printf("Área Total: %.2f Km²\n", area_territorio2);
    printf("PIB: %.2f Bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);

    printf("\n\nMeus Parabéns! Você completou o jogo.\n\n"); // Para facilitar a experiência do usuário.

    return 0;
}