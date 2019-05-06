#pragma once
#include <iostream>

class Time
{
private:
	int hour;
	int minute;
	int second;

public:

	//´Constructor
	Time();
	Time(int h, int m, int s);

	// Getter methods
	int getHour();
	int getMinute();
	int getSecond();

	// Setter methods
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	void setTime(int h, int m, int s);

	// Functional methods
	void print();
	bool equals(Time otherTime);
	void add(Time otherTime);
	void add(int h, int m, int s);
	void formatTime();

	// Operator overloads
	void operator=(Time otherTime);
	bool operator==(Time othertime);
	Time operator+(Time otherTime);
	Time operator-(Time otherTime);

	// Deconstructor
	~Time();
};

