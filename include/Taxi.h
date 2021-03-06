/**
 * University of La Laguna
 * Subject: Artificial Intelligence
 * Practice # 1: Search.
 * @author Marco Antonio Cabrera Hernández
 * @author Jose Antonio Trujillo Mendoza
 * @author Mario Hernández García
 * @class Taxi
 * @brief Creates a Taxi object to walk the path
 *
 * @date 02/11/2021
*/
#ifndef _TAXI_H
#define _TAXI_H

#include "Colors.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <ctime>

enum direction {NORTH, EAST, SOUTH, WEST};

class Taxi {
  public:
    Taxi(const int& x, const int& y);
    
    int get_Xcoord() const;
    int get_Ycoord() const;
    // Prints the taxi in the board
    void print_taxi();
    // Prints the taxi in the the file
    void print_taxi(std::ofstream& fout);
  private:
    // Coordenates of taxi on board
    int xCoord;
    int yCoord;
    // Specifies current direction of the taxi
    int direction_;
};

#endif // _TAXI_H