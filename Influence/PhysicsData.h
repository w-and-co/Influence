#pragma once

//������ ����� ��������� ����� �� ��������������, 
//� ���� ����� ������� ������� ��� �����������.
//�� ��� ������ �� � ����������.

class PhysicsData :
	public IDensable {
public:
	double GetWeightInKilograms();
	double GetWeightInPounds();

	void SetWeightInKilograms(double weight);
	void SetWeightInPounds(double weight);

	double GetDensity();
	void SetDensity(double density);

	double width = 0.00000000001;
	double height = 0.00000000001;
	double length = 0.00000000001;
	Material* material;
private:
	double weight = 0.00000000001;
};
