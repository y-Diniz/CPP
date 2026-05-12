/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:14:38 by devrafaelly       #+#    #+#             */
/*   Updated: 2026/05/07 01:17:45 by rafaoliv         ###   ########.fr       */
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
	std::cout << "A utilidade do KAY/O ajudou bastante no round. Conseguimos avançar e garantir espaço no mapa." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "As flashes estão acertando o próprio time com frequência. Se isso continuar, vamos começar a perder rounds importantes." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Você cegou o time inteiro na hora no entry, a gente perdeu o round sem ver metade dos inimigos. DESINSTALA ESSE JOGO!" << std::endl;
}