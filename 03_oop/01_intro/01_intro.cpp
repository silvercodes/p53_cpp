#include <iostream>


//void renderUser(short id, int age, double salary)
//{
//    std::cout << id << ' ' << age << ' ' << salary << '\n';
//}
//
//int main()
//{
//    short id{ 101 };
//    int age{ 25 };
//    double salary{ 3000 };
//
//    renderUser(id, age, salary);
//}


//void renderUser(short* ids, int* ages, double* salaries, int index)
//{
//    std::cout << ids[index] << ages[index] << salaries[index] << '\n';
//}
//
//int main()
//{
//    short* ids = new short[5] {101, 102, 103, 104, 105};
//    int* ages = new int[5] {25, 23, 21, 32, 20};
//    double* salaries = new double[5] {3000, 3500, 3200, 1500, 1500};
//
//    renderUser(ids, ages, salaries, 2);
//}



//struct User
//{
//	short id;
//	int age;
//	double salary;
//};
//
//void renderUser(User user)
//{
//	std::cout << user.id << ' ' << user.age << ' ' << user.salary << '\n';
//}
//
//int main()
//{
//	/*int a;
//	a = 34;
//	std::cout << a << '\n';
//
//	User b;
//	b = { 101, 23, 3000 };
//	std::cout << b.id << '\n';
//	std::cout << b.age << '\n';*/
//
//
//	int a{ 34 };
//	User b{ 101, 23, 3000 };
//}



//struct User
//{
//	short id = 1;
//	int age;
//	double salary;
//};
//
//int main()
//{
//	/*User a{};
//	User b{};
//
//	std::cout << a.id << '\n';
//	std::cout << b.id << '\n';*/
//
//
//	/*int* ptrInt = new int{ 12 };
//	User* ptr = new User{ 102, 31, 4000 };*/
//
//
//	int* arrInt = new int[3] {2, 5, 7};
//	User* arrUser = new User[3]{ {101, 23, 1000}, {102, 34, 2000}, {103, 28, 3000} };
//}



struct Point
{
	int x;
	int y;
};

struct Unit
{
	int id;
	int hp;
	Point position;
};

void renderUnit(const Unit* a)
{
	std::cout << "id: " << a->id << " hp: " << a->hp << '\n';
	std::cout << "position: " << '(' << a->position.x << ';' << a->position.y << ")\n";
}

int main()
{
	Unit a{ 101, 100,{ 12, 45 } };

	/*std::cout << "id: " << a.id << " hp: " << a.hp << '\n';
	std::cout << "position: " << '(' << a.position.x << ';' << a.position.y << ")\n";*/

	renderUnit(&a);

	return 0;
}
