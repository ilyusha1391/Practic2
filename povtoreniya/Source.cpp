#include <iostream>
#include <vector>
#include <string>
#include <iterator> 
#include <set> 
#include <algorithm>

using namespace std;

int A[100], k, p; //��� ���������� ����������� ����������

void F(string* v) //������� ������������ ������� �������� ������������� ���������
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
	//������ ������ �� ������
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
				B[k] = b; //�������� ����� � ������
				k++;
			}
			b = "";
		}
	}
	F(B); //�������� ������� ������������� ��������� � ������
	//������ ������ �� ������
	k = 0;
	for (int i = 0; i < a.length(); i++)
	{
		b += a[i];
		if (a[i] == ' ') //������� ����, ����� ����� �����������
		{                //�� ����, ������� � ������� ����� ��������...
			b.pop_back();
			if (b != "")
			{
				for (int j = 0; j < p; j++)
				{
					if (A[j] == k) b = '\b'; //����� ������ ������� �� ���-������ ������
				}                        //��������, �� ������ ������ ��� ������ ������
				cout << b << " "; //������� ������ ��� ��������       
			}
			k++;
			b = "";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}