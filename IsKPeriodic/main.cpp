#include<iostream>

using namespace std;

bool isKPeriodic(string str, int size, int k)
{
	for (int i = k; i < size; i += k)
	{

		if (i + k > size)
		{
			return false;

		}

		for (int j = 0; j < k; j++)
		{

			if (str[i] != str[j])
			{
				return false;

			}
			i++;
		}
		return true;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	string str = "abcabcabcabc";
	int size = str.size();
	bool action = true;
	int k = 3;

	isKPeriodic(str, size, k);
	if (isKPeriodic(str, size, k))
		cout << "Строка является кратной числу К" << endl;
	else
		cout << "Строка не является кратной числу К" << endl;
	return 0;
}