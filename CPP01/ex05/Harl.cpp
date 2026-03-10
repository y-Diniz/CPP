/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devrafaelly <devrafaelly@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:14:38 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/03/09 21:00:00 by devrafaelly      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level ) {
	typedef void (Harl::*HarlFunc)();
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunc funcs[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*funcs[i])();
			return ;
		}
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