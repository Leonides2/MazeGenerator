#include "Maze.h"
#include <random>

Maze::Maze()
{
    Xsize = 0;
    Ysize = 0;
    MAZE.resize(Xsize, valarray<int>(Ysize));
}
Maze::~Maze(){}

void Maze::setXsize(int newXsize){

}

