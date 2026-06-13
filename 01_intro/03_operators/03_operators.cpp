
#include <iostream>
#include <math.h>

//int main()
//{
//    // https://en.cppreference.com/cpp/language/operator_precedence
//    // Операторы
//    // унарные
//    // бинарные
//    // тернарный
//
//
//    //int a{};
//    //a = 4 + 2 * 3;
//
//    //int b{};
//    //b = 4 + 5 - 1;
//}



#pragma region Arithmetic
//int main()
//{
//	// unary			+ -
//	// binary			+ - / * %
//
//	//int a{ 5 };
//	//std::cout << +a;
//	//std::cout << -a;
//
//	//int a{ 5 + 3 - 2 };
//
//	//int a{ 2 };
//	//int b{ 5 };
//	//int c{ 1 };
//
//	//std::cout << -a + -b * +c;
//
//
//	// std::cout << 4 + 2.1;
//
//
//	std::cout << 7 / 4 << '\n';
//	std::cout << 7.0 / 4 << '\n';
//	std::cout << (float)7 / 4 << '\n';
//
//	std::cout << (12, 10, 13, 14);
//
//	return 0;
//}

#pragma endregion


#pragma region Increment/Decrement

//int main()
//{
//	// Prefix		++a		--a			<--- :-)
//	// Postfix		a++		a--			<--- :-|
//
//	//int a{ 5 };				// int a = 5;
//	//int b{ ++a };			// int b = ++a;
//
//	//std::cout << a << '\n';
//	//std::cout << b << '\n';
//
//
//	//int a{ 5 };				// int a = 5;
//	//int b{ a++ };			// int b = a++;
//
//	//std::cout << a << '\n';
//	//std::cout << b << '\n';
//
//
//	//int a{ 5 };
//	//std::cout << (++a) - (a++) << '\n';
//
//
//	int a{ 5 };
//	++a;
//	std::cout << a;
//
//	return 0;
//}

#pragma endregion


#pragma region Ternary, sizeof, comma

//int main()
//{
//	//double a{ 7.0 };
//	//std::cout << sizeof(a) << '\n';
//	//std::cout << sizeof(int) << '\n';
//
//
//	//int a{ 0 };
//	//int b{ 2 };
//	//std::cout << (++a, ++b);  // a == 1; b == 3; ===> 3
//
//
//	//int a{ 3 };
//	//int b{ 5 };
//	//int c{};
//	//// int c{ a > b ? 1 : 0 };
//	//c = a > b ? 100 : 200;			// ?:
//
//	return 0;
//}

#pragma endregion


#pragma region Comparison operators
// >	<	>=	<=	==	!=		===> bool

//int main()
//{
//	//int a{ 4 };
//	//int b{ 5 };
//	//std::cout << (a < b) << '\n';
//
//
//	double a{ 100 - 99.99 };
//	double b{ 10 - 9.99 };
//
//	std::cout << a << '\n';		// 0.010000000000000000006576
//	std::cout << b << '\n';		// 0.009999999999999999995425
//
//	std::cout << (a == b) << '\n';
//
//	// !!!!!
//	// fabs()		#include <cmath>
//	// !!!!!
//
//	return 0;
//}

#pragma endregion


#pragma region Logic operators
// !	&&		||				===> bool

// true && true			===> true
// true && false		===> false
// false && true		===> false
// false && false		===> false

// true || true			===> true
// true || false		===> true
// false || true		===> true
// false || false		===> false

//int main()
//{
//	//std::cout << !true;
//
//	//int a{ 5 };
//	//int b{ 7 };
//	//std::cout << (!((a == b) || (a != b)));
//
//	// !!!!
//	// Короткая форма (короткий цикл вычислений)!
//	// !!!!
//
//	bool result{};
//	int a{ 10 };
//	int b{ 20 };
//
//	result = ((a = 100) || (b = 100));
//	
//	return 0;
//}

#pragma endregion



#pragma region if/else

//int main()
//{
//	int amount{ 1000 };
//
//	int sum{};
//	std::cout << "Enter your sum: ";
//	std::cin >> sum;
//
//	//if (sum > amount)
//	//{
//	//	std::cout << "System error\n";
//	//}
//	//else if(sum == 200) {
//	//	amount = amount - sum;
//	//	std::cout << "This is action!!\n";
//	//}
//	//else
//	//{
//	//	amount = amount - sum;			// amount -= sum;
//	//	std::cout << "All OK\n";
//	//}
//
//
//	//if (sum > amount)
//	//{
//	//	std::cout << "System error\n";
//	//}
//	//
//	//if (sum == 200) {
//	//	amount = amount - sum;
//	//	std::cout << "This is action!!\n";
//	//}
//
//	//if (sum <= amount)
//	//{
//	//	amount = amount - sum;			// amount -= sum;
//	//	std::cout << "All OK\n";
//	//}
//
//
//	//if (sum <= amount)
//	//{
//	//	if (sum == 200)
//	//	{
//	//		amount = amount - sum;
//	//		std::cout << "This is action!!\n";
//	//	}
//	//	else
//	//	{
//	//		amount = amount - sum;			// amount -= sum;
//	//		std::cout << "All OK\n";
//	//	}
//	//}
//	//else
//	//{
//	//	std::cout << "ERROR\n";
//	//}
//
//	if (sum > amount) {
//		std::cout << "System error\n";
//	}
//
//	return 0;
//}


#pragma endregion


#pragma region Practice_1
// Написать программу, которая определяет окружность на плоскости (данные пользователя)
// Далее пользователь сообщает координаты точки
// Программа делает вывод о принадлежности точки окружности

//int main()
//{
//	// Определем окружность на плоскости
//	int x{};
//	int y{};
//	int radius{};
//
//	std::cout << "Enter center X coord: ";
//	std::cin >> x;
//
//	std::cout << "Enter center Y coord: ";
//	std::cin >> y;
//
//	std::cout << "Enter radius: ";
//	std::cin >> radius;
//
//	// Определяем пользовательскую точку
//	int pointX{};
//	int pointY{};
//
//	std::cout << "Enter POINT X coord: ";
//	std::cin >> pointX;
//
//	std::cout << "Enter POINT Y coord: ";
//	std::cin >> pointY;
//
//
//	int a = pointX - x;
//	int b = pointY - y;
//
//	double length{ sqrt(pow(a, 2) + pow(b, 2)) };
//
//
//	if (length <= radius)
//	{
//		std::cout << "The point is inside\n";
//	}
//	else
//	{
//		std::cout << "The point is outside\n";
//	}
//}

#pragma endregion


#pragma region Enum

//const int statusActive{ 0 };
//const int statusBlocked{ 1 };
//const int statusPending{ 2 };
//
//int currentStatus{ statusActive };

//enum Status
//{
//	Active = 0,
//	Blocked = 1,
//	Pending = 2,
//};
//enum RequestState
//{
//	Failed,
//	Blocked,
//};
//
//// Status a { Active }
//
////Status currentStatus{ Status::Blocked };
////// >>> EQUALS <<<
////int currentStatus{ 1 };
//
//int main()
//{
//	Status status{ Status::Pending };
//
//	//if (status == Status::Active)
//	//{
//
//	//}
//	//else if (status == Status::Blocked)
//	//{
//
//	//}
//	//else if (status == Status::Pending)
//	//{
//
//	//}
//
//
//	if (status == 0)
//	{
//
//	}
//	else if (status == 1)
//	{
//
//	}
//	else if (status == 2)
//	{
//
//	}
//}



//enum Status
//{
//	ACTIVE = 0,
//	BLOCKED = 1,
//	PENDING = 2,
//};


//enum Status
//{
//	ACTIVE = -4,
//	BLOCKED = 120,
//	PENDING = 0,
//};


//enum Status
//{
//	ACTIVE = 2,
//	BLOCKED = 4,
//	PENDING = 8,
//};
//
//int main()
//{
//	//Status a = Status::BLOCKED;
//
//	//std::cout << a << '\n';
//
//	int value = 4;
//	Status a{ (Status)value };
//	
//
//
//	return 0;
//}



#pragma endregion



#pragma region switch

enum Status
{
	RUNNING,
	ACTIVE,
	BLOCKED,
	PENDING,
};

int main()
{
	Status status{ Status::ACTIVE };

	switch (status)
	{
	case Status::ACTIVE:
	case Status::RUNNING:
		int x{ 15 };						// :-(((
		std::cout << "User is active\n";
		break;
	case Status::BLOCKED:
		std::cout << "User is blocked\n";
		std::cout << x;						// :-(((
		break;
	case Status::PENDING:
		std::cout << "User is pending\n";
		break;
	default:
		std::cout << "Status is nvaliable\n";
	}

	return 0;
}

#pragma endregion
