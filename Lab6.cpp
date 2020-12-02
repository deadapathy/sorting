#include <iostream>
#include <ostream>
using namespace std;

//Сортировка включением
//O(n^2)
void insertSort() 
{
	
	
	const int n = 10;
	int arr[n] = { 12, 5, 3, 2, 45, 96, 6, 8, 11, 24 };


	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) 
		{
			count++;
			int tmp = arr[j - 1]; 
									 
			arr[j - 1] = arr[j]; 
			arr[j] = tmp; 
			
		}
	}
	cout << count << endl;

	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
	
}

//Сортировка выбором
//O(n^2)
void selectSort()
{
	const int n = 10;
	int arr[n] = { 12, 5, 3, 2, 45, 96, 6, 8, 11, 24 };
	int tmp;
	int count = 0;
	for (int i = 0; i < n; ++i) 
	{
		int pos = i;
		tmp = arr[i];
		for (int j = i + 1; j < n; j++) 
		{
			count++;
			if (arr[j] < tmp)
			{
				pos = j;
				tmp = arr[j];
			}
		}
		arr[pos] = arr[i];
		arr[i] = tmp; 
	}

	cout << '\n' << count << endl;
	for (int i = 0; i < n; i++)
	{
		cout <<  arr[i] << '\t';
	}
}

//Пузырьковая сортировка
//O(n^2)
void bubbleSort()
{
	const int n = 10;
	int arr[n] = { 12, 5, 3, 2, 45, 96, 6, 8, 11, 24 };
	int tmp;
	int count = 0;
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < n - 1; j++)
		{
			count++;
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	cout << '\n' << count << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
}

int main()
{
	insertSort();
	selectSort();
	bubbleSort();

}

