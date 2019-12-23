// Euler_nonlinear1stODE.cpp : This file contains the 'main' function. Program execution begins and ends there.
// developer : Beomcheol Kim
// Publish   :   12/23/2019

//-----------------------------------------------------------
// 1. nonlinear_generic class is a derived class of Euler class.
// 2. display method will show the result for each step in this example h=0.01 
// 3. Usage of method : a) instantiate and initializing nonlinear_generic object
// 4. Arguments (initial x value, initial y value, step size, how many times, coefficient for y^2, coefficient for x^2 )
// 5. Enjoy
// Note. I will include another types of first-order nonlinear ODEs, and several plots 


#include <iostream>
#include <string>

#include "Euler.h"
#include "nonlinear_generic.h"
using namespace std;

int main()
{
   
    //sanity check

    nonlinear_generic e2(0.0, 0.0, 0.01, 30, 2, 1);
    e2.display();
}

