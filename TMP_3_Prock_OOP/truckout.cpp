#include "truck.h"
void truck::Out(ofstream &ofst) {
	ofst << "It is truck: Power = "	<< power ;
	OutCommon(ofst);
}