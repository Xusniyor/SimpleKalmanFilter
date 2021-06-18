/*
	18.06.2021
	https://github.com/Xusniyor
	Programmer:
	@Xusniyor
	@Uzbekistan
	@SimpleKalmanFilter
	@example
*/
#include "SimpleKalmanFilter.h"

static SimpleKalmanFilterTypeDef voltageFilter = {0.1, 0.8, 0.8, 0.0, 0.0, 0.0};
static SimpleKalmanFilterTypeDef currentFilter = {0.1, 0.8, 0.8, 0.0, 0.0, 0.0};

uint16_t busVoltag = 0;
uint16_t busCurrent = 0;

int main(void)
{
	while (1)
	{
		busVoltag  = SimpleKalmanFilter(&voltageFilter, analogRead(0));
		busCurrent = SimpleKalmanFilter(&voltageFilter, analogRead(1));
	}
}
