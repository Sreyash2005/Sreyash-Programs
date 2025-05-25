# include<stdio.h>

// int main() {

//     char x = '1';
//     printf("%d", (int)x );
    
//     return 0;
// }




// int main() {

//     int x = 123456789;
//     printf("%d", x);

//     return 0;
// }





// int main() {
//     char star = '*';
//     printf("%c", star * 5);
//     return 0;
// }




// int main() {                                           
//     int num;                                           
//     printf("Enter number: ");
//     scanf("%d", &num);
//     printf("%d", num);
//     return 0;
// }



// int main() {
//     float num = 100;
//     printf("%d", num);
//     return 0;
// }


// int main() {
//     int age, *ptr;
//     ptr = &age;
//     *ptr = 22;

//     printf("%d %u", age, ptr);
//     return 0;
// }


// int main() {
//     printf("Enter two inputs: ");
//     int a,b,sum;
//     scanf("%d %d", &a, &b);

//     sum = a + b;
//     printf("Sum = %d\n", sum);
    
//     return 0;
// }


// int main() {
//     int a = 9, b = 5;
//     int *ptr_a = &a;
//     int *ptr_b = &b;

//     printf("%u %u", ptr_a, ptr_b);
//     return 0;
// } 


// int main() {
//     float num1 = 10.5, num2 = 11;

//     float *ptr_a = &num1;
//     float *ptr_b = &num2;

//     if (ptr_a > ptr_b) {
//         printf("%f is maximum\n", *ptr_a);
//     } else if (ptr_b > ptr_a) {
//         printf("%f is maximum\n", *ptr_b);
//     }
//     else {
//         printf("Both are equal\n");
//     }
//     return 0;
// }


// int main() {
//     printf("%2d\n", 8);
//     printf("%2d\n", 9);
//     printf("%2d\n", 10);
// }


// int main() {
//     printf("%.2f", (float)9/(float)5);
//     return 0;
// }


// int main() {
//     int a = 22, b = 22;
//     int *ptr_a = &a;
//     int *ptr_b = &b;

//     printf("%u %u", ptr_a, ptr_b);
//     return 0;
// }


// int main() {
//     int num1, num2, temp;
    
//     printf("Enter num1: ");
//     scanf("%d", &num1);

//     printf("Enter num2: ");
//     scanf("%d", &num2);

//     printf("Before swapping\nnum1 = %d, num2 = %d\n", num1, num2);

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

//     printf("After swapping\nnum1 = %d, num2 = %d\n", num1, num2);

//     return 0; 
// }


// int main() {
//     float p = 60;
//     printf("%f", p);

//     return 0;
// }


// int main() {
//     int hour, min, sec, time;
//     printf("Enter the time: ");
//     scanf("%d", &time);
    
//     hour = time / (60 * 60);
//     min = (time % (60 * 60)) / 60;
//     sec = ((time % (60 * 60)) % 60) / 60;
    
//     printf("%d second = %d hour %d minutes %d seconds\n", time, hour, min, sec);
    
//     return 0;
// }


// int main() {
//     float buying_price, marker_price, discount, discount_price, profit_loss, selling_price;
//     printf("Enter the buying price: ");
//     scanf("%f", &buying_price);
    
//     printf("Enter the market price: ");
//     scanf("%f", &marker_price);
    
//     printf("Enter the discount: ");
//     scanf("%f", &discount);
    
//     discount_price = marker_price * (discount / 100.00);
//     selling_price = marker_price - discount_price;
//     profit_loss = buying_price - selling_price;
    
//     if (profit_loss > 0) {
//         printf("Seller made a loss of %.2f % \n", profit_loss / marker_price * 100);
//     } 
//     else if (profit_loss < 0) {
//         printf("Seller made a profit of %.2f % \n", -(profit_loss / marker_price * 100));
//     }
//     else {
//         printf("There is no profit or loss");
//     }
//     return 0;
// }


// int main() {
//     int dist, Km, meter;
//     printf("Enter the distance: ");
//     scanf("%d", &dist);
    
//     Km = dist / 1000;
//     meter = dist % 1000;
    
//     printf("%d meter = %d Km %d meters\n", dist, Km, meter);
    
//     return 0;
// }


// int main() {
//     int num, sum, fst_dig, lst_dig;
//     printf("Enter the number: ");
//     scanf("%d", &num);
    
//     fst_dig = num / 100000;
//     lst_dig = num % 10;
    
//     sum = fst_dig + lst_dig;
    
//     printf("Sum of digits is: %d\n", sum);
    
//     return 0;
// }


// int main() {
//     int num, a, b, c, sum;
//     printf("Enter the number: ");
//     scanf("%d", &num);
    
//     a = num % 10;
//     b = (num / 10) % 10;
//     c = num / 100;
    
//     sum = a + b + c;
//     printf("Sum of digits is: %d\n", sum);
    
//     return 0;
// }



// int main() {
//     int n, i, f = 1;
//     printf ("Enter a number: ");
//     scanf("%d", &n);

//     for (i = 2; i <= n; i++) {
//         f *= i;
//     }

//     printf("Factorial is %d\n", f);
//     return 0;
// }


// int main() {
//     float a = 1;

//     printf("%d", sizeof(a));

//     return 0;
// }

// int main() {
//     int arr[3] = {1, 2, 3};

//     printf("%d", arr[3]);

//     return 0;
// }



int Sum(int n);

int main() {
    int sum, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sum = Sum(n);

    printf("%d", sum);
    return 0;
}

int Sum(int n) {
    if (n == 0) {
        return 0;
    }
    int s1, s2;
    
    s1 = Sum(n - 1);
    s2 = s1 + n;

    return s2;
}