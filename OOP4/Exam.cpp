#include "stdafx.h"
#include "Exam.h"
#include <iostream>
using namespace std;
Exam::Exam(void)
{
	cout << "���������� ����������� ��������" << endl;
}
void Exam::setquestion(char *question1)
{
	this->question1 = question1;
}
void Exam::setevaluation(int x)
{
	this->evaluation1 = x;
}
void Exam::getevaluation()
{
	cout << "������ �� �������� : " << this->evaluation1 << endl;
}
void Exam::getquestion()
{
	cout << "������ �� ��������: " << this->question1 << endl;
}
Exam::~Exam(void)
{
	cout << "���������� ���������� ��������" << endl;
}
Exam::Retake::Retake(int k)
{
	this->attemptNumber = k;
}

void Exam::Retake::setAttemptNumber(int k)
{
	this->attemptNumber = k;
}

int Exam::Retake::getAttemptNumber()
{
	return attemptNumber;
}
void Exam::Retake::getQestion(Exam& a)
{
	a.getquestion();
}

int Exam::getattempNumber(Retake& b)
{
	return b.getAttemptNumber();
}