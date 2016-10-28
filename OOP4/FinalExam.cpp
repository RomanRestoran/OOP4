#include "stdafx.h"
#include "FinalExam.h"
#include <iostream>
using namespace std;
FinalExam::FinalExam(void)
{
	cout << "вызывается конструктор выпускного экзамена" << endl;
	countofobjects++;
}
void FinalExam::setrekomend(char *rekomend)
{
	this->rekomend = rekomend;
}
void FinalExam::setfinalevaluation(int x)
{
	this->finalevaluation = x;
}
void FinalExam::getfinalevaluation()
{
	cout << "Выпусная оценка: " << this->finalevaluation << endl;
}
void FinalExam::getrekomend()
{
	cout << "Рекомендация студенту: " << this->rekomend << endl;
}
FinalExam::~FinalExam(void)
{
	cout << "вызывается деструктор выпусного экзамена" << endl;
	countofobjects--;
}

void Curator::ICanmodifyou(FinalExam& a)
{
	a.finalevaluation = 0;                                   //5
	a.rekomend = "None";
};
