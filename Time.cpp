#include "Time.h"

using namespace std;

Time::Time()
{
}

Time::Time(int hours, int minutes) {
	this->hours = hours;
	this->minutes = minutes;
}

void Time::get(int* pH, int* pM) {
	*pH = hours;
	*pM = minutes;
}

void Time::set(int hours, int minutes) {
	this->hours = hours;
	this->minutes = minutes;
}

ostream& operator<<(ostream& os, Time & time)
{
	os << time.hours << ":" << time.minutes;
	return os;
}

Time operator++(Time & oldTime)
{
	Time time = oldTime;
	int* pH;
	int* pM;
	int hours;
	int mins;
	pH = &hours;
	pM = &mins;
	oldTime.get(pH, pM);
	oldTime.set(hours, mins++);
	return time;
}

Time::~Time()
{
}
