#include "stdafx.h"
#include "Try.h"
#include <iostream>
using namespace std;
Try::Try(void)
{
	cout << "���������� ����������� ���������" << endl;
}
void Try::setkolquestion(int kolquestion)
{
	this->kolquestion = kolquestion;
}
void Try::getkolquestion()
{
	cout << "���������� �������� � ���������: " << this->kolquestion << endl;
}
Try::~Try(void)
{
	cout << "���������� ���������� ����������" << endl;
}