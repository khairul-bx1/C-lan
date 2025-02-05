// #include <stdio.h>

// int main() {
//     printf("*\t                        *\t\n");
//     printf("*\t*\t                    *\t*\t\n");
//     printf("*\t*\t*\t                *\t*\t*\t\n");
//     printf("*\t*\t*\t*\t            *\t*\t*\t*\t\n");
//     printf("*\t*\t*\t*\t*\t        *\t*\t*\t*\t*\t\n");

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     char name[50];
//     printf("Enter your name : ");
//     scanf("%s", name);

//     printf("Welcome %s to KG Coding", name);
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a = 5;
//     int b = 6;
//     printf(" A is %d\n", a);
//     printf("B is %d", b);
    
//     return 0;

// }



// #include <stdio.h>
// int main() {
//     int a;
//     float b;
//     double c;
//     char d;

//     printf("the size of int is %zu\n", sizeof(a));
//     printf("the size of float is %zu\n", sizeof(b));
//     printf("the size of double is %zu\n", sizeof(c));
//     printf("the size of char is %zu\n", sizeof(d));

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     char first[10];
//     char last[20];
//     int age;
//     printf("Enter your name first name : ");
//     scanf("%s", first);
//     printf("Enter your last name : ");
//     scanf("%s", last);
//     printf("Enter your age : ");
//     scanf("%d", &age);

//     printf("You name is %s %s and your age is %d\n", first, last, age);
//     return 0;
// }




// #include <stdio.h>
// int main() {
//     float side, area;
//     printf("enter your lenght of side : ");
//     scanf("%f", &side);
//     area = side * side;

//     printf("Your area of a square is : %f\n", area);
//     return 0;
// }



// #include <stdio.h> 
// int main() {
//     float a , rad;
//     printf("enter your radius : ");
//     scanf("%f", &a);

//     rad = 2 * 3.1416 * a;
//     printf("Circumference of circle is : %f", rad);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     float a, rad;
//     printf("Enter your radius : ");
//     scanf("%f", &a);

//     rad = 3.1416 * a * a;
//     printf("area of a circle is : %f", rad );
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a, b, c;
//     printf("enter your first number : ");
//     scanf("%d", &a);
//     printf("enter your second number : ");
//     scanf("%d", &b);

//     c = a;
//     a = b;
//     b = c;
//     printf("After swapping\n");
//     printf("first number is %d\n", a);
//     printf("Second number is %d\n", b);
//     return 0;
// }





// #include <stdio.h>
// int main() {
//     int a , b, sum, abs, mul, div, mod;
//     printf("enter a number : ");
//     scanf("%d", &a);
//     printf("enter another number : ");
//     scanf("%d", &b);

//     sum = a+b;
//     abs = a - b;
//     mul = a * b;
//     div = a / b;
//     mod = a % b;

//     printf("sum is %d", sum);
//     printf("abs is %d", abs);
//     printf("Mul is %d", mul);
//     printf("div is %d", div);
//     printf("Mod is %d", mod);

//     return 0;
// }





// #include <stdio.h>
// int main() {
//     int a = 50;
//     float b = (float) a;

//     printf("Int value is %d\n", a);
//     printf("float value is %f", b);
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     float a , b, product;
//     printf("enter a number : ");
//     scanf("%f", &a);
//     printf("Enter a number : ");
//     scanf("%f", &b);

//     product = a * b;
//     printf("Product of two number is : %f", product);

//     return 0;
// }



// #include <stdio.h>
// int main() {
//     float a, b, c, d, perimeter;
//     printf("enter your side : ");
//     scanf("%f %f %f %f", &a, &b, &c, &d);

//     perimeter = a + b + c + d;
//     printf("perimeter of retangle is %f", perimeter);
//     return 0;

// }



// #include <stdio.h>
// int main() {
//     float a , b, area;
//     printf("enter your area : ");
//     scanf("%f", &a);
//     printf("Enter your area : ");
//     scanf("%f", &b);

//     area = 0.5 * a * b;
//     printf("areea is : %f", area);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     float p, t, r, interest;
//     printf("enter your p : ");
//     scanf("%f", &p);
//     printf("Enter your t : ");
//     scanf("%f", &t);
//     printf("enter your r : ");
//     scanf("%f", &r);

//     interest = (p * t * r)/100;
//     printf("Simple interest is : %f", interest);
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// int main() {
//     float p, t, r, interest;
//     printf("enter your p : ");
//     scanf("%f", &p);
//     printf("Enter your t : ");
//     scanf("%f", &t);
//     printf("enter your r : ");
//     scanf("%f", &r);

//     interest = p * pow((1 + r / 100), t) - p;
//     printf("Compound interest is %f: ", interest);
//     return 0;
// }




// #include <stdio.h>
// int main() {
//     float a, c;
//     printf("enter your far : ");
//     scanf("%f", &a);

//     c = ( a - 32) * 5/9;
//     printf("celsius is : %f", c);
//     return 0;
// }