#include <iostream>
using namespace std;
////////////////////////////////////////////////////////1

//int SetNum(int number)
//{
//    if (number == 0)
//        return 0;
//    return number % 10 * 100 + number / 10 % 10 * 10 + number / 100;
//}
//int main()
//{
//    int n;
//    cout << "Input number - ";
//    cin >> n;
//    cout << SetNum(n) << "\n";
//}

/////////////////////////////////////////////////////2
//Степень числа.
//Вычислить степень числа, используя рекурсию.В функцию передаётся 2 параметра - число и степень.
int SetDegree(int number, int degree)
{
	
	if (degree == 0)
		return 1;
	
	return number * SetDegree(number, degree - 1);
}

int main()
{
	int number, degree, count = 0;
	cout << "Number - ";
	cin >> number;
	cout << "Degree - ";
	cin >> degree;
	cout << SetDegree(number, degree) << "\n";
	
	
}

///////////////////////////////////////////////////////3
//Сумма чисел в диапазоне.
//Вычислить сумму чисел в определённом диапазоне.Начало и конец диапазона задаётся параметрами функции

//int sum(int a, int b)
//{
//	if (a > b)
//		return 0;
//	//cout << a << " ";
//	return a + sum(a + 1, b);
//}
//int main()
//{
//	int a, b;
//	cout << "A - ";
//	cin >> a;
//	cout << "B - ";
//	cin >> b;
//	cout << sum(a, b) << "\n";
//	/*while (a <= b)
//	{
//		sum += a;
//		cout << a << " " ;
//		a++;
//	}
//	cout << sum << "\n";*/
//}