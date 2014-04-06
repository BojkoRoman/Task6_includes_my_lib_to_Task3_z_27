#include "header_Task6.h"
#include "header_string.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
void Welcome()
{
	cout <<"�������� ��� ������ � �������� ����������� ����� �� ������ ������� � ������� ������� ��������� ����"<<endl;
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
		cout << "\n������ ������� �����(��� ��������i �� �i���� ������) : ";
		while ( ( ! ( cin >> n ) ) || ( n < 0 ) || ( n > 10 ) )
		{
		 if(n > 10)
		   {
			   cout << ("\n\n\t������� !");
				cout << "\n\n\t� ����i ������� �� ����� 10 ����i�!\n";
				cout << "\n\t��������� �������� �� ���..?\n\n";
				cout << "\n\t1 ��� ---- 2 ͳ\n\n";
		   }else
		   {
			    cout << ("\n\t������� !");
				cout << "\n\n\t���i��� ������� �����!\n";
				cout << "\n\t���������� ��������..?\n\n";
			    cout << "\n\t1 ��� ---- 2 ͳ\n\n";
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
			cout << "\t\t\t\t~��-��~"<<endl;
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
		cout << "������ ��� �����:" << endl;
	
	}else{
		cout << "������ ���� �����:" << endl;
	}
	

	cin.clear(); /**< �� ������� �������� ����, ���� � �������*/ 
	cin.sync(); /**< ��������� ���� �� ������� � ����� �������*/

	char **lines = new char*[n]; /**< �������� ����� ��� ������ ��������� �� n �����*/
	for(int i = 0; i < n; i++)
	{
		lines[i] = new char[256]; /**< �������� ����� ��� ������� ����� ������*/
		cin.getline( lines[i], 256 );
	}

	for( int i = 0; i < n; i++ ) //**< ���� ���� ���������� �� ������ � ��������� ������ ������� */
	{
		int n = RemoveNumbers(lines[i]);
		cout <<"-------------"<<endl;
		cout << lines[i] << endl;
		cout << "\tʳ������ ��������� �������: " << n << endl;
		cout <<"-------------"<<endl;
		
	}

	for( int i = 0; i < n; i++ )
		delete[] lines[i]; /**< ��������� ����� �� ������� �����*/
	delete[] lines; /**< ��������� ����� �� ������ ���������*/
	cout << "\n\t���������� ��������..?\n\n";
	cout << "\n\t1 ��� ---- 2 ͳ\n\n";
	int a;
	cin >> a;
		switch(a)
		{
		case 1:
			Enter();
			break;
		case 2:
			cout << "\t\t\t\t~��-��~"<<endl;
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
		/**< ���� ������ � ����� - ������� ������ ����*/
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
			cout << ("\n\t������� !");
			cout << "\n\n\t�� ������� ������� ���i�!\n";
			cout << "\n\t���������� ��������..?\n\n";
			cout << "\n\t1 ��� ---- 2 ͳ\n\n";
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
			cout << "\t\t\t\t~��-��~"<<endl;
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