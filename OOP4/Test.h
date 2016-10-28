// Классы - Тест, Экзамен, Выпускной экзамен, Испытание, Вопрос;
#pragma once
#include "Question.h"
using namespace std;
class Test :
	public Question
{
private:
	const int a = 5;            //5
	int evaluationTest;
public:
	Test()
	{
		this->evaluationTest = a;
	}
	void setevaluationTest(int x);
	int getevaluationTest() const;

	void toConsole()
	{
		cout << typeid(this).name() << this->evaluationTest << endl;
	};
	~Test(void);
};