#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;


//Swap
template <typename T > void mySwap(T *num1, T *num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//Задача 1
template <typename T> void sumArr(T arr[], int lenght, T *num) {
	for (int i = 0; i < lenght; i++) {
		*num += *(arr + i); // array[i] == *(arr+i)
	}



}



int main() {
	setlocale(LC_ALL, "ru");
	int n,m;

	/*cout << "Введите 2 числа: ";
	cin >> n >> m;
	mySwap(&n, &m);//передаем адрес переменных в функцию mySwap
	cout << n << "\t" << m;*/
	
	//Задача 1
	cout << "Задача 1\nИзначальный массив:\n[";
	const int lenght = 5;
	int z1[lenght] = { 1,2,3,4};
	for (int i = 0; i < lenght; i++) {
		cout << *(z1+i) << ", ";
	}
	cout << "\b\b]";
	n = 0;
	sumArr(z1, lenght, &n);
	cout << "\nСумма всех элементов массива равна =  " << n <<endl;









	return 0;
	
}