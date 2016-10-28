//Классы - Тест, Экзамен, Выпускной экзамен, Испытание, Вопрос;
#include "stdafx.h"

using namespace std;

int FinalExam::countofobjects = 0;
int main()
{
	setlocale(LC_ALL, "rus");
	Exam co;
	Exam::Retake cu(15);
	co.setquestion("сколько яблок на дереве моём?");
	co.getquestion();
	cu.getQestion(co);
	int a = co.getattempNumber(cu);
	cout << a << endl;
	Prepod obj;
	obj.setAge(3);
	obj.getAge();
	Test h;
	h.getevaluationTest();
	FinalExam t;
	t.setrekomend("Molodets");
	t.getrekomend();
	t.setfinalevaluation(4);
	Incpektor q;
	q.IKnowAllAboutYou(t);
	Curator i;
	i.ICanmodifyou(t);
	t.getrekomend();
	FinalExam t1; FinalExam t2; FinalExam t3;
	cout << FinalExam::getcountofobjects() << endl;
	Printer printer;
	Abstract *ptr;
	Exam q1;
	FinalExam q2;
	Question q3;
	Test q4;
	Try q5;
	ptr = &q1;
	ptr->toConsole();
	printer.IamPrinting(*ptr);
	ptr = &q2;
	ptr->toConsole();
	printer.IamPrinting(*ptr);
	ptr = &q3;
	ptr->toConsole();
	printer.IamPrinting(*ptr);
	ptr = &q4;
	ptr->toConsole();
	printer.IamPrinting(*ptr);
	ptr = &q5;
	ptr->toConsole();
	printer.IamPrinting(*ptr);





	system("pause");
	return 0;
}









/*Question a;
a.setquestion("Когда родился А.С. Пушкин");
a.getquestion();
cout << endl;
Try b;
b.setquestion("Кто открыл Америку?");
b.getquestion();
b.setkolquestion(10);
b.getkolquestion();
cout << endl;
Test c;
c.setquestion("Сколько занимает int?");
c.getquestion();
c.setevaluationTest(10);
c.getevaluationTest();
cout << endl;
Exam d;
d.setevaluation(10);
d.getevaluation();
d.setquestion("Кто написал Преступление и наказание?");
d.getquestion();
d.setevaluation(2);
d.getevaluation();
cout << endl;
FinalExam e;
e.setevaluation(2);
e.getevaluation();
e.setfinalevaluation(6);
e.getfinalevaluation();
e.setrekomend("faded");
e.getrekomend();
cout << endl;*/