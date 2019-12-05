#include "iostream"
#include "string"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string text("это предложение");
	int* mas = new int[text.length()];
	int j;
	for (int i = 0; i < text.length(); i++)
	{
		j = (int)text[i]; // узнаем числовое значение символа
		mas[i] = j; //заносишь в целочисленный масив  числовое значение символа
	}
	//сортируем массив                               
	for (int i = text.length() - 1; i >= 1; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (mas[j] > mas[j + 1])
			{
				int buf = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = buf;
			}
		}
	}
	//выводим отсортированну строку
	for (int i = 0; i < text.length(); i++)
	{
		cout << (char)mas[i];
	}
	delete[] mas;
	system("pause >> null");
	return 0;
}