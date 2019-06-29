#include "stdafx.h"

int main(int argc, char** argv)
{

	Material* material = new Granite();
	cout << material->GetName() << endl;

	Cobblestone* rock = new Cobblestone();
	rock->SetTexture(material);
	


	cout << "Weight: " << rock->GetWeight() << endl;
	cout << "Lenght: " << rock->GetLength() << endl;

	cout << "Material name: " << rock->GetTexture()->GetName() << endl;
	cout << "Cobblestone density: " << rock->GetDensity() << endl;


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