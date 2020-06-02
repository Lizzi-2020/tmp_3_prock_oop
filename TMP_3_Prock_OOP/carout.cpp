#include "car.h"
void car::Out(ofstream &ofst)
{
	ofst << "It is car: Max speed = " << maxSpeed;
	OutCommon(ofst);
}