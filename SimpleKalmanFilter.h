/*
	18.06.2021
	https://github.com/Xusniyor
	Programmer:
	@Xusniyor
	@Uzbekistan
	@SimpleKalmanFilter
*/
#ifndef __SimpleKalmanFilter_H_
#define __SimpleKalmanFilter_H_

#ifdef __cplusplus
 extern "C" {
#endif

typedef struct
{
	float _q;
	float _err_measure;
	float _err_estimate;
	float _current_estimate;
	float _last_estimate;
	float _kalman_gain;
} SimpleKalmanFilterTypeDef;

float SimpleKalmanFilter(SimpleKalmanFilterTypeDef * hFilter, float newValue);

#ifdef __cplusplus
}
#endif

#endif /*__SimpleKalmanFilter_H_*/
