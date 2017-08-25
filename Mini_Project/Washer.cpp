#include "Washer.h"

Washer::Washer() : Appliance(), machineState(NO_OPERATION) {}

Washer::Washer(string machineName, int powerConsumption)
	: Appliance(machineName, powerConsumption), machineState(NO_OPERATION)
{}

int Washer::getMachineState() const
{
	return this->machineState;
}

void Washer::setMachineState(int machineState)
{
	this->machineState = machineState;
}

void Washer::stateView()
{
	cout << "���� ��ǰ�� ���� : ";
	switch (this->machineState) {
	case NO_OPERATION: cout << "������" << endl; break;
	case GENERAL: cout << "�Ϲݻ���" << endl; break;
	case BOIL: cout << "��������" << endl; break;
	case DRY: cout << "����" << endl; break;
	}
	cout << endl;
}