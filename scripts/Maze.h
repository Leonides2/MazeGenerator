
#ifndef MAZE_H
#define MAZE_H

#include <valarray>

class Maze{
public:
    Maze();
    virtual ~Maze();
    int getXsize();
    int getYsize();
    void setXsize(int newXsize);
    void setYsize(int newYsize);
    bool generate();
    void draw();
private:
    int Xsize;
    int Ysize;
    std::valarray<std::valarray<int>> MazeForm;
};

#endif