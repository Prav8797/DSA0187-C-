#include<iostream>
using namespace std;
void Count(string str)
{
	int upper = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper++;
	}
	cout << "Upper case letters: " << upper << endl;
}
int main()
{
	string str = "#GeeKs01fOr@gEEks07";
	Count(str);
	return 0;
}

