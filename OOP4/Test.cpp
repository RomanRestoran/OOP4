#include "stdafx.h"
#include "test.h"
#include <iostream>
using namespace std;

void Test::setevaluationTest(int x)
{
	this->evaluationTest = x;
	Question(evaluationTest);
}
int Test::getevaluationTest() const
{
	//this->evaluationTest = 7;                           константные метод не может изменять поля класса, а только возвращать значения
	return  this->evaluationTest;
}
Test::~Test(void)
{
	cout << "вызывается деструктор теста" << endl;
}