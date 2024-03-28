#pragma once
#include <iostream>
using namespace std;

class Object
{
private:
	static unsigned int count;
public:
	static unsigned int Count()
	{
		return count;
	}
	Object()
	{
		count++;
	}
	~Object()
	{
		count--;
	}
};