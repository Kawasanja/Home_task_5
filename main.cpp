#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
void BublSort (int mas[], int lenght)
{
     bool exit = false;
     while(!exit){
	 exit = true;
	 for (int k = 0; k < lenght-1; k++)
	 {
		 if (mas[k] > mas[k+1])
		 {
			 int prom = 0;
			 prom = mas[k];
			 mas[k] = mas[k+1];
			 mas[k+1] = prom;
			 exit = false;
		 }
	 }
}
}
int main()
{
	while (true) {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size; 
	int arr[size];
	srand(time(NULL));	
	cout << "Before sorting: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 201 - 100; 
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "After sorting: ";
	BublSort (arr, size);
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl << endl;
	}
	return 0;
}
