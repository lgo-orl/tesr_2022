#include<stdio.h>
#include<windows.h>
int main()
{
	int hour, minute, second;
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			for (second = 0; second < 60; second++)
			{
				printf("%2d:%2d:%2d ", hour, minute, second);
				Sleep(1000);
				system("cls");
			}
		}
	}
	return 0;
}