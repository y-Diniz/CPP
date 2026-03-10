/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 21:03:52 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/09 21:33:08 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::complain( std::string level ) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	for (i = 0; i < 4; i++) {
		if (level == levels[i])
			break ;
	}
	
	switch (i) {
		case 0: this->debug(); // falls through
		case 1: this->info(); // falls through
		case 2: this->warning(); // falls through
		case 3: this->error(); break ;
		default: std::cout << "[ Provavelmente uma Reyna fazendo lurker ]" << std::endl;
	}
	
}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Bom demais quando o KAY/O manda a perfeitinha e o time inimigo nem sabe de onde o tiro está vindo. Fica fácil demais ganhar assim." << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Eu não acredito que você conseguiu flashar o time inteiro de novo! Eu estava pronto para entrar no site e, de repente, estou completamente cego." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "KAY/O, eu acho que essas flashes deveriam ser usadas contra o outro time. Porque, até agora, parece que o principal alvo delas somos nós." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Isto é inaceitável! Você já flashou no meio da troca três rounds seguidos. DESINSTALA ESSE JOGO!" << std::endl;
}