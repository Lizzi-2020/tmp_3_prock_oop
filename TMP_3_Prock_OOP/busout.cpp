#include "bus.h"
void bus::Out(ofstream &ofst) {
	ofst << "It is bus: Size = " << size;
	OutCommon(ofst);
}