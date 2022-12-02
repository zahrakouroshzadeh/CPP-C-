#define _USE_MATH_DEFINES
#include <iomanip>
#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	double n;
	cin>>n;

    double cosx, real_cos;
	double accuracy = 0.0001;

	// to convert degree to radian
	n = n * (M_PI / 180.0);

	cosx = 1;

	// actual value of cos(n)
	real_cos = cos(n);

	//counter
	int i = 1;

	// to calculate factorial 2i and n to power of 2i
	double factor = 1, power = 1;

	while(1){
        factor = factor * (2 * i - 1) * (2 * i);
        power = power * n * n;
		cosx += pow(-1,i)*(power)/factor;
		i = i + 1;
		if(accuracy > fabs(real_cos - cosx))
            break;
	}

	cout <<"calculated cos: " <<cosx<<endl;
	cout<<"actual value of cos: " <<real_cos<<endl;
	std::cout <<"error: "<< std::fixed << std::setprecision(8) << fabs(real_cos - cosx);
}
