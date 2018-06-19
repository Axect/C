#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define G 9.82

int main(int argc, char const *argv[])
{
    double t = 0;
    double theta;
    double v0, v0x, v0y;
    double xt, yt, vx, vy;

    printf(" Insert the launching angle in radiants: ");
    scanf("%lf", &theta);
    printf("\n Insert the initital velocity in m/sec: ");
    scanf("%lf", &v0);
    printf("\n Insert the time value t: ");
    scanf("%lf", &t);

    v0x = v0 * cos(theta);
    v0y = v0 * sin(theta);
    vx = v0x;
    vy = v0y - G * t;

    xt = vx * t;
    yt = v0y * t - 0.5 * G * pow(t, 2.0);
    printf("\n the coordinates at time %lf are x = %lf, y = %lf\n", t, xt, yt);
    return 0;
}
