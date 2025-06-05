#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   printf("Desafio novato \n");

    char nome[50] = "Bahia";
    float habitantes = 500000;
    double area = 1500 ;
    char codigo = 1;
    float pib = 699.28 ;
    int numero = 50;

    printf("Qual o nome do estado ?\n");
    scanf("%s", &nome);

    printf("Quantos habitantes possui?\n");
    scanf("%f" , &habitantes);

    printf(" Qual a área da cidade ?\n");
    scanf("%f" , &area);

    printf("Qual o código?\n");
    scanf("%s" , &codigo);
    
    printf(" Quanto é o pib?\n");
    scanf("%f" , &pib);
    
    printf("quantos pontos turísticos possui ?\n");
    scanf("%d" , &numero);

    printf("nome da cidade: %s\n" , nome);
    printf("número de habitantes: %f\n" , habitantes);
    printf("Área da cidade: %f km\n" , area);
    printf("Código da carta: %f/n" , codigo);
    printf("O PIB da cidade é: %f\n bilhoes de reais" , pib);
    printf("numero de pontos turisticos: %d\n" , numero);

    
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
