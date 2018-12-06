#ifndef _STRUCT_H_
#define _STRUCT_H_

/*we will create a common structure between all dynamic systems that contains position and speed*/
struct point{
	double position[3];
	double speed[3];
	double speed_t[3];
	double dt;
        double tmax;
}p;

/*we will create a structure between all dynamic systems that contains parametrs*/
struct parameter{
	double sigma;
	double rho;
	double beta;
	double g;
	double l;
	double gamma;
	double m;
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
}para;

#endif
