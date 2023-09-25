#include <stdio.h>

double max_2(double,double), max_3(double,double,double);

double max_4(double x,double y,double z,double m);

int main(){

	double a,b,c,d;

	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

	//max of a,b

	printf("The max of a,b is %.2f\n",max_2(a,b));

	//max of b,c,d

	printf("The max of b,c,d is %.2f\n",max_3(b,c,d));

	//max 0f a,b,c,d

	printf("The max of a,b,c,d is %.2f\n",max_4(a,b,c,d));

	return 0;

}



double max_2(double x,double y){

	if(x>y)
	return x;
	else
	return y; 

}

double max_3(double x,double y,double z){

		if(max_2(x,y)==max_2(x,z))
		
			return x;
		else 
		return max_2(x,z);

	

}

double max_4(double x,double y,double z,double m){

	if(max_3(x,y,z)==max_3(x,y,m))
	return max_2(x,y);
	else 
	return max_2(m,z);
}
