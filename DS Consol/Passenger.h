#pragma once
#include<string>
#include<iostream>
using namespace std;
class Passenger
{
public:
	string email;
	string pass;
	string name;
	string boarding_point;
	string destination_point;
	string Date;
	int Tnum;

	Passenger(string e, string p, string n);
	void Passenger22(string e, string p, string n,string b, string d, string D,int t);
	Passenger();
	~Passenger();
};

