/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Attacker.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:42:48 by rboudwin          #+#    #+#             */
/*   Updated: 2024/11/04 16:14:23 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Piece.hpp"

class Attacker : Piece
{
private:
	/* data */
public:
	Attacker(/* args */);
	virtual int Move(int x, int y) override;
	~Attacker();
};


