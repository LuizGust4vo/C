#include <stdio.h>

int main ()
{

    int x1, y1, x2, y2, dx, dy, d;

    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);

    dx = x1 - x2;
    dy = y1 - y2;

    if (dx < 0) dx = dx * -1;
    if (dy < 0) dy = dy * -1;

    d = dx + dy;

    printf ("%d\n", d);

    return 0;
}
