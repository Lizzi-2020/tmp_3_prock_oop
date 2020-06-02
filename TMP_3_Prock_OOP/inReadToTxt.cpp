#include "transport.h"
#include "bus.h"
#include "truck.h"
#include "car.h"
transport* transport::In(ifstream &ifst) {
	transport *sp;
	int k;
	ifst >> k;
	switch (k) {
	case 1:
		sp = new bus; break;
	case 2:
		sp = new truck; break;
	case 3:
		sp = new car; break;
	default:
		return 0;
	}
	sp->InData(ifst);

	return sp;
}
