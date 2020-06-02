#include "transport.h"
void transport::OutCommon(ofstream &ofst) {
	ofst << ", Power engine = " << powerEngine << ", Fuel consumption = " << fuelConsumption << "/100km" << std::endl;
	ofst << "Ratio = " << ratio() << endl;
}