/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   King.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:44:58 by rboudwin          #+#    #+#             */
/*   Updated: 2024/11/04 16:10:36 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "KingsTable.hpp"
#include "Piece.hpp"

class King : Piece
{
private:
	/* data */
public:
	King(/* args */);
	int Move(int x, int y) override;
	~King();
};


