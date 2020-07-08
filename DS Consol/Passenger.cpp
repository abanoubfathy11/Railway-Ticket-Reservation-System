#include "Passenger.h"

Passenger::Passenger(string e, string p, string n)
{
	email = e;
	pass = p;
	name = n;
	
}
void Passenger::Passenger22(string e, string p, string n,string b, string d, string D,int t)
{
	email = e;
	pass = p;
	name = n;
	boarding_point = b;
	destination_point = d;
	Date = D;
	Tnum = t;
}

Passenger::Passenger()
{
}


Passenger::~Passenger()
{
}
