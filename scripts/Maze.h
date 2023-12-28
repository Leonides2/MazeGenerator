
#ifndef MAZE_H
#define MAZE_H


#include <iostream>
#include <valarray>
using namespace std;

class Maze{
public:
Maze();
~Maze();
int getXsize();
int getYsize();
void setXsize(int);
void setYsize(int);
void draw();
private:
int Xsize;
int Ysize;
valarray<valarray<int>> MAZE;
};

#endif