#include"car.h"
void car::InData(ifstream &ifst)
{
	ifst >> maxSpeed;
	InCommon(ifst);
}