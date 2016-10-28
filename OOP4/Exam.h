#pragma once
//Классы - Тест, Экзамен, Выпускной экзамен, Испытание, Вопрос;
#include "test.h"
using namespace std;
class Exam :public Test
{
	char *question1;
	int evaluation1;
public:
	class Retake                 //1
	{
	private: int attemptNumber;
	public:

		Retake(int k);
		void setAttemptNumber(int);
		int getAttemptNumber();
		void getQestion(Exam&);

	};
	Exam(void);
	void setquestion(char *question1);
	void getquestion();
	void setevaluation(int x);
	void getevaluation();
	int getattempNumber(Retake&);
	void toConsole()
	{
		cout << typeid(this).name() << this->evaluation1 << endl;
	};
	~Exam(void);
};