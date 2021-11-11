﻿//IntroductionToOOP
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

class Point	//Создавая структуру или класс мы создаем новый тип данных
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	//					Constructors:
	/*Point()
	{
		x = y = double();	//В обе координаты ложим значение по умолчанию для double
		cout << "DefaultConstructor:\t" << this << endl;
	}*/
	/*Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "SingleArgumentConstructor:" << this << endl;
	}*/
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Construtor:\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyConstructor:" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t" << this << endl;
	}

	//					Operators:
	Point operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssignment:\t" << this << endl;
		return *this;
	}

	//					Methods:
	void print()const
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

//#define STRUCT_POINT
//#define CONSTRUCTORS_CHECK

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	//type name;	//синтаксис объявления переменной
	int a;	//Объявление переменной 'a' типа 'int'
	Point A;//Объявление переменной 'A' типа 'Point'
			//Создание объекта 'A' структуры 'Point'
			//Объявление объекта 'A' структуры 'Point'
			//Создание экземпляра 'A' структуры 'Point'
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;	//Создаем (объявляем) Указатель на Point
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

#ifdef CONSTRUCTORS_CHECK
	cout << int() << endl;	//Значение по умолчанию для int.
	Point A;		//Default constructor
	/*A.set_x(2);
	A.set_y(3);*/
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B = 5;	//Single-argument constructor
	B.print();

	Point C(7);		//Single-argument constructor
	C.print();

	Point D(4, 5);
	D.print();

	Point E = D;	//Copy constructor
	E.print();

	Point F;	//Default constructor
	F = E;		//Copy assignment
	F.print();
#endif // CONSTRUCTORS_CHECK

	int a, b, c;
	a = b = c = 0;

	Point A, B, C;
	cout << "\n---------------------------------\n";
	A = B = C = Point(2, 3);
	cout << "\n---------------------------------\n";
}

/*
------------------------------------------------------------------
.  - Оператор пямого доступа	 (Point operator)
-> - Оператор косвенного доступа (Arrow operator)
------------------------------------------------------------------
*/

/*
------------------------------------------------------------------
1. Инкапсуляция - Encapsulation;
	Модификаторы доступа:
		private:	закрытые поля, доступны только внутри класса/структуры
		public:		открытые поля, доступны из любого места программы
		protected:	защищенные поля, доступны изнутри класса, и изнутри дочерних классов.
					Этот модификатор доступа используется только при наследовании.
	get/set-методы:
	get(взять, получить) - открывают доступ на чтение
	set(задать, установить) - открывают доступ к закрытым переменным на запись.
	set-методы так же обеспечивают фильтрацию данных
2. Наследование - Inheritance;
3. Полиморфизм  - Polymorphism;
------------------------------------------------------------------
*/

/*
------------------------------------------------------------------
1. Constructor - это метод, который создает объект;
	-с параметрами;
	-без параметров;
	-конструктор по умолчанию - это конструктор, который МОЖЕТ БЫТЬ ВЫЗВАН без параметров;
	-конструктор копирования  - это конструктор, который копирует объект;
	-конструктор переноса;
2. ~Destructor  - это метод, который уничтожает объект по завершении его времени жизни;
   ~ - Tilda
3. AssignmentOperator;
------------------------------------------------------------------
*/