/*
# include<stdio.h>                                      // Addition of two numbers

int main(){                               

    int fst_num, scnd_num;
    
    printf("Enter 1st number: ");
    scanf("%d", &fst_num);

    printf("Enter 2nd number: ");
    scanf("%d", &scnd_num);
    
    printf("sum of 1st & 2nd no. is: %d", fst_num + scnd_num);                                            
    return 0;                                               
} 
*/                                                                         




/*
#include <stdio.h>

int main() {
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(char));
    printf("%ld\n", sizeof(float));
    printf("%ld\n", sizeof(long int));
    printf("%ld\n", sizeof(double));
    return 0;
}
*/




/*
# include<stdio.h>

int main() {
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Entered number is: %d", num);
    return 0;
}
*/




/*
# include<stdio.h>                                      // Area of square
# include<math.h>

int main() {

    int side;
    printf("Enter side of square: ");
    scanf("%d", &side);

    int power = pow(side, 2);

    printf("Area of square is: %d", power);
    return 0;

}  
*/





/*
#include <stdio.h>                                      // Area of circle
#include <math.h>
#define pi 3.1415                                       // define a constant

int main() {

    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * pow(radius, 2);
    printf("Area of circle is: %f", area);
    return 0;
    
}
*/




/*
# include<stdio.h>                                        // fahrenheit to Celsius

int main() {
    
    float fahrenheit;
    printf("Enter temp. in F: ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5/9;
    printf("Temp. in C is: %f", celsius);
    return 0;

}
*/




/*
# include<stdio.h>
# include<math.h>

int main() {

    int a = 10;
    int b = a + 10;
    
    int x = 5.4, y, z = 23;
    

    float quotient = (float)z / 5;
    float remainder = -a % 5;
    printf("%f %f %f", quotient, remainder, x);
    
    return 10000;

}
*/




/*
# include<stdio.h>

int main() {

    printf("%d", 5 * (2 / 2) * 3);
    return 0;

}
*/




/*
# include<stdio.h>                                              // Check even or odd

int main() {

    int Sunday = 1;
    int Snowing = 1;
    int Raining = 0;

    printf("%d \n", Sunday && Snowing);
    printf("%d \n", Sunday || Raining);
    return 0;

}
*/




/*
# include<stdio.h>                                    // Avg od three nums

int main() {

    int x, y, z;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    
    int avg = (x + y + z)/3;
    printf("Avg of the numbers is: %d", avg);
    
    return 0;

}
*/




/*
# include<stdio.h>                                                     //Char is dig or not

int main() {

    char x;
    printf("Enter a single character: ");
    scanf("%c", &x);

    printf("%d", ((int)x > -10) && ((int)x < 10));

    return 0;

}
*/




/*
#include <stdio.h>

int main() {
    int A[5] = {2, 4, 6, 8, 10}, i;

    for (i = 0; i < 5; i++) {
        printf("%d ", i[A]);
    }
    
    return 0;
}
*/
