/**
 * This file will contain all of the classes necessary for the game
 * 
*/


/**
 * This class acts as a helper to the SnakeUnit and Speed/LengthApple classes
 * This class contains the relative x and y positions.
 * For example, x = 1 and y = 3 means that the object is positioned 
 * at the 1st grid horizontally and 3rd grid vertically.
*/
class Position{
//  Attributes: (private)
//  x
//  y
//  music note
// 
//  Method:
//  getter (setter?) (public)
//  x
//  y
//  music notes

};


/**
 * This class will act as a helper to the Snake class. 
 * It is a square/circle (TBD) of the same width/height as each square in the grid.
*/
class SnakeUnit{
//  Attribute
//  width (in constants), divisible by 2
//  height (in constants), divisible by 2
//  forward reference (SnakeUnit class)
//  position (Position class)
//  
//  Methods
//  getter x (public)
//  getter y (public)
// 

};


/**
 * This class will use SnakeUnit as an attribute for each unit of the snake.
 * The snake moves one unit per frame. When the snake moves, the last unit will
 * be removed and one more unit will be added in front of the head depending on
 * user input (up, down, right, left). When the snake grows in size, one more unit
 * will be added in front of the head but the last unit will NOT be removed.
 * 
 * A reference to the head and the tail will be kept as an attribute of SnakeUnit class.
 * The head will determine where to add another unit when the snake moves.
 * The tail will have a forward reference attribute to determine
 * where the next tail will be when the tail is removed.
*/
class Snake{
// Attributes: 
// length: number of snake unites
//    Initial length (in constant)
// head: snakeunit object
// tail: snakeunit object
// speed: multiplier for frame rate

// methods:
// getter for speed
// DEF setter for speed (changed with speedapple)
// return length (public)
// increment length
};


/**
 * Attribute:
 * position
 * 
 * Method:
 * 
*/
class LengthApple{

};

/**
 * Attribute:
 * position
 * 
 * Method:
 * change speed: changes the speed of the snake
*/
class SpeedApple{

};