#include <iostream>
#include <cstdlib>
using namespace std;

int NumberDrops[100];
int MassNumberDrops[5];
int NumberOne = 0;
int NumberTwo = 0;
int NumberThree = 0;
int NumberFour = 0;
int NumberFive = 0;
int NumberSix = 0;
int SizeMass = 0;
int Max = 0, Min = 0;

int getNumber(int min, int count)
{
	return min + rand() % count;
	cout << min;
}

int main()
{
	setlocale(LC_ALL, "ukr");
	srand(time(nullptr));
	for (int i = 0; i < 100; i++)
	{
		NumberDrops[i] = getNumber(1, 6);
	}
	for (int i = 0; i < 100; i++)
	{
		switch (NumberDrops[i])
		{
		case 1:
			NumberOne++;
			break;
		case 2:
			NumberTwo++;
			break;
		case 3:
			NumberThree++;
			break;
		case 4:
			NumberFour++;
			break;
		case 5:
			NumberFive++;
			break;
		case 6:
			NumberSix++;
			break;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		cout << "�i���i��� ��������� ������� 1 - " << NumberOne << endl;
		cout << "�i���i��� ��������� ������� 2 - " << NumberTwo << endl;
		cout << "�i���i��� ��������� ������� 3 - " << NumberThree << endl;
		cout << "�i���i��� ��������� ������� 4 - " << NumberFour << endl;
		cout << "�i���i��� ��������� ������� 5 - " << NumberFive << endl;
		cout << "�i���i��� ��������� ������� 6 - " << NumberSix << endl;

		MassNumberDrops[0] = NumberOne;
		MassNumberDrops[1] = NumberTwo;
		MassNumberDrops[2] = NumberThree;
		MassNumberDrops[3] = NumberFour;
		MassNumberDrops[4] = NumberFive;
		MassNumberDrops[5] = NumberSix;

		Max = MassNumberDrops[0];
		Min = MassNumberDrops[0];
		SizeMass = sizeof(MassNumberDrops) / sizeof(int);
		int NumberMaxDrops = 0;
		for (int i = 0; i <= SizeMass; i++)
		{

			if (MassNumberDrops[i] > Max)
			{
				Max = MassNumberDrops[i];
				NumberMaxDrops = i;

			}
		}
		int NumberMinDrops = 0;
		for (int i = 0; i <= SizeMass; i++)
		{

			if (MassNumberDrops[i] < Min)
			{
				Min = MassNumberDrops[i];
				NumberMinDrops = i;
			}
		}
		NumberMaxDrops = NumberMaxDrops + 1;
		NumberMinDrops = NumberMinDrops + 1;
		cout << "\r\n";
		cout << "����������� �i���i��� �������� - ������� " << NumberMaxDrops << ": �i���i��� �������� " << Max << endl;
		cout << "�i�i������ �i���i��� �������� - ������� " << NumberMinDrops << ": �i���i��� �������� " << Min << endl;


		return 0;

	}
}

