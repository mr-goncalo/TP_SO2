/* definir icludes*/

// Variaveis 
#define MAX_JOGADORES 20
#define MAX_NAVES 50
#define MAX_BOMBAS 50
#define MAX_POWERUPS 10
#define MAX_TIROS 1000
#define MAPA_Y 500;
#define MAPA_X 500; 

typedef struct {
	int posX, posY, tipo;
	bool activa;
}BOMBASTIROS;

typedef struct{
	int posX, posY, vidas, pontuacao,pid;
	/// PAra ser usado mais tarde?, altura, largura;
	char username[20];	
	bool escudo, alcool;
}JOGADOR;

typedef struct {
	int posX, posY, resistencia, taxaDisparo, velocidade;
}NAVESENIMIGAS;

typedef struct {
	int tipo,posX,posY;
}POWERUPS;

typedef struct {
	JOGADOR jogador[MAX_JOGADORES];
	BOMBASTIROS bombasTiros[MAX_BOMBAS];
	NAVESENIMIGAS navesEniTipo1[MAX_NAVES];
	NAVESENIMIGAS navesEniTipo2[MAX_NAVES];
}JOGO;