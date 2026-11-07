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

int randomInt(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

void fillArray(int& arr, int count, int min, int max)
{
	for (int i{}; i < count; ++i)
	{
		(&arr)[i] = randomInt(min, max);
	}
}

void renderArray(const int& arr, int count)
{
	for (int i{}; i < count; ++i)
	{
		std::cout << *(&arr + i) << ' ';
	}
}


int main()
{
	srand(time(0));

	int count{ 10 };
	int* arr = new int[count];

	fillArray(*arr, count, 0, 9);
	renderArray(*arr, count);
}