#include<iostream>
#include<graphics.h>
#include<windows.h>


int main()
{
	initgraph(720, 600, NOCLOSE | NOMINIMIZE);

	setbkcolor(BLACK);
	cleardevice();

	IMAGE WARNNING;

	int i = 0;
	for (int j = 0; j < 8; ++j)
	{
		settextcolor(WHITE);
		settextstyle(20, 0, L"Courier");
		setbkmode(TRANSPARENT);
		outtextxy(0, i, L" >> WARNNING !!! £º Please Do Not Powerdown Your Device...");
		Sleep(500);
		i += 22;
	}

	settextcolor(GREEN);
	settextstyle(20, 0, L"Courier");
	setbkmode(TRANSPARENT);
	outtextxy(0, i, L" >> your system has crashed. . . . . . ");

	settextcolor(GREEN);
	settextstyle(20, 0, L"Courier");
	setbkmode(TRANSPARENT);
	outtextxy(0, i, L" >> your system has crashed. . . . . . ");

	Sleep(500);
	i += 22;
	settextcolor(GREEN);
	settextstyle(20, 0, L"Courier");
	setbkmode(TRANSPARENT);
	outtextxy(0, i, L" >> Your Device is Going To Shutdown. . . . . . ");

	i += 44;
	for (int k = 0; k < 11; ++k)
	{
		Sleep(300);
		outtextxy(20 * k, i, L".");
	}

	Sleep(1000);
	system("shutdown -s -t 1");

	getchar();
	closegraph();
	return 0;
}