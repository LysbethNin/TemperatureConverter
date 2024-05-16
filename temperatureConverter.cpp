#include "temperatureConverter.h"


/**
 * Convert celsius to fahrenheit.
 *
 * @param[in]  value      value in fahrenheit .
 * @param[out] out        Result of the treatment in celsius.

 */
void convert_temperature_FtoC(double value, double& out){
	out = (value - 32) * 5 / 9;
}
/**
 * Convert celsius to fahrenheit.
 *
 * @param[in]  value      value in celsius .
 * @param[out] out        Result of the treatment in Fahrenheit.

 */
void convert_temperature_CtoF(double value, double& out)
{
	out = value * (9 / 5) + 32;
}
