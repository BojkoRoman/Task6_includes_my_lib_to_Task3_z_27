#include "header_Task6.h"
#include "header_string.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
void Welcome()
{
	cout <<"Програма яка вилучає з заданого символьного рядка всі цифрові символи і повертає кількість вилучених цифр"<<endl;
	cout << "\t Copyright 2014 by Roman Bojko\n";
	for( int i = 0; i < 80; ++i )
			{
				cout << "-";
			}
}

void Enter()
{
	int n = 0;
	do
	{
		cout << "\nВведіть кількість рядків(для зручностi не бiльше десяти) : ";
		while ( ( ! ( cin >> n ) ) || ( n < 0 ) || ( n > 10 ) )
		{
		 if(n > 10)
		   {
			   cout << ("\n\n\tПомилка !");
				cout << "\n\n\tВ умовi сказано не більше 10 рядкiв!\n";
				cout << "\n\tЗапустити програму ще раз..?\n\n";
				cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		   }else
		   {
			    cout << ("\n\tПомилка !");
				cout << "\n\n\tНевiрно введено число!\n";
				cout << "\n\tПродовжити програму..?\n\n";
			    cout << "\n\t1 ТАК ---- 2 Ні\n\n";
		   }
		cin.clear();
        cin.sync();

		int a;
		cin >> a;
		switch(a)
		{
		case 1:
			Enter();
			break;
		case 2:
			cout << "\t\t\t\t~Па-Па~"<<endl;
			for( int i = 0; i < 40; ++i )
			{
				cout << "*-";
			}
			system("pause");
			exit(1);
			break;
		default:
			Error();

		}

		}
	}
	while(n <= 0);
	if( n == 0 || n == 1){
		cout << "Введіть свій рядок:" << endl;
	
	}else{
		cout << "Введіть ваші рядки:" << endl;
	}
	

	cin.clear(); /**< Ця функція відновлює потік, якщо є помилка*/ 
	cin.sync(); /**< Очищається потік від наявних у ньому символів*/

	char **lines = new char*[n]; /**< Виділення пам’яті для масиву вказівників на n рядків*/
	for(int i = 0; i < n; i++)
	{
		lines[i] = new char[256]; /**< Виділення пам’яті для кожного рядка масиву*/
		cin.getline( lines[i], 256 );
	}

	for( int i = 0; i < n; i++ ) //**< Цикл який пробігається по рядках і знаходить цифрові символи */
	{
		int n = RemoveNumbers(lines[i]);
		cout <<"-------------"<<endl;
		cout << lines[i] << endl;
		cout << "\tКількість видалених символів: " << n << endl;
		cout <<"-------------"<<endl;
		
	}

	for( int i = 0; i < n; i++ )
		delete[] lines[i]; /**< Звільнення пам’яті від кожного рядка*/
	delete[] lines; /**< Звільнення пам’яті від масиву вказівників*/
	cout << "\n\tПродовжити програму..?\n\n";
	cout << "\n\t1 ТАК ---- 2 Ні\n\n";
	int a;
	cin >> a;
		switch(a)
		{
		case 1:
			Enter();
			break;
		case 2:
			cout << "\t\t\t\t~Па-Па~"<<endl;
			for(int i = 0; i < 40; ++i)
			{
				cout << "*-";
			}
			system("pause");
			exit(1);
			break;
		default:
			Error();

		}
}

unsigned RemoveNumbers(char *pStr)
{
	if(!pStr)
		return 0;

	unsigned n = 0;
	char *pEnd = pStr + myStrlen(pStr);

	while(*pStr)
	{
		/**< Якщо символ є число - зміщення масиву вліво*/
		if(isdigit(*pStr))
		{
			memcpy(pStr, pStr + 1, pEnd - pStr);
			n++;
			continue;
		}

		pStr++;
	}

	return n;
}

void Error()
{
	int n;
	while ( ( ! ( cin >> n ) ) || ( n < 0 ) || ( n > 2 ) )
	{
			cout << ("\n\tПомилка !");
			cout << "\n\n\tВи зробили поганий вибiр!\n";
			cout << "\n\tПродовжити програму..?\n\n";
			cout << "\n\t1 ТАК ---- 2 Ні\n\n";
			cin.clear();
			cin.sync();

		int a;
		cin >> a;
		switch(a)
		{
		case 1:
			Enter();
			break;
		case 2:
			cout << "\t\t\t\t~Па-Па~"<<endl;
			for(int i = 0; i < 40; ++i)
			{
				cout << "*-";
			}
			system("pause");
			exit(1);
			break;
		default:
			Error();
		}
	}
		
}