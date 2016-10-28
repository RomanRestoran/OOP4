#pragma once
#include <iostream>
#include "Abstract.h"
using namespace std;
class Question : public Abstract
{
	char *question;
public:
	Question(void);
	Question(int x);
	void setquestion(char *question);
	void getquestion();
	void toConsole()
	{
		cout << typeid(this).name() << "vopros" << endl;

	};
	~Question(void);
};