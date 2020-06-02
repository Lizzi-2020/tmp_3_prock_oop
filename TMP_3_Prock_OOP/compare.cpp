#include "transport.h"
bool transport::Compare(transport &other)
{
	return ratio()  < other.ratio();
}