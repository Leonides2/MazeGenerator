#include "Maze.h"
#include <random>

using namespace std;

Maze::Maze()
{
    Xsize = 0;
    Ysize = 0;
    MazeForm.resize(Xsize, valarray<int>(Ysize));
}
Maze::~Maze(){}

void Maze::setXsize(int newXsize){
    Xsize = newXsize;
}

void Maze::setYsize(int newYsize){
    Ysize = newYsize;
}

int Maze::getXsize(){
    return Xsize;
}

int Maze::getYsize(){
    return Ysize;
}



