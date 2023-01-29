/**
 * This file will contain all of the classes necessary for the game
 * 
*/


/**
 * Attributes: (private)
 * x
 * y
 * music note
 * 
 * Method:
 * getter (setter?) (public)
 * x
 * y
 * music notes
*/
class Position{

};

/**
 * This class will act as a helper to the Snake class. 
 * It is a square/circle (TBD) of the same width/height as each square in the grid.
 * 
 * Attribute
 * width (in constants), divisible by 2
 * height (in constants), divisible by 2
 * x
 * y
 * forward reference (SnakeUnit class)
 * 
 * Methods
 * getter x (public)
 * getter y (public)
*/
class SnakeUnit{
    private:
        SnakeUnit *previous;
        Position position;
    public:
        SnakeUnit(Position position, SnakeUnit previous){
            previous = previous;
            position= position;
        }
        // constructor with no previous for head
        SnakeUnit(Position position){
            position = position;
        }
        SnakeUnit getPrev(){
            return *previous;
        }
        Position getPos(){
            return position;
        }
        SnakeUnit setPrev(SnakeUnit *ptr){
            previous = ptr;
        }
        Position setPos(Position pos){
            position = pos;
        }


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
 * 
 * Attributes: 
 * length: number of snake unites
 *  Initial length (in constant)
 * head: snakeunit object
 * tail: snakeunit object
 * speed: multiplier for frame rate
 * 
 * methods:
 * getter for speed
 * DEF setter for speed (changed with speedapple)
 * return length (public)
 * increment length
*/
class Snake{
    private:
        int length;
        int speed;
        SnakeUnit *head;
        SnakeUnit *tail;
    public:
        Snake(){
            // initial values should reference constants later
            speed = 1;
            length = 1;
            // this won't work until position is implemented
            head = &SnakeUnit(Position());
            tail = head;
        }
        SnakeUnit getHead(){
            return *head;
        }
        SnakeUnit getTail(){
            return *tail;
        }
        int getLength(){
            return length;
        }
        int getSpeed(){
            return speed;
        }
        void incLength(){
            length++;
        }
        void incSpeed(){
            speed++;
        }
        void decSpeed(){
            speed--;
        }
};


/**
 * Attribute
 * x
 * y
 * Methods
 * getter x
 * getter y
*/
class FoodItem{

};

class LengthApple : public FoodItem{

};

/**
 * method:
 * change speed: changes the speed of the apple
*/
class SpeedApple : public FoodItem{

};