#include "Euler.h"

Euler::Euler()
	
{
}



Euler::Euler(double initial_x, double initial_y, double step_size, int how_many)
	:initial_x(initial_x),initial_y(initial_y),step_size(step_size),how_many(how_many)
{
}

Euler::~Euler()
{
}

void Euler::SetinitX(double initial_x)
{
	this->initial_x = initial_x;
}

double Euler::GetinitX()
{
	return this->initial_x;
}

void Euler::SetinitY(double initial_y)
{
	this->initial_y = initial_y;
}

double Euler::GetinitY()
{
	return this->initial_y;
}

void Euler::Setstepsize(double step_size)
{
	this->step_size = step_size;
}

double Euler::Getstepsize()
{
	return this->step_size;
}

void Euler::Sethowmany(int how_many)
{
	this->how_many = how_many;

}

int Euler::Gethowmany()
{
	return this->how_many;
}
