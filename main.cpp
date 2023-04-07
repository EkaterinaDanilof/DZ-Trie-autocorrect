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

		cout << "Введите несколько латинских букв. Для выхода из программы X " << endl;
		cin >> oper;

		if (oper == "X") break; /// Условие завершения программы

		cout << endl <<endl;

		int comp = dysplayTextArrayNode(root, oper);


		if (comp == -1)
			cout << "Других слов не найдено" << endl;

		else if (comp == 0)
			cout << "Подобные слова не найдены" << endl;

	}


	return 0;
}