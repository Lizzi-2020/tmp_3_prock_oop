#include "truck.h"
void truck::InData(ifstream &ifst) {
	ifst >> power;
	InCommon(ifst);
}
