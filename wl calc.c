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
  printf("Color of light = Violet\n");
else if(lambda>=450 && lambda<485)
  printf("Color of light = Blue\n");    
else if(lambda>=485 && lambda<500)
  printf("Color of light = Cyan\n"); 
else if(lambda>=500 && lambda<565)
  printf("Color of light = Green\n");
else if(lambda>=565 && lambda<590)
  printf("Color of light = Yellow\n"); 
else if(lambda>=590 && lambda<625)
  printf("Color of light = Orange\n"); 
else if(lambda>=625 && lambda<=750)
  printf("Color of light = Red\n"); 
else
  printf("color of light = Not in visible range\n");
return 0;
}









