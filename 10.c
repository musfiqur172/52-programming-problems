#include <stdio.h>

int main()
{
    int t, r1, r2, b, ball_playd;
    double current_rr, required_rr;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &r1, &r2, &b);

        ball_playd = 300 - b;
        current_rr = ((r2 * 1.0) / ball_playd) * 6;
        required_rr = (((r1 - r2 + 1) * 1.0) / b) * 6;

        printf("%0.2lf %0.2lf\n", current_rr, required_rr);
    }
    return 0;
}