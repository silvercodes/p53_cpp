#include <iostream>

#pragma region WHILE

//int main()
//{
//	//int count{ 0 };
//
//	//while (count < 10)
//	//{
//	//	std::cout << count << ' ';
//
//	//	++count;
//	//}
//
//
//
//	//while (1)			// :-(((
//	//{
//
//	//}
//
//	//while (true)		// :-)))
//	//{
//
//	//}
//
//
//
//
//	// >>> !!! <<<
//	//unsigned int count = 10;
//
//	//while (count >= 0)
//	//{
//	//	if (count >= 0)
//	//		std::cout << "Vasia" << '\n';
//	//	else
//	//		std::cout << count << ' ';
//
//	//	--count;
//	//}
//
//	//unsigned int val{ 0 };
//
//	//val -= 1;		// <=> val = val - 1
//	//std::cout << val;
//
//
//
//	//int count{ 1 };
//	//int result{ 0 };
//
//	//while (count <= 5)
//	//{
//	//	int val{ 0 };
//
//	//	std::cout << "Enter integer: " << count << ':';
//	//	std::cin >> val;
//
//	//	result += val;
//
//	//	++count;
//	//}
//
//	//std::cout << "The sum of all values: " << result << '\n';
//
//
//	
//	//int count{ 1 };
//	//char ch{ '*' };
//
//	//// Количество итераций цикла
//	//int iterationCount{ 60 };
//
//	//int rowLength{ 20 };
//
//	//while (count <= iterationCount)
//	//{
//	//	std::cout << ch;
//
//	//	if (count % rowLength == 0)
//	//		std::cout << '\n';
//
//	//	++count;
//	//}
//
//
//
//
//
////	int outer{ 1 };
////	while (outer <= 5)
////	{
////		int inner{ 1 };
////		while (inner <= outer)
////		{
////			std::cout << '*' << ' ';
////			++inner;
////		}
////		std::cout << '\n';
////
////		++outer;
////	}
////
////
////
////	return 0;
//}


#pragma endregion

#pragma region DO/WHILE

//int main()
//{
//	int userChoice{ 0 };
//	bool isValid{ false };
//
//	do
//	{
//		std::cout << "Please make your selection: \n";
//		std::cout << "1. One\n";
//		std::cout << "2. Two\n";
//		std::cout << "3. Three\n";
//
//		std::cin >> userChoice;
//
//		isValid = userChoice >= 1 && userChoice <= 3;
//
//		system("cls");
//
//		if (! isValid)
//			std::cout << "Invalid selection. Try again...\n";
//
//	} while (! isValid);
//
//	std::cout << "You selected option " << userChoice << '\n';
//
//	return 0;
//}

#pragma endregion

#pragma region Practice_1
// Найти сумму цифр числа

//int main()
//{
//	int num{ 0 };
//	int result{ 0 }; // Сумма цифр числа num
//
//	std::cout << "Enter your number: ";
//	std::cin >> num;
//
//	int temp{ num };
//	while (temp != 0)
//	{
//		result += temp % 10;	// num == 123 --> 123 % 10 => 3 --> num == 123;
//		temp /= 10;				// num == 123 --> 123 / 10 => 12 --> num == 12
//	}
//
//	std::cout << "Sum of digits of " << num << " is " << result << '\n';
//
//	return 0;
//}

#pragma endregion

#pragma region Practice_2
// Пользователь должен ввести положительное число

#pragma endregion

#pragma region FOR

//int main()
//{
//	//int c{};
//	//int val{};
//
//	//for (int a{ 0 }, int b{ 10 }, c = 100; (a - b / c) > 50; a += 34, val = 123, c = b - a)
//	//{
//
//	//}
//
//
//
//
//	//for (int i{}; i < 10; ++i)
//	//{
//	//	std::cout << i << ' ';
//	//}
//
//
//	//for (int i{}; i < 10; )
//	//{
//	//	std::cout << i << ' ';
//	//	++i;
//	//}
//
//
//	//for (int i{}; ; )
//	//{
//	//	std::cout << i << ' ';
//	//	++i;
//
//	//	if (i == 10)
//	//		break;
//	//}
//
//
//	//int i{};
//
//	//for ( ; ; )
//	//{
//	//	std::cout << i << ' ';
//	//	++i;
//
//	//	if (i == 10)
//	//		break;
//	//}
//
//
//
//	//int base{};
//	//int power{};
//	//std::cout << "Enter the base: ";
//	//std::cin >> base;
//	//std::cout << "Enter the power: ";
//	//std::cin >> power;
//
//	//int result{ 1 };
//
//	//for (int i{}; i < power; ++i)
//	//{
//	//	result *= base;
//	//}
//
//	//std::cout << "RESULT: " << result << '\n';
//
//
//
//
//	//for (int i{ 10 }; i >= 0; --i)
//	//{
//	//	std::cout << i << ' ';
//	//}
//
//
//
//
//	//for (int i{}, j{ 15 }; i < 10 && j > 0; ++i, j -= 2)
//	//	std::cout << i << ' ' << j << '\n';
//
//
//
//	//for (char ch{ 'a' }; ch <= 'f'; ++ch)
//	//{
//	//	std::cout << ch;
//
//	//	for (int i{}; i < 3; ++i)
//	//		std::cout << i;
//
//	//	std::cout << '\n';
//	//}
//
//
//
//
//	//for (char ch{ 'a' }; ch <= 'f'; ++ch)
//	//{
//	//	std::cout << ch;
//
//	//	for (char i{ 'a' }; i < ch; ++i)
//	//		std::cout << i;
//
//	//	std::cout << '\n';
//	//}
//
//
//	//TASK
//	// Вывести числа из диапазона, кратные n
//
//	//int from{};
//	//int to{ 10 };
//	//int factor{ 3 };
//
//	//for (int i{ from }; i < to; ++i)
//	//{
//	//	if (i % factor == 0)
//	//		std::cout << i << ' ';
//	//}
//
//
//
//
//	//for (unsigned int i{ 0 }; i >= 0; --i)
//	//	std::cout << i << ' ';
//
//	//return 0;
//}

#pragma endregion

#pragma region random

//int main()
//{
//	//const int count{ 100 };
//	////const unsigned int seed{ 124 };
//	//const unsigned int seed{ (unsigned int)time(0) };			// timestamp
//	//const unsigned int max{ 10 };
//
//	//unsigned int input{ seed };
//	//unsigned int result{};
//
//
//	//for (int i{}; i < 100; ++i)
//	//{
//	//	result = (input * 213324 / 87658 + 7673 * 234) * 34;
//
//	//	std::cout << result % max << ' ';
//
//	//	input = result;
// //	}
//
//
//
//	//srand(1000);
//	//
//	//for (int i{ 1 }; i <= 100; ++i)
//	//{
//	//	std::cout << rand() << '\t';
//
//	//	if (i % 5 == 0)
//	//		std::cout << '\n';
//	//}
//
//
//	//srand(time(0));
//	//rand();
//
//	//std::cout << rand();
//
//	return 0;
//}



// ==== MERSSEN

//#include <random>
//
//int main()
//{
//	std::random_device rd;
//	// std::mt19937 mersenne(rd());
//	std::mt19937_64 mersenne(rd());
//
//	for (int i{ 0 }; i < 100; ++i)
//	{
//		std::cout << mersenne() << ' ';
//
//		if (i % 5 == 0)
//			std::cout << '\n';
//	}
//
//	return 0;
//}




int main()
{
	int min{ 12 };
	int max{ 19 };

	srand(time(0));

	for (int i{ 1 }; i <= 100; ++i)
	{
		std::cout << rand() % (max - min + 1) + min << '\t';

		if (i % 5 == 0)
			std::cout << '\n';
	}
	return 0;
}

#pragma endregion







