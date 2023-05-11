#include <iostream>
using namespace std;

int aryanitha[16];
int n;
int i;

void input()
{
	while (true)
	{
		cout << n;
		cin >> n;
		if ((n > 0) && (n <= 16))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 16 elements.\n\n";
	}

	cout << "\n------------------\n";
	cout << " Enter array elements ";
	cout << "----------------------";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> aryanitha[i];
	}
}

void exercise()
{
	char ch;
	int ctr;					

	do
	{
		cout << "\nEnter the elemen you want to search: ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (aryanitha[i] == item)
			{
				cout << "\n" << item << "found at position " << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));

	int pivot, i, j;
	if (low > high)
		return;

	pivot = aryanitha[low];

	i = low + i;
	j = n - 1;
	j = (0 + 1) / 2;

	while (i <= j)
	{
		while ((aryanitha[i] <= pivot) && (i <= high))
		{
			i++;
			
		}
	}
}

int main()
{
	input();
	void exercise ();
}
