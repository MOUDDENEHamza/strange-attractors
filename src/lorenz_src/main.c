#include <stdio.h>
#include "input.h"
#include "calcul.h"
#include "gnuplot.h"
#include "file.h"
#include "displayShell.h"
#include "structure.h"

/*main function : Lorenz system */
int main(int argc, char *argv[]){
	/*initialize all variables*/
	double dt;
	double tmax;
        double i = 0;
	
	/*display : the init bar with the dynamic system that will be used*/
	display_init();

	/*input : initial coordinates x, y, z*/
	coordinates(p.position);

	/*input : constants σ, ρ, β*/
	constants(&para.sigma, &para.rho, &para.beta);

	/*calculation and display of speed dx dy dz*/
	initial_speed(p.speed, p.position, &para.sigma, &para.rho, &para.beta);
	
	/*display : initial speed*/
	display_speed(p.speed);

	/*input : increment dt*/
	increment(&dt);

	/*input : break time Tmax*/
	break_time(&tmax, &dt);
	
	/*display : the coordinates that will be stored in lorenz.dat*/
	display_coordinates(p.position, &i);
	
	/*initialize file, update position, write to file then close it*/
<<<<<<< HEAD
	file(p.position, p.speed,  &i);
=======
<<<<<<< HEAD
	file(p.position, p.speed,  &i);
=======
	file(p.position, &i);
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0

	for(i = dt;i <= tmax; i += dt){
		/*calcul : the new position at every moment t*/
		instant_speed(p.speed_t, p.speed, p.position, &para.sigma, &para.rho, &para.beta, &dt);
		/*display : the new position at every moment t*/
		display_coordinates(p.position, &i);
		/*write to file the new position at every moment t then close it*/
<<<<<<< HEAD
		file(p.position, p.speed_t, &i);
		/*file(p.speed_t, &i);*/
=======
<<<<<<< HEAD
		file(p.position, p.speed_t, &i);
		/*file(p.speed_t, &i);*/
=======
		file(p.position, &i);
		file(p.speed_t, &i);
>>>>>>> 5a0df479aff02daaf2b9f78329f3e84130949a40
>>>>>>> 4f526fdc1eff11a7a7380cf20e69a0cb137160b0
	}

	/*run : lunch gnuplot from main.c*/
	gnuplot_point();
	gnuplot_vector();
	
	/*display : the end bar*/
	display_end();

	return 0;
}
