// Mario Theme 8-Bit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>      //For I/O Functions
#include <windows.h>   //For Beep & Sleep functions
#include<stdlib.h>  //For System Pause
#define A 220.00
#define A2 440.00
#define B 246.94
#define Fis 369.99
#define Cis 277.18
#define D 293.66
#define Dis 311.13
#define H 246.94
#define E 329.63	
#define E2 164.81
#define F 174.61	
#define F2 349.23
#define G 392.00
#define G2 196.00
#define G3 783.99
#define Gis 415.30
#define Gis2 207.65
#define C 261.63
#define C2 523.25
using namespace std;
const float cala_nuta = 2000;
float szesnastka = cala_nuta / 16;
float osemka = cala_nuta / 8;
float cwierc = cala_nuta / 4;

void intro();
void first(int);
void second(int);

int main()
{
	intro();
	first(2);
	second(2);

	



		




    return 0;
}
void intro()
{
	Beep(E, szesnastka);
	Beep(E, osemka);
	Beep(E, osemka);
	Beep(C, szesnastka);
	Beep(E, osemka);
	Beep(G, cwierc);
	Beep(G2, cwierc);
}
void first(int n=1)
{
	for (int i = 0; i < n; i++)
	{
		
		Beep(C, osemka + (osemka / 2));
		Beep(G2, osemka + (osemka / 2));
		Beep(E2, osemka + (osemka / 2));
		Beep(A, osemka);
		Beep(H, osemka);
		Beep(B, szesnastka);
		Beep(A, osemka);

		Beep(G2, szesnastka);
		Beep(E, osemka);
		Beep(G, szesnastka);
		Beep(A2, osemka);
		Beep(F, szesnastka);
		Beep(G, osemka);
		Beep(E, osemka);
		Beep(C, szesnastka);
		Beep(D, szesnastka);
		Beep(B, osemka + (osemka / 2));
	}
}

void second(int n = 1)
{
	for (int i = 0; i < n; i++)
	{
		Sleep(osemka);
		Beep(G, szesnastka);
		Beep(Fis, szesnastka);
		Beep(F2, szesnastka);
		Beep(Dis, osemka);
		Beep(E, osemka);
		Beep(Gis2, szesnastka);
		Beep(A, szesnastka);
		Beep(C, osemka);
		Beep(A, szesnastka);
		Beep(C, szesnastka);
		Beep(D, szesnastka);

		Sleep(osemka);
		Beep(G, szesnastka);
		Beep(Fis, szesnastka);
		Beep(F2, szesnastka);
		Beep(Dis, osemka);
		Beep(E, osemka);
		Beep(C2, osemka);
		Beep(C2, szesnastka);
		Beep(C2, osemka);

		Sleep(osemka);
		Beep(G, szesnastka);
		Beep(Fis, szesnastka);
		Beep(F, szesnastka);
		Beep(Dis, osemka);
		Beep(E, osemka);
		Beep(Gis, szesnastka);
		Beep(A, szesnastka);
		Beep(C, osemka);
		Beep(A, szesnastka);
		Beep(C, szesnastka);
		Beep(D, szesnastka);

		Sleep(osemka);
		Beep(Dis, osemka + (osemka / 2));
		Beep(D, osemka + (osemka / 2));
		Beep(C, cwierc);
	}
}
