#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

void gotoXY(int x, int y)
{
	HANDLE hOut;
	COORD Cur;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(hOut, Cur);
}

int main()
{
	srand((unsigned)time(NULL));

	const int num = 20;
	int Number[num] = { 0, };

	int sameNum = 0;
	bool bSame = false;

	for (int i = 0; i < num; i++)
	{
		do 
		{
			bSame = false;
			sameNum = 0;
			Number[i] = rand() % 10;
			if (i > 1)
			{
				for (int j = 0; j < i; j++)
				{
					if (Number[i] == Number[j])
					{
						sameNum++;
					}
				}
				if (sameNum > 1)
				{
					bSame = true;
				}
			}
		} while (bSame);
	}

	for (int i = 0; i < num; i++)
	{
		gotoXY(i % 5, i / 5);
		cout << Number[i];
	}
	Sleep(2000);
	for (int i = 0; i < num; i++)
	{
		gotoXY(i%5, i/5);
		cout << "*";
	}

	int size = 0;

	while (true)
	{
		int key = _getch();

		for (int i = 0; i < num; i++)
		{
			if (key == 49)
			{
				gotoXY(0, 0);
				cout << Number[0];
				size++;
			}
			if (key == 50)
			{
				gotoXY(1, 0);
				cout << Number[1];
				size++;
			}
			if (key == 51)
			{
				gotoXY(2, 0);
				cout << Number[2];
				size++;
			}
			if (key == 52)
			{
				gotoXY(3, 0);
				cout << Number[3];
				size++;
			}
			if (key == 53)
			{
				gotoXY(4, 0);
				cout << Number[4];
				size++;
			}
			if (key == 113)
			{
				gotoXY(0, 1);
				cout << Number[5];
				size++;
			}
			else if (key == 119)
			{
				gotoXY(1, 1);
				cout << Number[6];
				size++;
			}
			else if (key == 101)
			{
				gotoXY(2, 1);
				cout << Number[7];
				size++;
			}
			else if (key == 114)
			{
				gotoXY(3, 1);
				cout << Number[8];
				size++;
			}
			else if (key == 116)
			{
				gotoXY(4, 1);
				cout << Number[9];
				size++;
			}
			else if (key == 97)
			{
				gotoXY(0, 2);
				cout << Number[10];
				size++;
			}
			else if (key == 115)
			{
				gotoXY(1, 2);
				cout << Number[11];
				size++;
			}
			else if (key == 100)
			{
				gotoXY(2, 2);
				cout << Number[12];
				size++;
			}
			else if (key == 102)
			{
				gotoXY(3, 2);
				cout << Number[13];
				size++;
			}
			else if (key == 103)
			{
				gotoXY(4, 2);
				cout << Number[14];
				size++;
			}
			else if (key == 122)
			{
				gotoXY(0, 3);
				cout << Number[15];
				size++;
			}
			else if (key == 120)
			{
				gotoXY(1, 3);
				cout << Number[16];
				size++;
			}
			else if (key == 99)
			{
				gotoXY(2, 3);
				cout << Number[17];
				size++;
			}
			else if (key == 118)
			{
				gotoXY(3, 3);
				cout << Number[18];
				size++;
			}
			else if (key == 98)
			{
				gotoXY(4, 3);
				cout << Number[19];
				size++;
			}
			if (size == 3)
			{
				for (int i = 0; i < num; i++)
				{
					gotoXY(i % 5, i / 5);
					cout << "*";
					size = 0;
				}
			}
		}

	}
	return 0;
}