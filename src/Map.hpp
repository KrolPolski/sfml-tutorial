/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:03:10 by rboudwin          #+#    #+#             */
/*   Updated: 2024/11/04 14:45:54 by rboudwin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Map
{
private:
	char init_map[9][9]
	{
		{'C', '0', '0', 'A', 'A', 'A', '0', '0', 'C'},
		{'0', '0', '0', '0', 'A', '0', '0', '0', '0'},
		{'0', '0', '0', '0', 'D', '0', '0', '0', '0'},
		{'A', '0', '0', '0', 'D', '0', '0', '0', 'A'},
		{'A', 'A', 'D', 'D', 'K', 'D', 'D', 'A', 'A'},
		{'A', '0', '0', '0', 'D', '0', '0', '0', 'A'},
		{'0', '0', '0', '0', 'D', '0', '0', '0', '0'},
		{'0', '0', '0', '0', 'A', '0', '0', '0', '0'},
		{'C', '0', '0', 'A', 'A', 'A', '0', '0', 'C'}
	};
	char curr_map[9][9]
	{
		{'C', '0', '0', 'A', 'A', 'A', '0', '0', 'C'},
		{'0', '0', '0', '0', 'A', '0', '0', '0', '0'},
		{'0', '0', '0', '0', 'D', '0', '0', '0', '0'},
		{'A', '0', '0', '0', 'D', '0', '0', '0', 'A'},
		{'A', 'A', 'D', 'D', 'K', 'D', 'D', 'A', 'A'},
		{'A', '0', '0', '0', 'D', '0', '0', '0', 'A'},
		{'0', '0', '0', '0', 'D', '0', '0', '0', '0'},
		{'0', '0', '0', '0', 'A', '0', '0', '0', '0'},
		{'C', '0', '0', 'A', 'A', 'A', '0', '0', 'C'}
	};
	sf::RectangleShape mapSquares[9][9];
	sf::RenderWindow *mapWindow;
public:
	Map(sf::RenderWindow *window);
	void drawBoard(void);
	void drawPieces(void);
	~Map();
};


