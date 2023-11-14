#include <stdio.h>
#include <ctype.h>
#include <math.h>//;ibraries


float volumefunction(float length, float width, float height);
void mass();
int barrelsneeded();//prototypwe arrays
float length, width, height;//global vars
void main() {

	float volume;//will store volume
	//get pool dimensions from user
	puts("Enter pool length (m)");
	scanf_s("%f", &length);

	puts("Enter pool width (m)");
	scanf_s("%f", &width);

	puts("Enter pool height (m)");
	scanf_s("%f", &height);
	volume = volumefunction(length, width, height);
	
	//exextute functions and print to screen
	printf("Volume is %f \n", volume);
	mass();
	printf("\nBarrels needed is %d \n", barrelsneeded());

}

float volumefunction(float length, float width, float height){
	float volume = length * width * height;//math to calc volume
	return volume;// saves to the code
}

void mass() {
	//Note for water: mass = volume * 1000.
	float volume;
	volume = volumefunction(length, width, height);
	float mass = volume * 100;//math for mass
	printf("Mass is : %f kg", mass);
}


int barrelsneeded() {
	int barrelamount;
	float barrelsize = 0.43;//declare the volume of barrel in m cubed
	float volume = volumefunction(length, width, height);//read i volume from volume func
	barrelamount = ceil(volume / barrelsize);//find out how many barrels and round up
	return barrelamount;//save to the code
}