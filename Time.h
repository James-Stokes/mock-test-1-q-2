#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int, int);
	void get(int* ,int*);
	void set(int, int);
	friend ostream& operator<<(ostream&, Time&);
	friend Time operator++(Time&);
	~Time();
};

