#pragma once
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