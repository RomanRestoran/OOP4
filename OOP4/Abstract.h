#pragma once

using namespace std;
class Abstract                        //2
{
public:
	virtual void toConsole() = 0;


};

class Printer
{
public:
	void IamPrinting(Abstract& obj)
	{
		obj.toConsole();
	};
};