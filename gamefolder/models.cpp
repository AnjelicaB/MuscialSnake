# include <models.h>
#include <iostream>

// methods for Position object
Position::Position(int x, int y) {
    this->x = x;
    this->y = y;
}

int Position::getX(){
    return x;
}

int Position::getY(){
    return y;
}

// methods for SnakeUnit object
SnakeUnit::SnakeUnit(Position position, SnakeUnit *previous){
    this->previous = previous;
    this->position= position;
}

SnakeUnit::SnakeUnit(Position position){
    this->position = position;
}

Position SnakeUnit:: getPrev(){
    return &previous;
}

Position SnakeUnit::getPos(){
    return position;
}

void SnakeUnit::setPrev(SnakeUnit *ptr){
    previous = ptr;
}

void SnakeUnit::setPos(Position pos){
    position = pos;
}