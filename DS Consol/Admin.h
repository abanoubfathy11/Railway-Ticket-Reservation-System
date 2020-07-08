#pragma once
#include<string>
#include<iostream>
using namespace std;
class Admin
{
public:
	int train_num;
	string boarding;
	string destination;
	int seats;
	
	double fare;
	string date;
	Admin(int n, string b, string d, int s, double f, string da);
	
	Admin();
	~Admin();
};

