#include <stdio.h>
char UserName;
int Op;
FILE *PoDB; //Banco de dados do Pokemon

void EscolhaInicial();
int MenuPrincipal();

int main() {
	system("clear"); //Limpa tela
	MenuPrincipal();

	return 0;
} //Fim da função principal

int MenuPrincipal() { //Função Menu Principal
	printf("\n======\n");
	printf(" Menu\n");
	printf("======\n");

	printf("[1] - Começar\n");
	printf("[2] - Continuar\n");
	printf("[3] - Sair\n");

	printf("\n==========\n");
	printf("Escolha: ");
	scanf("%d", &Op);

	switch(Op) { //Caminho da escolha Menu
		case 1:
			EscolhaInicial();

			break;

		case 2:
			printf("\nSegunda função é iniciada...\n");

			break;

		case 3:
			printf("\nPrograma é encerrado...\n");

			break;

		default:
			printf("\nTente novamente...\n");
			sleep(1);
			system("clear");
			MenuPrincipal();

			break;

	}

	return 0;
} //Fim da função Menu Principal

void EscolhaInicial() {
	system("clear"); //Limpa tela
	printf("==============\n");
	printf(" POKEMON GAME\n");
	printf("==============\n");

	printf("\nDigite seu UserName: ");
	scanf("%s", &UserName);
	system("clear");
	
	//Introdução aos Pokemons Iniciais
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

	system("clear"); //Limpa tela
	//Abertura do banco de dados individual dos pokemons
	PoDB = fopen("Documentos//Projetos em C//PokemonGame//dados-pomemon-ini.txt", "a");

	if(PoDB == NULL) {
		printf("\nErro no Banco de Dados...\n\n");
		return 1;
		//Verificação da abertura do DB
	}

	switch(Op) { //Atribuição de valores iniciais
		case 1:
			fprintf(PoDB, "\nBulbasaur\n3\n2\n4\nGrama//Veneno\n"); //Salvando dados
			printf("\nVocê escolheu Bulbasaur!\n");

			break;
			
		case 2:
			fprintf(PoDB, "Charmander\n4\n4\n3\nFogo\n"); //Salvando dados
			printf("\nVocê escolheu Charmander!\n");

			break;
			
		case 3:
			fprintf(PoDB, "Squirtle\n4\n3\n4\nAquatico\n"); //Salvando dados
			printf("\nVocê escolheu Squirtle!\n");
			
			break;
		
		default:
			printf("Ocorreu algum erro...\n");
			return 1;
			
			break;	

	}

		sleep(2);
		system("clear");
		MenuPrincipal();

} //Fim da função EscolhaInicial
