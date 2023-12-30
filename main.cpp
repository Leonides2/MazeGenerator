#include <iostream>
#include "scripts/Maze.h"

using namespace std;

int main(){

   Maze M1;

   M1.setXsize(2);
   M1.setYsize(2);

   cout<<"Hola mundo"<<endl;
   cout<<M1.getXsize()<<endl;
   cout<<M1.getYsize()<<endl;


   M1.~Maze();

   return 0; 
}