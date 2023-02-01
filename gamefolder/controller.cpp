/**
 * This is the controller file for this game.
 * 
 * This file will put together the input and the graphics that runs the game
 * (as the project progresses we may consider spliting input and graphics
 * into two different files). This file will contain an initialiser for the
 * game and a giant loop for each frame of the game.
 * 
 * Creators: Bian, Anjelica; Ketterer, Em
*/

# include <constants.h>

//////generating the apples//////
// a range (random number generator then round) to find the positions to generate
// a list of occupied positions from the snake
// a list of occupied positions from the apples
// Some function to create the objects and put them in a list