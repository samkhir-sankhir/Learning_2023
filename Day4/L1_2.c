#include <stdio.h>

struct Complex {
    float a;
    float b;
};

void readComplex(struct Complex* complex) {
    printf("Enter a part: ");
    scanf("%f", &complex->a);
    
    printf("Enter b part: ");
    scanf("%f", &complex->b);
}

void writeComplex(struct Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.a, complex.b);
}

struct Complex addComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.a = complex1.a + complex2.a;
    result.b = complex1.b + complex2.b;
    return result;
}

struct Complex multiplyComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.a = complex1.a * complex2.a - complex1.b * complex2.b;
    result.b = complex1.a * complex2.b + complex1.b * complex2.a;
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;
    
    printf("Enter first complex number:\n");
    readComplex(&complex1);
    
    printf("Enter second complex number:\n");
    readComplex(&complex2);
    
    printf("\nFirst complex number:\n");
    writeComplex(complex1);
    
    printf("Second complex number:\n");
    writeComplex(complex2);
    
    sum = addComplex(complex1, complex2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);
    
    product = multiplyComplex(complex1, complex2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);
    
    return 0;
}

