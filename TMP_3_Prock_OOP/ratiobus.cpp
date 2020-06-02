#include "bus.h"
double bus::ratio()
{
	return (75 * size) / getPowerEngine();
}