//Классы - Тест, Экзамен, Выпускной экзамен, Испытание, Вопрос;
#pragma once
#include "Question.h"
using namespace std;
class Try :
	public Question
{
private:
	int kolquestion;
public:
	Try(void);
	void setkolquestion(int kolquestion);
	void getkolquestion();
	void toConsole()
	{
		cout << typeid(this).name() << this->kolquestion << endl;
	};
	~Try(void);
};

class Prepod : protected Try        //3
{
protected: char *Prepodname;
		   void setPrepodname(char *pr)
		   {
			   this->Prepodname = pr;
		   }
		   void getPrepodname()
		   {
			   cout << "Имя препода-" << Prepodname;
		   }
public:
	int age;

	void setAge(int age)
	{
		this->age = age;
	}
	void getAge()
	{
		cout << "Age:" << this->age;
	}
};

class Room : public Prepod
{
public:
	int key1;
};