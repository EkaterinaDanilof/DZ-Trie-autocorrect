#include <iostream>
#include <string>
#include "T_N.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");

	string arr[] = { "kind","off","need","house","picture","try","again","animal","point","mother","world","near","build","any","work","part","came","show","every","sentence","great","think","say","move","all","up","use","then","them","call", "cat", "cult", "run", "rut", "dog", "dot", "dove", "duck", "zebra" };

	TrieNode* root = getNewNode();

	for (string item : arr)
	{
		insert(root, item);
	}


	while (true)
	{
		string oper;

		cout << "������� ��������� ��������� ����. ��� ������ �� ��������� X " << endl;
		cin >> oper;

		if (oper == "X") break; /// ������� ���������� ���������

		cout << endl <<endl;

		int comp = dysplayTextArrayNode(root, oper);


		if (comp == -1)
			cout << "������ ���� �� �������" << endl;

		else if (comp == 0)
			cout << "�������� ����� �� �������" << endl;

	}


	return 0;
}