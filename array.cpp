#include <iostream>
using namespace std;

class Array{
	private:
		int x;
	public:
		void array_straight();
		void array_reverse();
};
int main()
{
	char A;
	Array arr;
	cout << "Do you want your array to be displayed in reverse order? (Y)es or (N)o: ";
	cin >> A;
	A = toupper(A);
	if (A == 'N')
	{
		arr.array_straight();
	}
	else if (A == 'Y')
	{
		arr.array_reverse();
	}
	else{
		cout <<"Invalid input.\nEnter Y or N" << endl;
	}
}

void Array::array_straight()
{
	cout << "Enter number of elements: ";
		cin >> x;
		int nums[x];
		if (x <= 0)
		{
			cout << "Array cannot have " << x << " elements";
		}
		else
		{
			cout << "Enter the numbers: " << endl;
			for (int i = 0; i < x; i++)
			{
				cout << "> ";
				cin >> nums[i];
			}
			cout << "The numbers are: " << endl;
			for (int i = 0; i < x; i++)
			{
				cout << "> " << nums[i] << endl;
			}
		}
}
void Array::array_reverse()
{
	cout << "Enter number of elements: ";
		cin >> x;
		int nums[x];
		if (x <= 0)
		{
			cout << "Array cannot have " << x << " elements";
		}
		else
		{
			cout << "Enter the numbers: " << endl;
			for (int i = 0; i < x; i++)
			{
				cout << "> ";
				cin >> nums[i];
			}
			cout << "The elements in reverse order are: " << endl;
			for (int i = x-1; i >= 0; i--)
			{
				cout << ">" << nums[i] << endl;
			}
		}
}
