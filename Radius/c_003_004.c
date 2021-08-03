#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main() {
	float f_003_004(int side, int radius)
	{
		int a=side;
		int r=radius;
		if(a<=0 || r<=0)
		{
			return -1;
		}
		float result;
		float s_1=a*a;
		float s_2=M_PI*r*r;
		if (s_1>s_2)
		{
			result=(s_2/10000);

		}
		else
		{
			result=(s_1/10000);
		}	
		return result;
	}
	float result = f_003_004(10,98);
	printf ("%f", result);
}	
