// C Program Volume Of Cylinder and Sphere
#include <stdio.h>
#include <conio.h>
void main()
{

	float vol, r, h, v;
	printf("enter radius: ");
	scanf("%f", &r);
	printf("enter height: ");
	scanf("%f", &h);

	vol = (22 * r * r * h) / 7;
	printf("Volume of Cylinder: %f\n", vol);

	v = (4 * 22 * r * r * r) / (7 * 3);
	printf("Volume of Sphere: %f\n", v);
	getch();
}