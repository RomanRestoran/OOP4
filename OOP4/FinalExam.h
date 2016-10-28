//Классы - Тест, Экзамен, Выпускной экзамен, Испытание, Вопрос;
#pragma once
#include "exam.h"
using namespace std;
class FinalExam;
class Curator
{
public:
	void ICanmodifyou(FinalExam& a);
};
class Incpektor;
class FinalExam :public Exam
{
	int finalevaluation;
	char *rekomend;
	friend void Curator::ICanmodifyou(FinalExam& a);                  //5
	friend Incpektor;
	static int countofobjects;
public:
	FinalExam(void);
	static int getcountofobjects()
	{
		return countofobjects;
	};
	void setfinalevaluation(int x);
	void getfinalevaluation();
	void setrekomend(char *rekomend);
	void getrekomend();
	void toConsole()
	{
		cout << typeid(this).name() << this->finalevaluation << endl;
	};
	~FinalExam(void);
};

class Incpektor
{

public:
	void IKnowAllAboutYou(FinalExam& g)
	{
		g.getrekomend();
		g.getfinalevaluation();
	}
};
