#pragma once
// This is a base class for the Euler methods, as all euler methods ( in case of first order non-linear ode) ,share similar feature
// Here, independent variable x can be interpreted as time variable and the dependent variable y can be a position with respect to time
// Or status at time t.
// For the sake of deriving a new class, which inhereted all properties of base class, I built 'nonlinear_generic.cpp'
// Note that this is an initial version, so other first order non-linear equations will be uploaded as soon as possible.

class Euler {
private:

	double initial_x;
	double initial_y;
	double step_size;

	int how_many;



public:

	//Constructors and Destructor
	Euler();//Default constructor
	Euler(double initial_x, double initial_y, double step_size , int how_many);
	virtual ~Euler();//destructor
	//------------------------------------------------------


	//setters and getters for initial values and a step size
	void SetinitX(double initial_x);
	double GetinitX();

	void SetinitY(double initial_y);
	double GetinitY();

	void Setstepsize(double step_size);
	double Getstepsize();

	void Sethowmany(int how_many);
	int Gethowmany();

	//--------------------------------------
	//
	virtual double funcXY(double x,double y)=0 ; 
	//this will return the value of f(x,y) such that for the system dy/dx = f(x,y)
	//I've defined these functions as pure virtual functions, as It must be defined with a specific model type.




};