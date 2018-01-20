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
			/*1.	Ввести два массива действительных чисел, состоящих из 9 и 7 элементов.
				Сформировать третий массив из упорядоченных по возрастанию
				значений обоих массивов*/
			system("cls");
			/*system("chcp 1251");*/
			setlocale(LC_ALL, ".866");
			SetConsoleTextAttribute(hConsole, 11);
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Ввести два массива действительных чисел, состоящих из 9 и 7 элементов.";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Сформировать третий массив из упорядоченных по возрастанию            ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " значений обоих массивов.                                              ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
			SetConsoleTextAttribute(hConsole, 14);
			setlocale(LC_ALL, ".1251");
			float mas1[9], mas2[7], mas3[16], prom;
			cout << "  Первый массив \n";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 9; i++)
			{
				mas1[i] = -22.13f + rand() % 99;
				cout << mas1[i] << "\t";
			}
			cout << endl;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  Второй массив \n";
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
			cout << "  Третий массив упорядоченных по возрастанию\n";
			SetConsoleTextAttribute(hConsole, 15);
			for (int i = 0; i < 16; i++)
			{
				cout << mas3[i] << "\t";
			}
			cout << endl << endl;
			cout << "Вернутся в меню\n";
			getch();
		}
		else if (nz == 2)
		{
			/*2.	В заданном целочисленном массиве R(9) определить индекс наибольшего из
				нечетных по значению положительных элементов*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " В заданном целочисленном массиве R(9) определить индекс наибольшего из";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " нечетных по значению положительных элементов.                         ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
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
			cout << "  Индекс наибольшего из нечетных по значению положительных элементов: " << ind << endl;
			cout << endl;
			SetConsoleTextAttribute(hConsole, 15);
			cout << "  Вернутся в меню\n";
			getch();
		}
		else if (nz == 3)
		{
			/*3.	Ввести массив, состоящий из 9 элементов(девять двузначных чисел) целого типа.
				Получить новый массив, состоящий из сумм цифр элементов исходного массива*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Ввести массив, состоящий из 9 элементов(девять двузначных чисел) целого типа.";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Получить новый массив, состоящий из сумм цифр элементов исходного массива    ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int mas[9], s1, s2, mas1[9];
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  Первый массив\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 9; i++)
			{
				mas[i] = 10 + rand() % 89;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << endl;
			cout << "  Второй массив\n\t";
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
			cout << "  Вернутся в меню\n";
			getch();
		}
		else if (nz == 4)
		{
			/*4.	Даны действительные числа c1, c2, …, cn.Найти произведение суммы чисел
				с четными индексами и суммы чисел с нечетными индексами.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Даны действительные числа c1, c2, …, cn.Найти произведение суммы чисел";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " с четными индексами и суммы чисел с нечетными индексами.              ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int n, sum_ch = 0, sum_nch = 0;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  Введите количество чисел: "; cin >> n;
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
			cout << "\n\n  Произведение = " << sum_ch*sum_nch << endl;
			SetConsoleTextAttribute(hConsole, 15);
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 5)
		{
			/*5.	Ввести массив, состоящий из 14 элементов действительного типа. Поменять
			местами первую половину со второй. Определить количество произведенных при этом
			перестановок.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Ввести массив, состоящий из 14 элементов действительного типа. Поменять        ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " местами первую половину со второй. Определить количество произведенных при этом";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " перестановок.                                                                  ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n\n";
			setlocale(LC_ALL, ".1251");
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  Первоначальный массив\n";
			SetConsoleTextAttribute(hConsole, 15);
			float mas[14], kol = 0,vrem;
			cout << "\t";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 0.35f + rand() % 99;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  Измененный массив\n";
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
			cout <<"  "<< kol << " перестановок\n";
			SetConsoleTextAttribute(hConsole, 15);
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 6)
		{
			/*6.	Определить количество локальных максимумов в заданном числовом массиве. 
				(Локальный максимум в числовом массиве – это последовательность трех рядом 
				стоящих чисел, в которой среднее число больше стоящих слева и справа от него).*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Определить количество локальных максимумов в заданном числовом массиве.        ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " (Локальный максимум в числовом массиве – это последовательность трех рядом     ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " стоящих чисел, в которой среднее число больше стоящих слева и справа от него). ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n\n";
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
			cout << "  В данном числовом массиве " << kol_lm << " локальных максимумов\n";

			SetConsoleTextAttribute(hConsole, 15);
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 7)
		{
			/*7.	В заданном числовом массиве определить и вывести индексы последовательностей 
				чисел, которые монотонно убывают(каждое следующее число меньше предыдущего).*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " В заданном числовом массиве определить и вывести индексы последовательностей";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " чисел, которые монотонно убывают(каждое следующее число меньше предыдущего).";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
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
			cout << endl<<"  Индексы последовательностей чисел, которые монотонно убывают\n";
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
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 8)
		{
			/*8.	Ввести массив, состоящий из 10 элементов(десять двузначных чисел) целого типа.
				Получить новый массив, состоящий из разностей цифр элементов исходного массива.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Ввести массив, состоящий из 10 элементов(десять двузначных чисел) целого типа. ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Получить новый массив, состоящий из разностей цифр элементов исходного массива.";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			int mas[10], s1, s2, mas1[10];
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  Первый массив\n\t";
			SetConsoleTextAttribute(hConsole, 15);
			for (i = 0; i < 10; i++)
			{
				mas[i] = 10 + rand() % 89;
				cout << mas[i] << "\t";
			}
			SetConsoleTextAttribute(hConsole, 14);
			cout << endl;
			cout << "  Второй массив\n\t";
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
			cout << "  Вернутся в меню\n";
			getch();
		}
		else if (nz == 9)
		{
			/*9.	Задан целочисленный массив.Определить количество участков массива, на котором 
				элементы монотонно возрастают(каждое следующее число больше предыдущего)*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Задан целочисленный массив.Определить количество участков массива, на котором";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " элементы монотонно возрастают(каждое следующее число больше предыдущего).    ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
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
			cout << endl << "  Индексы последовательностей чисел, которые монотонно возрастают\n";
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
			
			cout << "\n  Вернутся в меню\n";
			getch();
		}
		else if (nz == 10)
		{
			/*10.	Ввести два массива действительных чисел.Определить максимальные элементы в 
				каждом массиве и поменять их местами.*/
			system("cls");
			SetConsoleTextAttribute(hConsole, 11);
			setlocale(LC_ALL, ".866");
			cout << " ЪДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДї\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " Ввести два массива действительных чисел.Определить максимальные элементы в";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " і"; setlocale(LC_ALL, ".1251");
			cout << " каждом массиве и поменять их местами.                                     ";
			setlocale(LC_ALL, ".866");
			cout << " і\n";
			cout << " АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ\n";
			SetConsoleTextAttribute(hConsole, 15);
			setlocale(LC_ALL, ".1251");
			float mas[10], mas1[10],maks;
			short int ind_mas, ind_mas1;
			SetConsoleTextAttribute(hConsole, 14);
			cout << "  Первый массив\n\t";
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
			cout << "\n  Второй массив\n\t";
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
			cout << "\n\n  Массивы после смены максимальных\n";			
			cout << "  Первый массив\n\t";
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
			cout << "\n  Второй массив\n\t";
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
			cout << "\n\n  Вернутся в меню\n";
			getch();
		}
	}
}


int menu()
{
	system("cls");
	int code;
	cout << "Выберите задание\n";
	nz = 1;
	
	for (int i = 1; i <= 10; i++)
	{
		if (nz == i)
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << "-->Задание " << i << endl;
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "   Задание " << i << endl;
		}
	}
	cout << "   Выход\n";

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
			cout << "Выберите задание\n";
		
			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->Задание " << i << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   Задание " << i << endl;
				}
			}
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->Выход \n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   Выход \n";
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
			cout << "Выберите задание\n";
			
			for (int i = 1; i <= 10; i++)
			{
				if (nz == i)
				{
					SetConsoleTextAttribute(hConsole, 14);
					cout << "-->Задание " << i << endl;
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 15);
					cout << "   Задание " << i << endl;
				}
			}
			if (nz == 0)
			{
				SetConsoleTextAttribute(hConsole, 14);
				cout << "-->Выход\n";
			}
			else
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "   Выход\n";
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