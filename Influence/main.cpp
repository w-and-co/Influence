#include "stdafx.h"
#include "Material.h"
#include "Wood.h"

int main(int argc, char** argv)
{

	Material* material = new Wood();
	cout << material->GetName() << endl;

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