#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
void scale();
void translate();
void rotate();
void main()
{
    int ch, gm, gd = DETECT;
    clrscr();
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    while (1)
    {
        printf("\n1. Translation");
        printf("\n2. Scaling");
        printf("\n3. Rotating");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            translate();
            getch();

            cleardevice();
            break;
        case 2:
            scale();
            getch();
            cleardevice();
            break;
        case 3:
            rotate();
            getch();
            cleardevice();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice");
            break;
        }
        cleardevice();
    }
    closegraph();
}
void scale()
{
    int x[3], y[3], sx, sy, i;
    printf("Enter the coordinates for triangle: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    printf("\nEnter the sx and sy values for triangle: ");
    scanf("%d %d", &sx, &sy);
    cleardevice();
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);

    for (i = 0; i < 3; i++)
    {
        x[i] = sx * x[i];
        y[i] = sy * y[i];
    }
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}
void translate()
{
    int x[3], y[3], tx, ty, i;
    printf("Enter the coordinates for triangle: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    printf("\nEnter the tx and ty values for triangle: ");
    scanf("%d %d", &tx, &ty);
    cleardevice();
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);

    for (i = 0; i < 3; i++)
    {
        x[i] = tx + x[i];
        y[i] = ty + y[i];
    }
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}
void rotate()
{
    int x[3], y[3], theta, i, tempx, tempy;
    printf("Enter the coordinates for triangle: ");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }

    printf("\nEnter the angle of rotation: ");
    scanf("%d", &theta);
    cleardevice();

    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
    for (i = 0; i < 3; i++)
    {
        tempx = x[i];
        tempy = y[i];
        x[i] = floor(tempx * cos(theta * 3.14 / 180) - tempy * sin(theta * 3.14 / 180));
        y[i] = floor(tempx * sin(theta * 3.14 / 180) + tempy * cos(theta * 3.14 / 180));
    }
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}
