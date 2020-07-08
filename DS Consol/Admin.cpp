#include "Admin.h"

Admin::Admin(int n, string b, string d, int s, double f, string da)
{
	train_num = n;
	boarding = b;
	destination = d;
	seats = s;
	fare = f;
	date = da;
}

Admin::Admin()
{}

Admin::~Admin()
{
}
