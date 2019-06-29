#include "stdafx.h"

int main(int argc, char** argv)
{

	Material* material = new Birch();
	cout << material->GetName() << endl;

	Rock* rock = new Rock();
	cout << rock->GetWeight() << endl;
	rock->SetWeight(14);
	cout << "Weight: " << rock->GetWeight() << endl;
	cout << "Lenght: " << rock->GetLength() << endl;

	string command = "";
	while (true)
	{
		cin >> command;


		cout << "Your text: " << command << endl;


		system("pause");
		system("cls");
	}
	

	return 0;
}