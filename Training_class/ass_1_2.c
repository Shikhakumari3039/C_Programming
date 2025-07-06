//27 write a program to check whether given number is posittive or negative.
#include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the numbers: ");
//     scanf("%d", &a);
//     if(a>=0){
//         printf("Positive Numbers");
//     }
//     else{
//         printf("Negative Number");
//     }
// }

//28 write a proram to find whether a given year is a leap year or not.
// int main(){
//     int year;
//     printf("Enter the year: ");
//     scanf("%d", &year);
//     if(year%4==0 && year%400==00 || year%100==0){
//         printf("Leap year");
//     }
//     else{
//         printf("Not Leap year");
//     }
// }

// 29 write a program to read the age of a candidate and detrmine whether it is eligible for casting his or his own vote.
// int main(){
//     int a;
//     printf("Enter the age: ");
//     scanf("%d", &a);
//     if(a>=18){
//         printf("Candidates are eligible for votes");
//     }
//     else{
//         printf("Not eligible for votes");
//     }
// } 

// 30 write a program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
// int main(){
//     int m, n;
//     printf("Enter the integers: ");
//     scanf("%d", &m);
//     if(m>0){
//         n=1;
//     }
//     else if (m==0){
//         n=0;
//     }
//     else{
//         n=-1;
//     }
//     printf("n= %d", n);

// }

// 31 write a program to accept the height of a person in cm and categorize the person according to their height
// int main() {
//     float height;
//     printf("Enter the height of the person: ");
//     scanf("%f", &height);
//     if (height < 150) {
//         printf("The person is Short");
//     } 
//     else if (height >= 150 && height <= 165) {
//         printf("The person has Medium Height");
//     }
//     else if (height > 165 && height <= 190) {
//         printf("The person is Tall");
//     } 
//     else {
//         printf("The person is Very Tall");
//     }
// }

// 32 write a program to find the largest of three numbers
// int main(){
//     int a, b, c;
//     printf("Enter the number: ");
//     scanf("%d%d%d", &a, &b, &c);
//     if(a>=b && a>=c){
//         printf("Largest number = %d", a);
//     }
//     else if(b>=a && b>=c){
//         printf("Largest number = %d", b);
//     }
//     else{
//         printf("Largest number =%d", c);
//     }
// }

// 33 write a program to accept a coordinates point in a XY coordinate system and determine in which quadrant the coordinate point lies.
// int main(){
//     int x, y;
//     printf("Enter the coordinates: ");
//     scanf("%d%d", &x, &y);
//     if (x > 0 && y > 0) {
//         printf("Quadrant I");
//     } else if (x < 0 && y > 0) {
//         printf("Quadrant II");
//     } else if (x < 0 && y < 0) {
//         printf("Quadrant III");
//     } else if (x > 0 && y < 0) {
//         printf("Quadrant IV");
//     } else if (x == 0 && y == 0) {
//         printf("Origin");
//     } else if (x == 0) {
//         printf("Y-axis");
//     } else if (y == 0) {
//         printf("X-axis");
//     }
// }

//34 write a program to find the roots of quadratic equation.
// #include<math.h>
// int main(){
//     float a, b, c, x1, x2, d;
//     printf("Enter the number:");
//     scanf("%f%f%f", &a,&b,&c);
//     d=b*b-4*a*c;
//     if(d==0){
//         printf("roots are real and equal\n");
//         x1=-b/(2*a);
//         x2=x1;
//         printf("Root1=%f\n",x1);
//         printf("Root2= %f\n",x2);

//     }
//     else if(d>0){
//         printf("roots are real and distinct");
//         x1=(-b+sqrt(d))/(2*a);
//         x2=(-b-sqrt(d))/(2*a);
//         printf("Root1=%f\n",x1);
//         printf("Root2= %f\n",x2);
//     }
//     else{
//         printf("roots are imaginary ");
//     }
// }

// 35 write a program simple calculator using switch case.
// void main(){
//     int choice;
//     float a,b;
//     printf("Press 1 for addition !!!\n");
//     printf("Press 2 for subtraction !!!\n");
//     printf("Press 3 for multiplication !!!\n");
//     printf("Press 4 for division !!!\n");
//     printf("Enter your choice");
//     scanf("%d",&choice);
//     switch(choice){
//         case :1
//         printf("Enter the value of a and b");
//         scanf("%f%f", &a, &b);
//         printf("sum=%f",a+b);
//         break;
//         case :2
//         printf("Enter the value of a and b");
//         scanf("%f%f", &a, &b);
//         printf("sub=%f",a-b);
//         break;
//         case :3
//         printf("Enter the value of a and b");
//         scanf("%f%f", &a, &b);
//         printf("mul=%f",a*b);
//         break;
//         case :4
//         printf("Enter the value of a and b");
//         scanf("%f%f", &a, &b);
//         printf("div=%f",a/b);
//         break;
//         default:
//         printf("Invaild");
//     }
// }

// 36 Simulate a very basic ATM. Assume a fixed initial balance of 1000.00. Ask the user if they want to 'D' (Deposit) or 'W' (Withdraw)
//If 'D', ask for the deposit amount and add it to the balance.
//If 'W', ask for the withdrawal amount. Check if the withdrawal amount is less than or equal to the balance. If yes, proceed with withdrawal: otherwise, print "Insuficient balance 
//For any other input, print "Invalid choice".
//Alter the transaction (or error), always print the current balance
// int main() {
//     float balance = 1000.00;
//     char choice;
//     float amount;
//     printf("Welcome to the ATM");
//     printf("Enter your choice: ");
//     scanf(" %c", &choice);  
//     switch(choice) {
//         case 'D':
//         case 'd':
//             printf("Enter amount to deposit: ");
//             scanf("%f", &amount);
//             if (amount > 0) {
//                 balance += amount;
//             } else {
//                 printf("Invalid deposit amount");
//             }
//             break;
//         case 'W':
//         case 'w':
//             printf("Enter amount to withdraw: ");
//             scanf("%f", &amount);
//             if (amount <= balance && amount > 0) {
//                 balance -= amount;
//             } else if (amount <= 0) {
//                 printf("Invalid withdrawal amount");
//             } else {
//                 printf("Insufficient balance");
//             }
//             break;
//         default:
//             printf("Invalid choice\n");
//     }
//     printf("Current balance: %.2f\n", balance);
// }

// 37 Question 37: Create a simple menu for a program that rofculates the arms of different shape The menu thould offert
// Calculate Area of Circle
// Calculate Area of Rectangle
// Exit Ask the aur for their choice. Based on the choice, prompt for my dimensions and calculate the area. Use a switch statement for menu handling. Assume pi=3.14
// int main() {
//     int choice;
//     float radius, length, breadth, area;
//     const float pi = 3.14;
//     printf("Menu:\n");
//     printf("1. Calculate Area of Circle\n");
//     printf("2. Calculate Area of Rectangle\n");
//     printf("3. Exit\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);
//     switch(choice) {
//         case 1:
//             printf("Enter radius of the circle: ");
//             scanf("%f", &radius);
//             area = pi * radius * radius;
//             printf("Area of Circle = %.2f\n", area);
//             break;
//         case 2:
//             printf("Enter length of the rectangle: ");
//             scanf("%f", &length);
//             printf("Enter breadth of the rectangle: ");
//             scanf("%f", &breadth);
//             area = length * breadth;
//             printf("Area of Rectangle = %.2f\n", area);
//             break;
//         case 3:
//             printf("Exiting the program.\n");
//             break;
//         default:
//             printf("Invalid choice.\n");
//     }
// }

//38 A stare offers disnutzts based on the total perthave ameront and whether customer is a preminem membre
//Premium Member:
//Purchase ge1000: 15% discount
//Purchase $\<1000$: 10% discount
//Regular Customer:
//Parchase ge1000:5% discount
//Purchase $\< 1000$ No discount
//Write a C program that takes the purchase amount and a character indicating membership status ('P' for Premium, "R' for Regular) as input. Calculate and print the final payable amount after applying the discount
int main() {
    float purchaseAmount, discount = 0, finalAmount;
    char membership;
    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);
    printf("Enter member: ");
    scanf(" %c", &membership); 
    if (membership == 'P' || membership == 'p') {
        if (purchaseAmount >= 1000) {
            discount = 0.15 * purchaseAmount;
        } else {
            discount = 0.10 * purchaseAmount;
        }
    } else if (membership == 'R' || membership == 'r') {
        if (purchaseAmount >= 1000) {
            discount = 0.05 * purchaseAmount;
        } else {
            discount = 0.00;
        }
    } else {
        printf("Invalid membership input.\n");
    }
    finalAmount = purchaseAmount - discount;
    printf("Discount: %.2f\n", discount);
    printf("Amount to pay: %.2f\n", finalAmount);
}


// 39 write a program check a loan eligibility.
// int main() {
//     int age, experience;
//     float income;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     printf("Enter your monthly income: ");
//     scanf("%f", &income);
//     printf("Enter your years of work experience: ");
//     scanf("%d", &experience);
//     if (age >= 21 && age <= 60 && income >= 20000 && experience >= 1) {
//         printf("You are eligible for the loan");
//     } else {
//         printf("NOT eligible");
//     }
// }


//40 write a program triangles to check isoscles, scalene, or equileteral
// int main(){
//     int a, b, c;
//     printf("Enter the sides:");
//     scanf("%d%d%d", &a, &b, &c);

//     if(a == b&& b== c&& a==c){
//         printf("equilateral triangle");
//     }
//     else if(a ==b&& a==c|| b!=c){
//         printf("isosceles triangle");
//     }
//     else{
//         printf("scalene triagle");
//     }
// }

// 41 write a program print factorial of a  number
// int main(){
//     int n, i, fac=1;
//     printf("Enter the numbers: ");
//     scanf("%d", &n);
//     if(n<0){
//         printf("not define");
//     }
//     else{
//         for(i=1; i<=n; i++){
//             fac *= i;
//         }
//         printf("Factorial of %d = %d ", n, fac);
//     }
// }

// 42 write a program reverse a given number
// int main(){
//     int a, d1, d2, d3, rev;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     d1=a%10;
//     d2=(a/10)%10;
//     d3=a/100;
//     rev = d1*100 + d2*10 + d3*1;
//     printf("rev = %d ", rev);
// }

// 43 write a program to find the sum of digits of a number
// int main(){
//     int a, digit, sum=0;
//     printf("Enter the numbers: ");
//     scanf("%d", &a);
//     if(a<0){
//         printf("Enter positive number");
//     }
//     else if(a==0) {
//         printf("sum=%d", sum);
//     }
//     else{
//        while (a > 0) {
//             digit = a % 10;
//             sum += digit;
//             a = a / 10;
//         }
//         printf("Sum  = %d", sum); 
//     }

// }

//44 write a program to print fibonacci series up to n terms.
// int main() {
//     int n, i;
//     int a = 0, b = 1, next;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci  %d: ", n);
//     for(i = 1; i <= n; i++) {
//         printf("%d ", a);
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }