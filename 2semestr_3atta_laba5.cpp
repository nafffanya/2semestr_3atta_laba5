#include <fstream>
#include <string>
#include <Windows.h>
#include <iostream>
#include <list>

using namespace std;

template<typename T>
void printList(list<T> l) {
	for (const auto& item : l) {
		cout << item << "\n";
	}
	cout << endl;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	list<string> A;
	string lastname;
	ifstream f("Текст.txt");
	int count = 0;
	if (f.is_open())
	{
		while (getline(f, lastname))
		{
			A.push_front(lastname);
			count++;
		}
	}
	f.close();
	cout << "Начальный список фамилий :\n";
	printList(A);
	cout << "\nВведите фамилию, которую нужно добавить : ";
	cin >> lastname;
	A.push_front(lastname);
	A.sort();
	printList(A);
	return 0;
}
