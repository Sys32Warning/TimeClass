#include "Time.h"

using namespace std;

// Constructor methods
Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

// Getter methods
int Time::getHour() { return hour; }
int Time::getMinute() { return minute; }
int Time::getSecond() { return second; }

// Setter methods
void Time::setHour(int h) { hour = h; }
void Time::setMinute(int m) { minute = m; }
void Time::setSecond(int s) { second = s; }

void Time::setTime(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

// Print method
void Time::print()
{
	cout << hour << ":" << minute << ":" << second;
}

// Equals method
bool Time::equals(Time otherTime)
{
	if (hour == otherTime.hour &&
		minute == otherTime.minute &&
		second == otherTime.second)
		return true;
	else
		return false;
}

// Adding methods
void Time::add(Time otherTime)
{
	hour += otherTime.getHour();
	minute += otherTime.getMinute();
	second += otherTime.getSecond();
	formatTime();
}

void Time::add(int h, int m, int s)
{
	hour += h;
	minute += m;
	second += s;
	formatTime();
}


// Operator overloads
void Time::operator=(Time otherTime)
{
	hour = otherTime.getHour();
	minute = otherTime.getMinute();
	second = otherTime.getSecond();
}

bool Time::operator==(Time otherTime)
{
	if (hour == otherTime.hour &&
		minute == otherTime.minute &&
		second == otherTime.second)
		return true;
	else
		return false;
}

Time Time::operator+(Time otherTime)
{
	Time newTime;
	newTime.setHour(hour + otherTime.getHour());
	newTime.setMinute(minute + otherTime.getMinute());
	newTime.setSecond(second + otherTime.getSecond());
	newTime.formatTime();

	return newTime;
}

Time Time::operator-(Time otherTime)
{
	Time newTime;
	newTime.setHour(hour - otherTime.getHour());
	newTime.setMinute(minute - otherTime.getMinute());
	newTime.setSecond(second - otherTime.getSecond());
	newTime.formatTime();

	return newTime;
}

// Functional methods
void Time::formatTime()
{
	do
	{
		if (second >= 60)
		{
			second -= 60;
			minute++;
		}

		if (minute >= 60)
		{
			minute -= 60;
			hour++;
		}

		if (hour >= 24)
		{
			hour -= 24;
		}
	} while ((second >= 60) || (minute >= 60) || (hour >= 24));

	do
	{
		if (second < 0)
		{
			second += 60;
			minute--;
		}
		
		if (minute < 0)
		{
			minute += 60;
			hour--;
		}

		if (hour < 0)
		{
			hour += 24;
		}

	} while ((second < 0) || (minute < 0) || (hour < 0));
}

// Deconstructor 
Time::~Time() {}