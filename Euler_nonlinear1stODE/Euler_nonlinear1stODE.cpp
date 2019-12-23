// Euler_nonlinear1stODE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

