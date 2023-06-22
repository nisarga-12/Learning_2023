#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};

double calculateDistance(struct Point p1, struct Point p2) {
    double distance;
    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int main() {
    struct Point p1, p2;
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Enter coordinates of point 2 (x y): ");
    scanf("%lf %lf", &p2.x, &p2.y);

    double distance = calculateDistance(p1, p2);
    printf("Distance between the two points: %.2lf\n", distance);

    return 0;
}
