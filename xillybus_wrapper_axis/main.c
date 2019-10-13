#include <math.h>
#include <stdint.h>

extern float sinf(float);

int mycalc(int a, float *x2) {
  *x2 = sinf(*x2);
  return a + 1;
}

void xillybus_wrapper_axis(int *data_in, int *data_out)
{
	#pragma AP interface axis port=data_in
	#pragma AP interface axis port=data_out
	#pragma AP interface ap_ctrl_none port=return

	uint32_t x1, tmp, y1;
	float x2, y2;

	// Handle input data
	x1 = *data_in++;
	tmp = *data_in++;
	x2 = *((float *) &tmp); // Convert uint32_t to float

	// Run the calculations
	y1 = mycalc(x1, &x2);
	y2 = x2; // This helps HLS in the conversion below

	// Handle output data
	tmp = *((uint32_t *) &y2); // Convert float to uint32_t
	*data_out++ = y1;
	*data_out++ = tmp;
}
