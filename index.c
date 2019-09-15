#include <stdio.h>
char UserName, P_atual, TP_atual;
int Op, FP_atual, VP_atual, RP_atual;

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
	
	printf("\n===========\n");
	printf("Escolha: ");
	scanf("%d", &Op);
	
	switch(Op) {
		case 1:
			P_atual = "Bulbasaur";
			FP_atual = 3;
			VP_atual = 2;
			RP_atual = 4;
			TP_atual = "Grama e Veneno";
			
			break;
			
		case 2:
			P_atual = "Charmander";
			FP_atual = 4;
			VP_atual = 4;
			RP_atual = 3;
			TP_atual = "Fogo";
			
			break;
			
		case 3:
			P_atual = "Squirtle";
			FP_atual = 4;
			VP_atual = 3;
			RP_atual = 4;
			TP_atual = "Aquatico";
			
			break;
		
		default:
			printf("Ocorreu algum erro...\n");
			return 1;
			
			break;	
	}
	
}
//Fim da função EscolhaInicial
