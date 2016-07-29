/*
Douglas R. Ferreira

Última Atualização
Rio de Janeiro, 16/05/2016
*/

#include "Game_Main.h"
#include "Sounds.h"
#include <SDL_timer.h>


// Inicialização principal do jogo, chamando todas as sub inicializações
void Game_Setup() {
	
	Game_GUI_Setup();
	
		
	
}

// Loop principal do jogo, chamando todos os sub loops
void Game_Loop() {
	
	Game_GUI_Loop();


			
}

