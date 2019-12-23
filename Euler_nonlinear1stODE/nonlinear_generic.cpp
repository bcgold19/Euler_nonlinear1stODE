#include "nonlinear_generic.h"
#include<iostream>
#include<iomanip>
#include<cmath>
nonlinear_generic::nonlinear_generic() {
	std::cout << "This is an approximation for dy/dx=(a)*y^2-(b)*x^2" << std::endl;
}


nonlinear_generic::nonlinear_generic(double _initialx, double _initialy, double step_size, int how_many, double coeff1, double coeff2)
	:Euler(_initialx,_initialy,step_size,how_many),coeff1(coeff1),coeff2(coeff2)
{
	std::cout << "This is an approximation for dy/dx=y^2-x^2" << std::endl;
	std::cout << std::setw(50) << "------------------------------------------------------------" << std::endl;
	std::cout << std::right;
	std::cout << std::setw(10) << "x" << std::setw(10) << "y" << std::setw(10) << "f" << std::setw(10) << "fh" << std::endl;
	std::cout << std::setw(50) << "------------------------------------------------------------" << std::endl;
	std::cout << "initial_x : " << _initialx << " ,initial y : " << _initialy << " ,step size : " << step_size << std::endl;
	std::cout << " a(coefficient1) : " << coeff1 << ", b(coefficient2) : " << coeff2 << std::endl;
	std::cout << std::setw(50) << "------------------------------------------------------------" << std::endl;

}

nonlinear_generic::~nonlinear_generic()
{
}

void nonlinear_generic::Setcoeff1(double coeff1)
{
	this->coeff1 = coeff1;
}

double nonlinear_generic::Getcoeff1()
{
	return this->coeff1;
}

void nonlinear_generic::Setcoeff2(double coeff2)
{
	this->coeff1 = coeff1;

}

double nonlinear_generic::Getcoeff2()
{
	return this->coeff2;
}

double nonlinear_generic::funcXY(double x,double y)
{
	double a1 = pow(y, 2);
	double a2 = pow(x, 2);
	double f1 = coeff1 * a1 - coeff2 * a2;
	return f1;
}



double nonlinear_generic::result()
{
	double x = this->GetinitX();
	double y = this->GetinitY();
	double f;
	double fh;
	for (int i = 0; i <=this->Gethowmany(); i++) {
		f = this->funcXY(x,y);
		fh = f * this->Getstepsize();
		x = x + this->Getstepsize();
		y = fh + y;
		
	}
	return y;
}

void nonlinear_generic::display()
{
	double x = this->GetinitX();
	double y = this->GetinitY();
	double f;
	double fh;
	for (int i = 0; i <= this->Gethowmany(); i++) {
		f = funcXY(x, y);
		fh = f * this->Getstepsize();
		std::cout <<std::setw(10)<< x << " | " << std::setw(10) << y << " | " << std::setw(10) << f << " | " << std::setw(10) << fh << std::endl;
		x = x + this->Getstepsize();
		y = fh + y;

	}
	
}
