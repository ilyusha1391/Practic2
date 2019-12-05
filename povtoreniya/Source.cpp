#include <iostream>
#include <vector>
#include <string>
#include <iterator> 
#include <set> 
#include <algorithm>

using namespace std;

int A[100], k, p; //Эти переменные обязательно глобальные

void F(string* v) //Функция формирования массива индексов повторяющихся элементов
{
	set<string> s;
	vector<std::string> res;
	p = 0;
	for (int i = 0; i < k; i++)
	{
		string x = v[i];
		if (s.find(x) == s.end())
		{
			s.insert(x);
			res.push_back(x);
		}
		else
		{
			A[p] = i;
			p++;
		}
	}
}

int main()
{
	int l;
	string a, b, B[100];
	getline(cin, a);
	//Первый проход по строке
	a = a + ' ';
	k = 0;
	for (int i = 0; i < a.length(); i++)
	{
		b += a[i];
		if ((!(isalpha(a[i]))))
		{
			b.pop_back();
			if (b != "")
			{
				B[k] = b; //Помещаем слова в массив
				k++;
			}
			b = "";
		}
	}
	F(B); //Помещаем индексы повторяющихся элементов в массив
	//Второй проход по строке
	k = 0;
	for (int i = 0; i < a.length(); i++)
	{
		b += a[i];
		if (a[i] == ' ') //Условие того, какие слова вытаскиваем
		{                //То есть, пробелы и запятые можно оставить...
			b.pop_back();
			if (b != "")
			{
				for (int j = 0; j < p; j++)
				{
					if (A[j] == k) b = '\b'; //Здесь меняем повторы на что-нибудь другое
				}                        //Например, на пустую строку или другую строку
				cout << b << " "; //Выводим строку без повторов       
			}
			k++;
			b = "";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}