#include <locale.h>
#include <math.h>
#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

int menu();

using namespace std;
unsigned short int nz;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int i;

	while (true)
	{
		menu();

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������.
				������������ ������ ������ �� ������������� �� �����������
				�������� ����� ��������*/
			system("cls");
			/*system("chcp 1251");*/
			setlocale(LC_ALL, ".866");
			SetConsoleTextAttribute(hConsole, 11);
			cout << " ������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������.";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������������ ������ ������ �� ������������� �� �����������            ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " �������� ����� ��������.                                              ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " ��������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 14);
			setlocale(LC_ALL, ".1251");
			float mas1[9], mas2[7], mas3[16], prom;
			cout << "  ������ ������ \n";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 9; i++)
			{
				mas1[i] = -22.13f + rand() % 99;
				cout << mas1[i] << "\t";
			}
			cout << endl;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ������ ������ \n";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 7; i++)
			{
				mas2[i] = -22.13f + rand() % 99;
				cout << mas2[i] << "\t";
			}
			cout << endl << endl;
			for (i = 0; i < 9; i++)
			{
				mas3[i] = mas1[i];
			}
			for (i = 9; i < 16; i++)
			{
				mas3[i] = mas2[i - 9];
			}
			for (i = 0; i < 16; i++)
			{
				for (int j = 0; j < 16 - 1; j++)
				{
					if (mas3[j] > mas3[j + 1])
					{
						prom = mas3[j];
						mas3[j] = mas3[j + 1];
						mas3[j + 1] = prom;
					}
				}
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ������ ������ ������������� �� �����������\n";
			SetConsoleTextAttribute(hConsole, 15);
			for (int i = 0; i < 16; i++)
			{
				cout << mas3[i] << "\t";
			}
			cout << endl << endl;
			cout << "�������� � ����\n";
			getch();
		}
		else if (nz == 2)
		{
			/*2.	� �������� ������������� ������� R(9) ���������� ������ ����������� ��
				�������� �� �������� ������������� ���������*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " � �������� ������������� ������� R(9) ���������� ������ ����������� ��";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " �������� �� �������� ������������� ���������.                         ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " ��������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int R[9], maks = -1, ind;
			cout << "  ";
			for (i = 0; i < 9; i++)
			{
				R[i] = 1 + rand() % 99;
				cout << R[i] << "\t";
				if (R[i] % 2 != 0 && R[i] > 0 && R[i] > maks)
				{
					maks = R[i];
					ind = i;
				}
			}
			cout << endl;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ������ ����������� �� �������� �� �������� ������������� ���������: " << ind << endl;
			cout << endl;
			SetConsoleTextAttribute(hConsole, 15);
			cout << "  �������� � ����\n";
			getch();
		}
		else if (nz == 3)
		{
			/*3.	������ ������, ��������� �� 9 ���������(������ ���������� �����) ������ ����.
				�������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " �������������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������ ������, ��������� �� 9 ���������(������ ���������� �����) ������ ����.";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " �������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������    ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " ���������������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int mas[9], s1, s2, mas1[9];
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ������ ������\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 9; i++)
			{
				mas[i] = 10 + rand() % 89;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << endl;
			cout << "  ������ ������\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 9; i++)
			{
				s1 = mas[i] / 10;
				s2 = mas[i] % 10;
				mas1[i] = s1 + s2;
				cout << mas1[i] << "\t";
			}
			cout << endl;
			cout << endl;
			cout << "  �������� � ����\n";
			getch();
		}
		else if (nz == 4)
		{
			/*4.	���� �������������� ����� c1, c2, �, cn.����� ������������ ����� �����
				� ������� ��������� � ����� ����� � ��������� ���������.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ���� �������������� ����� c1, c2, �, cn.����� ������������ ����� �����";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " � ������� ��������� � ����� ����� � ��������� ���������.              ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " ��������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int n, sum_ch = 0, sum_nch = 0;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ������� ���������� �����: "; cin >> n;
			SetConsoleTextAttribute(hConsole, 15);
			vector<int>mas(n);
			cout << "\t";
			for (i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "\t";
				if (i % 2 == 0)sum_ch += mas[i];
				else sum_nch += mas[i];
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << "\n\n  ������������ = " << sum_ch*sum_nch << endl;
			SetConsoleTextAttribute(hConsole, 15);
			cout << "\n  �������� � ����\n";
			getch();
		}
		else if (nz == 5)
		{
			/*5.	������ ������, ��������� �� 14 ��������� ��������������� ����. ��������
			������� ������ �������� �� ������. ���������� ���������� ������������� ��� ����
			������������.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ���������������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������ ������, ��������� �� 14 ��������� ��������������� ����. ��������        ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������� ������ �������� �� ������. ���������� ���������� ������������� ��� ����";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������������.                                                                  ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �����������������������������������������������������������������������������������\n\n";
			setlocale(LC_ALL, ".1251");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  �������������� ������\n";
			SetConsoleTextAttribute(hConsole, 15);
			float mas[14], kol = 0,vrem;
			cout << "\t";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 0.35f + rand() % 99;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ���������� ������\n";
			cout << "\t";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 7; i++)
			{
				vrem = mas[i];
				mas[i] = mas[i + 7];
				mas[i + 7] = vrem;
				kol++;
			}
			for (i = 0; i < 14; i++)
			{
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout <<"  "<< kol << " ������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			cout << "\n  �������� � ����\n";
			getch();
		}
		else if (nz == 6)
		{
			/*6.	���������� ���������� ��������� ���������� � �������� �������� �������. 
				(��������� �������� � �������� ������� � ��� ������������������ ���� ����� 
				������� �����, � ������� ������� ����� ������ ������� ����� � ������ �� ����).*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ���������������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ���������� ���������� ��������� ���������� � �������� �������� �������.        ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " (��������� �������� � �������� ������� � ��� ������������������ ���� �����     ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������� �����, � ������� ������� ����� ������ ������� ����� � ������ �� ����). ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �����������������������������������������������������������������������������������\n\n";
			setlocale(LC_ALL, ".1251");
			SetConsoleTextAttribute(hConsole, 15);
			int mas[14],kol_lm=0;
			cout << "\t";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "\t";
			}
			for (i = 1; i < 13; i++)
			{
				if (mas[i] > mas[i - 1] && mas[i] > mas[i + 1]) kol_lm++;
			}
			cout << endl;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  � ������ �������� ������� " << kol_lm << " ��������� ����������\n";

			SetConsoleTextAttribute(hConsole, 15);
			cout << "\n  �������� � ����\n";
			getch();
		}
		else if (nz == 7)
		{
			/*7.	� �������� �������� ������� ���������� � ������� ������� ������������������� 
				�����, ������� ��������� �������(������ ��������� ����� ������ �����������).*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ������������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " � �������� �������� ������� ���������� � ������� ������� �������������������";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " �����, ������� ��������� �������(������ ��������� ����� ������ �����������).";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " ��������������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int mas[14];
			char CHU[40]="  ",prom[3];
			bool u = 0;
			cout << "\t";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << endl<<"  ������� ������������������� �����, ������� ��������� �������\n";
			for (i = 0; i < 13; i++)
			{
				if (u==0&&mas[i + 1] < mas[i])
				{
					u = 1;
					itoa(i, prom, 10);
					strcat(CHU, prom);
					prom[0] = '-';
					prom[1] = '\0';
					strcat(CHU, prom);					
				}
				else if (u == 1 && mas[i + 1] < mas[i])
				{

				}
				else if (u == 1 && mas[i + 1] >= mas[i])
				{
					itoa(i, prom, 10);
					strcat(CHU, prom);
					prom[0] = ',';
					prom[1] = ' ';
					prom[2] = '\0';
					strcat(CHU, prom);
					u = 0;
				}
			}
			int count = 0;
			for (i = 0; i < 40; i++)
			{
				if (CHU[i] != '\0')count++;
			}
						
			if (CHU[count - 1] == '-')
			{
				CHU[count] = '1';
				CHU[count+1] = '3';
			}				
			if (CHU[count - 2] == ',')CHU[count - 2] = ' ';			
			cout<<CHU<<endl;			

			SetConsoleTextAttribute(hConsole, 15);
			cout << "\n  �������� � ����\n";
			getch();
		}
		else if (nz == 8)
		{
			/*8.	������ ������, ��������� �� 10 ���������(������ ���������� �����) ������ ����.
				�������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ���������������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������ ������, ��������� �� 10 ���������(������ ���������� �����) ������ ����. ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " �������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������.";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �����������������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int mas[10], s1, s2, mas1[10];
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ������ ������\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 10; i++)
			{
				mas[i] = 10 + rand() % 89;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << endl;
			cout << "  ������ ������\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 10; i++)
			{
				s1 = mas[i] / 10;
				s2 = mas[i] % 10;
				mas1[i] = s1 - s2;
				cout << mas1[i] << "\t";
			}
			cout << endl;
			cout << endl;
			cout << "  �������� � ����\n";
			getch();
		}
		else if (nz == 9)
		{
			/*9.	����� ������������� ������.���������� ���������� �������� �������, �� ������� 
				�������� ��������� ����������(������ ��������� ����� ������ �����������)*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " �������������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ����� ������������� ������.���������� ���������� �������� �������, �� �������";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " �������� ��������� ����������(������ ��������� ����� ������ �����������).    ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " ���������������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int mas[14];
			char CHU[40] = "  ", prom[3];
			bool u = 0;
			cout << "\t";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << endl << "  ������� ������������������� �����, ������� ��������� ����������\n";
			for (i = 0; i < 13; i++)
			{
				if (u == 0 && mas[i + 1] > mas[i])
				{
					u = 1;
					itoa(i, prom, 10);
					strcat(CHU, prom);
					prom[0] = '-';
					prom[1] = '\0';
					strcat(CHU, prom);
				}
				else if (u == 1 && mas[i + 1] > mas[i])
				{

				}
				else if (u == 1 && mas[i + 1] <= mas[i])
				{
					itoa(i, prom, 10);
					strcat(CHU, prom);
					prom[0] = ',';
					prom[1] = ' ';
					prom[2] = '\0';
					strcat(CHU, prom);
					u = 0;
				}
			}
			int count = 0;
			for (i = 0; i < 40; i++)
			{
				if (CHU[i] != '\0')count++;
			}

			if (CHU[count - 1] == '-')
			{
				CHU[count] = '1';
				CHU[count + 1] = '3';
			}
			if (CHU[count - 2] == ',')CHU[count - 2] = ' ';
			cout << CHU << endl;
			SetConsoleTextAttribute(hConsole, 15);
			
			cout << "\n  �������� � ����\n";
			getch();
		}
		else if (nz == 10)
		{
			/*10.	������ ��� ������� �������������� �����.���������� ������������ �������� � 
				������ ������� � �������� �� �������.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ����������������������������������������������������������������������������Ŀ\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������ ��� ������� �������������� �����.���������� ������������ �������� �";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " �"; setlocale(LC_ALL, ".1251");
			cout << " ������ ������� � �������� �� �������.                                     ";
			setlocale(LC_ALL, ".866");
			cout << " �\n";
			cout << " ������������������������������������������������������������������������������\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			float mas[10], mas1[10],maks;
			short int ind_mas, ind_mas1;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  ������ ������\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			maks = -40;
			for (i = 0; i < 10; i++)
			{
				mas[i] = -20.34 + rand() % 99;
				cout << mas[i] << "\t";
				if (mas[i] > maks)
				{
					maks = mas[i];
					ind_mas = i;
				}
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << "\n  ������ ������\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			maks = -40;
			for (i = 0; i < 10; i++)
			{
				mas1[i] = -20.34 + rand() % 99;
				cout << mas1[i] << "\t";
				if (mas1[i] > maks)
				{
					maks = mas1[i];
					ind_mas1 = i;
				}
			}
			maks = mas[ind_mas];
			mas[ind_mas] = mas1[ind_mas1];
			mas1[ind_mas1] = maks;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "\n\n  ������� ����� ����� ������������\n";			
			cout << "  ������ ������\n\t";
			for (i = 0; i < 10; i++)
			{
				if (i != ind_mas)
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << mas[i] << "\t";
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
					cout << mas[i] << "\t";					
				}
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << "\n  ������ ������\n\t";
			for (i = 0; i < 10; i++)
			{
				if (i != ind_mas1)
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << mas1[i] << "\t";
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 12);
					cout << mas1[i] << "\t";
				}
			}
			cout << "\n\n  �������� � ����\n";
			getch();
		}
	}
}


int menu()
{
	system("cls");
	int code;
	cout << "�������� �������\n";
	nz = 1;
	
	for (int i = 1; i <= 10; i++)
	{
		if (nz == i)
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << "-->������� " << i << endl;
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "   ������� " << i << endl;
		}
	}
	cout << "   �����\n";

	do
	{
		code = getch();
		system("cls");

		if (code == 80)
		{
			if (nz != 10)
			{
				nz++;
			}
			else
			{
				nz = 0;
			}
			cout << "�������� �������\n";
		
			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->������� " << i << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   ������� " << i << endl;
				}
			}
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->����� \n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   ����� \n";
			}
			code = getch();
		}
		else if (code == 72)
		{
			if (nz != 0)
			{
				nz--;
			}
			else
			{
				nz = 10;
			}
			cout << "�������� �������\n";
			
			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->������� " << i << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   ������� " << i << endl;
				}
			}
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->�����\n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   �����\n";
			}
			code = getch();
		}
		else
		{
			if (code != 80 || code != 72 || code != 13)
			{
				continue;
			}
		}

	} while (code != 13);
	SetConsoleTextAttribute(hConsole, 15);
	return nz;
}