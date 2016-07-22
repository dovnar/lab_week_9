#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int choice;
	int const size = 12;
	int arr[size]{ -9, 5, 3, -6, 1, 7, -5, 4, -2, 8, -8, 0};

	cout << "равные 0 ввести 1\nне равные 0 ввести 2\n";
	cin >> choice;

	if (choice == 1)
	{
		arr[11] = 2;
	}
	else
	{
		arr[11] = 6;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	choice = 0;

	for (int i = 0; i < size; i++)
	{
		choice += arr[i];
	}

	int sort;

	if (choice == 0)
	{
		sort = size / 3 * 2;
	}
	else
	{
		sort = size / 3;
	}

	for (int i = 1; i < sort; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else
			{
				break;
			}
		}
	}

	for (int max = size - 1; sort < max; sort++, max--)
	{
		int number = arr[max];
		arr[max] = arr[sort];
		arr[sort] = number;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}