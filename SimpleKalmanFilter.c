/*
	18.06.2021
	https://github.com/Xusniyor
	Programmer:
	@Xusniyor
	@Uzbekistan
	@SimpleKalmanFilter
*/
#include "SimpleKalmanFilter.h"
#include <math.h>

float SimpleKalmanFilter(SimpleKalmanFilterTypeDef * hFilter, float newValue)
{
  hFilter->_kalman_gain      = hFilter->_err_estimate        / (hFilter->_err_estimate  +  hFilter->_err_measure);
  hFilter->_current_estimate = hFilter->_last_estimate       +  hFilter->_kalman_gain   * (newValue - hFilter->_last_estimate);
  hFilter->_err_estimate     = (1.0 - hFilter->_kalman_gain) *  hFilter->_err_estimate  +  fabs(hFilter->_last_estimate - hFilter->_current_estimate) * hFilter->_q;
  hFilter->_last_estimate    = hFilter->_current_estimate;

  return hFilter->_current_estimate;
}
