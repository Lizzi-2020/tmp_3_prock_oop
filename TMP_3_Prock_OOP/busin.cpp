#include "bus.h"
void bus::InData(ifstream &ifst) {
	ifst >> size;
	InCommon(ifst);
}