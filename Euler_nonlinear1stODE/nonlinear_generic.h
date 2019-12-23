#pragma once
#include<iostream>
#include<string>
#include<cmath>
#include "Euler.h"

class nonlinear_generic :public Euler {
	// In this class, I will solve the nonlinear first order inhomogeneous equation
	// system of equation : dy/dx = (coeff1)*y^2 - coeff(2)*x^2



public:
	double coeff1;//coefficient for y
	double coeff2;//coefficient for x

	nonlinear_generic();
	
	nonlinear_generic(double _initialx, double _initialy, double step_size,int how_many, double coeff1, double coeff2);		
	virtual ~nonlinear_generic();

	//setters and getters for 
	void Setcoeff1(double coeff1);
	double Getcoeff1();


	void Setcoeff2(double coeff2);
	double Getcoeff2();

	virtual double funcXY(double x, double y);
	

	double result();
	void display();
};