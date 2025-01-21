#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char codigo_carta[3];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char nome[30];

//Apresentação
    printf("Bem-Vindo ao Super Trufo! \n"); 

//Pergunta os dados e armazena-os 
    printf("Digite o nome da cidade: ");
    scarf(" %s", nome);

    printf("Digite o codigo da carta (ex: 01, 02): ");
    scanf(" %s", &codigo_carta);

    printf("Digite a população da cidade (sem vírgulas): ");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos);

//Mostra os Dados da carta
printf("\nDados cadastrados: \n");  
printf("Nome: %s\n", nome);
printf("Código da Carta: %s\n", codigo_carta);
printf("População: %d\n", populacao);
printf("Área: %f km²\n", area);
printf("PIB: %g bilhões de reais\n", pib);
printf("Número de pontos Turísticos: %d\n", pontos_turisticos);




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
