//������ - ����, �������, ��������� �������, ���������, ������;
#include "stdafx.h"
#include "Question.h"
#include <iostream>
using namespace std;
Question::Question(void)
{
	cout << "���������� ����������� �������" << endl;
}
void Question::setquestion(char *question)
{
	this->question = question;
}
void Question::getquestion()
{
	cout << "������ : " << this->question << endl;
}
Question::~Question(void)
{
	cout << "���������� ���������� �������" << endl;
}
Question::Question(int x)
{
	cout << x;
}
