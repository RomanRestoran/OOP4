//Классы - Тест, Экзамен, Выпускной экзамен, Испытание, Вопрос;
#include "stdafx.h"
#include "Question.h"
#include <iostream>
using namespace std;
Question::Question(void)
{
	cout << "вызывается конструктор вопроса" << endl;
}
void Question::setquestion(char *question)
{
	this->question = question;
}
void Question::getquestion()
{
	cout << "вопрос : " << this->question << endl;
}
Question::~Question(void)
{
	cout << "вызывается деструктор вопроса" << endl;
}
Question::Question(int x)
{
	cout << x;
}
