#include <iostream>

//int main()
//{
//    /*int a{ 12 };
//    int b{ 34 };
//    std::cout << &a << '\n';
//
//    int* ptr{ &a };
//    std::cout << ptr << '\n';
//    ptr = &b;
//    std::cout << ptr << '\n';
//
//    std::cout << &ptr << '\n';
//    int** vasia{ &ptr };*/
//
//
//    // ---------------
//
//    /*int a{ 5 };
//    int b{ 7 };
//
//    std::cout << "&a = " << &a << '\n';
//    std::cout << "&b = " << &b << '\n';
//
//    int* ptr1{ &a };
//    int* ptr2{ &b };
//
//    std::cout << "ptr1 = " << ptr1 << '\n';
//    std::cout << "ptr2 = " << ptr2 << '\n';
//
//    std::cout << "*ptr1 = " << *ptr1 << '\n';
//    std::cout << "*ptr2 = " << *ptr2 << '\n';
//
//    std::cout << "a + b = " << a + b << '\n';
//    std::cout << "*ptr1 + *ptr2 = " << *ptr1 + *ptr2 << '\n';
//
//    *ptr1 = 15;
//    std::cout << "*ptr1 + *ptr2 = " << *ptr1 + *ptr2 << '\n';
//
//    int c{ *ptr2 };
//    std::cout << "c = " << c << '\n';*/
//
//
//    // ---------------
//
//    /*int* p;
//    std::cout << p << '\n';*/
//
//
//    // int* p{};            // :-)
//    //int* p{ nullptr };      // :-)))
//
//    //std::cout << p << '\n';
//
//    //int* ptr{ nullptr };
//    //std::cout << *ptr << '\n';
//}





//int main()
//{
//	srand(time(0));
//
//	// array
//
//	//int a{ 4 };
//	//int* b{ nullptr };
//	//int c[4]{ 13, 14, 15, 16 };
//
//	//std::cout << c << '\n';
//	//std::cout << *c << '\n';
//
//	//int* d{ c };
//	//std::cout << d << '\n';
//	//std::cout << *d << '\n';
//
//	//std::cout << sizeof(a) << '\n';
//	//std::cout << sizeof(b) << '\n';
//	//std::cout << sizeof(c) << '\n';	// размер массива в байтах !!!
//	//std::cout << sizeof(int) << '\n';
//	
//	
//	//int c[4]{ 13, 14, 15, 16 };
//
//	//// std::cout << *c << '\n';
//	//// std::cout << *(c + sizeof(int)) << '\n';	// гипотетически правильно!
//	//
//	////std::cout << *(c + 0) << '\n'; //~~~ std::cout << *(c + 0 * sizeof(int)) << '\n';
//	////std::cout << *(c + 1) << '\n'; //~~~ std::cout << *(c + 1 * sizeof(int)) << '\n';
//	////std::cout << *(c + 2) << '\n'; //~~~ std::cout << *(c + 2 * sizeof(int)) << '\n';
//	////std::cout << *(c + 3) << '\n'; //~~~ std::cout << *(c + 3 * sizeof(int)) << '\n';
//
//	//std::cout << c[0] << '\n'; //~~~ std::cout << *(c + 0 * sizeof(int)) << '\n';
//	//std::cout << c[1] << '\n'; //~~~ std::cout << *(c + 1 * sizeof(int)) << '\n';
//	//std::cout << c[2] << '\n'; //~~~ std::cout << *(c + 2 * sizeof(int)) << '\n';
//	//std::cout << c[3] << '\n'; //~~~ std::cout << *(c + 3 * sizeof(int)) << '\n';
//
//
//	// ---- practice
//
//	int arr[100]{};
//
//	//for (int i{}; i < 100; ++i)
//	//{
//	//	// std::cout << *(arr + i) << ' ';
//	//	std::cout << arr[i] << ' ';
//	//}
//
//	////						400	  /       4
//	//for (int i{}; i < sizeof(arr) / sizeof(int); ++i)
//	//{
//	//	// std::cout << *(arr + i) << ' ';
//	//	std::cout << arr[i] << ' ';
//	//}
//
//	for (int i{ 0 }; i < sizeof(arr) / sizeof(int); ++i)
//	{
//		*(arr + i) = rand();
//	}
//
//	for (int i{ 0 }; i < sizeof(arr) / sizeof(int); ++i)
//	{
//		std::cout << *(arr + i) << ' ';
//	}
//
//	return 0;
//}




int main()
{
	srand(time(0));

	/*int a = 56;

	int* ptr = new int{ 14 };
	int* arr = new int[5] {};

	delete ptr;
	ptr = new int{ 100 };

	delete[] arr;
	arr = new int[10] {};*/


	int size{ 5 };
	int* arr = new int[size] {};
	
	for (int i{ 0 }; i < size; ++i)
	{
		*(arr + i) = rand();
	}

	for (int i{ 0 }; i < size; ++i)
	{
		std::cout << *(arr + i) << ' ';
	}





	return 0;
}