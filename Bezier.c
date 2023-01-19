

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main()
{
    int gd = DETECT, gm;
    int i, x[4], y[4];
    double xt, yt, t;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Enter the four control points for Bezier Curve\n");
    for (i = 0; i < 4; i++)
        scanf("%d %d", &x[i], &y[i]);
    for (t = 0.0; t < 1.0; t = t + 0.0005)
    {
        xt = pow(1 - t, 3) * x[0] + t * 3 * pow(1 - t, 2) * x[1] + 3 * (1 - t) * pow(t, 2) * x[2] + pow(t, 3) * x[3];
        yt = pow(1 - t, 3) * y[0] + t * 3 * pow(1 - t, 2) * y[1] + 3 * (1 - t) * pow(t, 2) * y[2] + pow(t, 3) * y[3];
        putpixel(xt, yt, RED);
    }
    for (i = 0; i < 4; i++)
        putpixel(x[i], y[i], YELLOW);
    getch();
    closegraph();
}
