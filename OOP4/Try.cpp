#include "stdafx.h"
#include "Try.h"
#include <iostream>
using namespace std;
Try::Try(void)
{
	cout << "вызываетс€ конструктор испытани€" << endl;
}
void Try::setkolquestion(int kolquestion)
{
	this->kolquestion = kolquestion;
}
void Try::getkolquestion()
{
	cout << " оличество вопросов в испытании: " << this->kolquestion << endl;
}
Try::~Try(void)
{
	cout << "вызываетс€ деструктор исыпытани€" << endl;
}