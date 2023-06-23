#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double Volume(struct Box* boxPtr) {
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;
    return volume;
}

double SurfaceArea(struct Box* boxPtr) {
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width +
                             boxPtr->length * boxPtr->height +
                             boxPtr->width * boxPtr->height);
    return surfaceArea;
}

int main() {
  
    struct Box myBox;
    
    myBox.length = 2.5;
    myBox.width = 1.8;
    myBox.height = 3.2;
    
   
    struct Box* boxPtr = &myBox;
    
    double volume = Volume(boxPtr);
    double surfaceArea = SurfaceArea(boxPtr);
   
    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
    
    return 0;
}

