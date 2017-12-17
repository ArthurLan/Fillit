# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.txt                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alanter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/08 19:41:04 by alanter           #+#    #+#              #
#    Updated: 2017/12/11 14:03:11 by alanter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CURRENT QUESTIONS :

	- How to reference tetriminos in our square ?
		-> Using (i, j) axes ?
			- Coordinates in each tetriminos (for each box of each tetriminos ?) YES

	- How to print it at the end ?
		-> Printing a two sized array from all our coordinates ?
			- Character by character
			YES

	- How to move tetriminos within our sqare, checking we are still inside ?
		-> Should we increment all the [i] and/or [y] of our tetriminos  ==> YES WITHIN STRUCT TETRI
		or
		-> Should we know the shape of our size and work with it ? ==> NO, work with all boxes separetly
			==> FUNCT MOVERIGHT (iterate j, checking that j<size)
			==> FUNCT MOVEDOWN (iterate i, initialize j, considering previous shapes, and (i&j) < size)

- READ, CHECK IF VALID WHILE STOCKING

	- Read input four lines by four, checking if only one \n
	- Create a struct for each tetriminos
	- Check each time if it is valid

- CREATE ENDSQUARE TO FILL CONSIDERING INFOS

	- Consider special cases
	- Create an array of array ==> square[i][j]
	- Squaresize -> Helps kmowing when to move shapes down, and when not possible (and have to increment square size)

- FILL AND BACKTRACK
	
	- Use doubly linked list to navigate through possibilities ? NO -> Array of array for square, and array of struct for tetriminos
	- 
	
	
	
	
	
	
	
	
	
	
Tetriminos shape possible :

1.		2.		3.		4.		5.		6.		7.		8.		9.		10.
####$	#...$	##..$	#...$	###.$	.#..$	.#..$	.#..$	##..$	.##.$				
....$	#...$	##..$	##..$	.#..$	###.$	##..$	##..$	.##.$	##..$		
....$	#...$	....$	#...$	....$	....$	.#..$	#...$	....$	....$
....$	#...$	....$	....$	....$	....$	....$	....$	....$	....$

11.		12.		13.		14.		15.		16.		17.		18.		19.
#...$	##..$	#...$	.#..$	###.$	##..$	###.$	#...$	..#.$			
##..$	#...$	###.$	.#..$	..#.$	.#..$	#...$	#...$	###.$			
.#..$	#...$	....$	##..$	....$	.#..$	....$	##..$	....$			
....$	....$	....$	....$	....$	....$	....$	....$	....$									
