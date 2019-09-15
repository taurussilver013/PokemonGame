#include <stdio.h>
char UserName;

void EscolhaInicial();

int main() {
	printf("==============\n");
	printf(" POKEMON GAME\n");
	printf("==============\n");
	
	printf("\nDigite seu UserName: ");
	scanf("%s", &UserName);
	system("cls");
	
	EscolhaInicial();
	
	return 0;
}
//Fim da função principal

void EscolhaInicial() {
	printf("===================\n");
	printf(" Pokemons Iniciais\n");
	printf("===================\n\n");
	
	printf("\n[1] - Bulbasaur\n");
	printf("----------------\n");
	printf("Forca: 3\n");
	printf("Velocidade: 2\n");
	printf("Resistencia: 4\n");
	printf("Tipo: Grama e Veneno\n");
	
	printf("\n\n[2] - Charmander\n");
	printf("------------------\n");
	printf("Forca: 4\n");
	printf("Velocidade: 4\n");
	printf("Resistencia: 3\n");
	printf("Tipo: Fogo\n");
	
	printf("\n\n[3] - Squirtle\n");
	printf("-----------------\n");
	printf("Forca: 4\n");
	printf("Velocidade: 3\n");
	printf("Resistencia: 4\n");
	printf("Tipo: Aquatico\n");
	
}
//Fim da função EscolhaInicial
