#include "stdafx.h"
#include "Material.h"
#include "Wood.h"
#include "Birch.h"

int main(int argc, char** argv)
{

	Material* material = new Birch();
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