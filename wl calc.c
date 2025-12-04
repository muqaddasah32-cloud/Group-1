#include<stdio.h>
#include<math.h>
int main(){
int m;
double theta,d;
printf("Order, m = ",m);
scanf("%d",&m);
printf("Angle, theta = ",theta);
scanf("%lf",&theta);
printf("Slit separation, d = ",d);
scanf("%lf",&d);
theta=theta*3.1416/180.0;
d=d*1e-6;
double lambda=(d*sin(theta))/m;
lambda=lambda*1e9;
printf("Wavelength, lambda = %.2f nm\n",lambda);
if(lambda>=380 && lambda<450)
    printf("Color of light =\033[38;2;128;0;255m Violet\033[0m\n");
else if(lambda>=450 && lambda<485)
    printf("Color of light =\033[38;2;0;0;255m Blue\033[0m\n");
else if(lambda>=485 && lambda<500)
    printf("Color of light =\033[38;2;0;255;255m Cyan\033[0m\n");
else if(lambda>=500 && lambda<565)
    printf("Color of light =\033[38;2;0;255;0m Green\033[0m\n");
else if (lambda>=565 && lambda<590)
    printf("Color of light =\033[38;2;255;255;0m Yellow\033[0m\n");
else if (lambda>=590 && lambda<625)
    printf("Color of light =\033[38;2;255;165;0m Orange\033[0m\n");
else if (lambda>=625 && lambda<=750)
    printf("Color of light =\033[38;2;255;0;0m Red\033[0m\n"); 
else
  printf("color of light = Not in visible range\n");
return 0;
}











