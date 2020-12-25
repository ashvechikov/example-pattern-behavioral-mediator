#include<iostream>
#include "Classroom.h"
#include "Trainee.h"
using namespace std;


int main()
{
	// ������� ������ �������� ��������
	Classroom *classroom = new Classroom();

	// ������� ��������������� ������
	Trainee* piter = new MathClass("Piter");
	Trainee* tim = new MathClass("Tim");
	Trainee* brad = new MathClass("Brad");
	Trainee* joana = new MathClass("Joana");

	// ������������ �� � ������
	classroom->Register(piter);
	classroom->Register(tim);
	classroom->Register(brad);
	classroom->Register(joana);

	// �������� ���������
	piter->Send("Brad", "3*3+7");
	joana->Send("Tim", "21-78*3");
	
	// �������
	delete piter;
	delete tim;
	delete brad;
	delete joana;

	delete classroom;

	return 0;
}