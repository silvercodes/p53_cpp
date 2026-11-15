#include <iostream>


//void renderValue(int val)
//{
//    int a{ 5 };
//
//    std::cout << a << ' ' << val << '\n';
//}
//
//int main()
//{
//    renderValue(34);
//    renderValue(100);
//    renderValue(12365);
//
//    return 0;
//}



//// ------- Передача параметра по значению -------
//
//void renderValue(int val)
//{
//    int a{ 5 };
//
//    std::cout << a << ' ' << val << '\n';
//}
//
//// ------- Передача параметра по адресу(указателю) -------
//void testFunction(int* val)
//{
//    int b{ 10 };
//
//    std::cout << b << ' ' << *val << '\n';
//}
//
//// ------- Передача параметра по ссылке(указателю) -------
//void testFunction2(int& val)
//{
//    int b{ 10 };
//
//    std::cout << b << ' ' << val << '\n';
//}
//
//int main()
//{
//    int y{ 34 };
//    renderValue(y);
//
//
//    /*int x{ 45 };
//    int* val{ &x };*/
//
//    //int x{ 45 };
//    //testFunction(&x);
//
//    int x{ 45 };
//    testFunction2(x);
//
//    
//
//	return 0;
//}




//int function()
//{
//	return 34;
//}
//
//int* function2()
//{
//	int a{ 45 };
//
//	return &a;
//}
//
//
//int main()
//{
//	// int res = function() + 1;
//
//	int* ptr{ function2() };		// ОСТОРОЖНО! Висячий указатель!
//
//	std::cout << *ptr << '\n';
//
//	return 0;
//}




// -------------------
//int randomInt(int min, int max)
//{
//	return rand() % (max - min + 1) + min;
//}
//
//bool assertPtrValid(const int* ptr)
//{
//	return ptr != nullptr;
//}
//
//void fillArray(int* arr, int count, int min, int max)
//{
//	if (!assertPtrValid(arr))
//	{
//		return;				// здесь нужно throw exception
//	}
//
//	for (int i{}; i < count; ++i)
//	{
//		arr[i] = randomInt(min, max);
//	}
//}
//
//void renderArray(const int* arr, int count)
//{
//	if (!assertPtrValid(arr))
//	{
//		return;				// здесь нужно throw exception
//	}
//
//	for (int i{}; i < count; ++i)
//	{
//		std::cout << arr[i] << ' ';
//	}
//}
//
//
//int main()
//{
//	srand(time(0));
//
//	int count{ 10 };
//	int* arr = new int[count];
//
//	fillArray(arr, count, 0, 9);
//	renderArray(arr, count);
//}



// ---------------------

//int randomInt(int min, int max)
//{
//	return rand() % (max - min + 1) + min;
//}
//
//void fillArray(int& arr, int count, int min, int max)
//{
//	for (int i{}; i < count; ++i)
//	{
//		(&arr)[i] = randomInt(min, max);
//	}
//}
//
//void renderArray(const int& arr, int count)
//{
//	for (int i{}; i < count; ++i)
//	{
//		std::cout << *(&arr + i) << ' ';
//	}
//}
//
//
//int main()
//{
//	srand(time(0));
//
//	int count{ 10 };
//	int* arr = new int[count];
//
//	fillArray(*arr, count, 0, 9);
//	renderArray(*arr, count);
//}

// ------------------------

//int add(int a = 1, int b = 100)
//{
//	std::cout << a << '/n';
//	std::cout << b << '/n';
//}
//
//int mul(int a = 1, int b)		// ERROR
//{
//
//}
//
//int main()
//{
//	std::cout << add(12, 23);
//	std::cout << add(12);
//	std::cout << add();
//}


// ---------------------- function pointers -------------

//int add(int a = 1, int b = 100)
//{
//	std::cout << a << '/n';
//	std::cout << b << '/n';
//}
//
//int main()
//{
//	std::cout << add(34, 45); // GOTO address
//
//	
//}


//int add(int a, int b)
//{
//	std::cout << a << '\n';
//	std::cout << b << '\n';
//
//	return a + b;
//}
//
//int main()
//{
//
//	int* ptr{ nullptr };
//
//
//	int (*fPtr)(int, int) { nullptr };
//	fPtr = add;						// fPtr = &add
//
//	std::cout << fPtr(3, 4);		// (*fPtr)(3, 4);
//
//	//return 0;
//}



//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int execute(int a, int b, int (*op) (int, int))
//{
//	return op(a, b);
//}
//
//int main()
//{
//	std::cout << execute(2, 3, add);
//	std::cout << execute(2, 3, sub);
//
//	return 0;
//}



//typedef bool (*validator)(int, int);
//
//using validator2 = bool(*)(int, int);
//
//
//int main()
//{
//	validator v{ nullptr };			// bool (*v)(int, int) {nullptr}
//
//	validator2 v2{ nullptr };		// bool (*v)(int, int) {nullptr}
//
//	return 0;
//}





//using operation = int(*)(int, int);
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//
//int main()
//{
//	const int count{ 3 };
//
//	operation* arr = new operation[count]{ nullptr };
//
//	arr[0] = add;
//	arr[1] = sub;
//	arr[2] = mul;
//
//	for (int i{}; i < count; ++i)
//	{
//		int result = arr[i](3, 4);
//		std::cout << result << '\n';
//	}
//}







//int aggregate(int* arr, int count)
//{
//	int result{};
//
//	for (int i{}; i < count; ++i)
//	{
//		result += arr[i];
//	}
//
//	return result;
//}


//int aggregate(int* arr, int count)
//{
//	int result{};
//
//	for (int i{}; i < count; ++i)
//	{
//		if (arr[i] > 0)
//			result += arr[i];
//	}
//
//	return result;
//}


using predicate = bool (*)(int);

bool isPositive(int val)
{
	return val > 0;
}

bool isOdd(int val)
{
	return val % 2 == 0;
}

bool isNegative(int val)
{
	return val <= 0;
}


int aggregate(int* arr, int count, predicate pr)
{
	int result{};

	for (int i{}; i < count; ++i)
	{
		if (pr(arr[i]))
			result += arr[i];
	}

	return result;
}


int main()
{
	int* arr = new int[5] {2, 4, 7, -1, 2};

	std::cout << aggregate(arr, 5, isPositive) << '\n';
	std::cout << aggregate(arr, 5, isOdd) << '\n';
	std::cout << aggregate(arr, 5, isNegative) << '\n';
}


