#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapFields(struct Point* point1, struct Point* point2) {
   
    int tempX = point1->x;
    point1->x = point2->x;
    point2->x = tempX;
    
    
    int tempY = point1->y;
    point1->y = point2->y;
    point2->y = tempY;
}

int main() {
    struct Point point1, point2;
    
    printf("Enter the values for point1 (x y): ");
    scanf("%d %d", &point1.x, &point1.y);
    
    printf("Enter the values for point2 (x y): ");
    scanf("%d %d", &point2.x, &point2.y);
    
    printf("\nBefore swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);
    
    swapFields(&point1, &point2);
    
    printf("\nAfter swapping:\n");
    printf("Point1: (%d, %d)\n", point1.x, point1.y);
    printf("Point2: (%d, %d)\n", point2.x, point2.y);
    
    return 0;
}

