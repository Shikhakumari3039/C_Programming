//Assignment_1
//01 write a program to find the area of a rectangle

#include<stdio.h>
// int main(){
//     int a,b, c;
//     printf("Enter the values:");
//     scanf("%d%d",&a,&b);

//     c=a*b;
//     printf("c=%d",c);
// }

// 2 write a program to find primeter of a rectangle

// int main(){
//     int l,b,c;
//     printf("Enter the values:");
//     scanf("%d%d",&l,&b);
//     c=2*(l+b);
//     printf("c=%d",c);
// }

//3 write a program to find the area of circle

// int main(){
//     float r, c;
//     printf("Enter the values: ");
//     scanf("%f",&r);
//     c=3.14*r*r;
//     printf("C=%f",c);

// }

//4 write a program to find circumfrence of a circle
// int main(){
//     float r, c;
//     printf("Enter the values: ");
//     scanf("%f",&r);
//     c=2*3.14*r;
//     printf("C=%f",c);
// }

// 5 write a program to find the area of triangle

// int main(){
//     int h, b, area;
//     printf("Enter the values: ");
//     scanf("%d%d",&h, &b);
//     area=(b*h)/2;
//     printf("Area=%d",area);
// }

//6 write a program to find simple interest
// int main(){
//     int p, r, t;
//     float si;
//     printf("Enter the values: ");
//     scanf("%d%d%d", &p, &r, &t);
//     si= (p * r * t) / 100.0;
//     printf("SI =%f",si);
// }

//7 write a program to find celsius to fahrenheit conversion
// int main(){
//     float f, c;
//     printf("Enter the Celsius: ");
//     scanf("%f",&c);
//     f=(c*1.8)+32;
//     printf("F=%f", f);
// }

// 8 write a program to find Fahrenheit to Celsius conversion

// int main(){
//     float f, c;
//     printf("Enter the values: ");
//     scanf("%f",&f);
//     c=(f-32)*5/9;
//     printf("C=%f", c);
// }

//9 write a program to find the volume of a cube
// int main(){
// int v, a;
// printf("Enter the values: ");
// scanf("%d", &a);
// v = a*a*a; 
// printf("Volume =%d", v);
// }

//10 write a program to find volumne of a sphere
// int main(){
//     float r, v;
//     printf("Enter the values: ");
//     scanf("%f",&r);
//     v = ((3.14*r*r*r)*4)/3;
//     printf("Volumn = %f", v);
// } 

//11 write a program to find average of three numbers
// int main(){
//     int a, b, c, avg;
//     printf("Enter the numbers: ");
//     scanf("%d%d%d", &a, &b, &c);
//     avg= (a+b+c)/3;
//     printf("Average = %d",avg);
// }

// 12 write a program to find the speed, distance, time

// int main(){
//     int s, d, t;
//     printf("Enter the values: ");
//     scanf("%d%d", &d, &t);
//     s=d/t;
//     printf("Speed = %d",s);
// }

// int main(){
//     int s, d, t;
//     printf("Enter the values: ");
//     scanf("%d%d", &s, &t);
//     d=s*t;
//     printf("Distance = %d",d);
// }

// int main(){
//     int s, d, t;
//     printf("Enter the values: ");
//     scanf("%d%d", &s, &d);
//     t=d/s;
//     printf("Time= %d",t);
// }

// 13 write a program to find kinetic Energy
// int main(){
//     float Ke, m, v;
//     printf("Enter the values: ");
//     scanf("%f%f",&m, &v);
//     Ke=((m*v*v)*1)/2;
//     printf("Kinetic Energy = %f", Ke);
// }

// 14 write a program to find the potential energy
// int main(){
//     float m, g, h, Pe;
//     printf("Enter the values: ");
//     scanf("%f%f%f", &m, &g, &h);
//     Pe = m*h*g;
//     printf("Potential Energy = %f", Pe);
// }

// 15 write a program to find volumne of a cylinder
 
// int main(){
//     float r, h, v;
//     printf("Enter the values: ");
//     scanf("%f%f", &r, &h);
//     v = r*r*h*3.14;
//     printf("Volumne = %f", v);
// }

// 16 write a program to find total surface area of a cube
// int main(){
//     int a, s;
//     printf("Enter the values: ");
//     scanf("%d", &a);
//     s=6*a*a;
//     printf("Total Surface Area of a Cube = %d", s);
// }

// 17 write a program to find area of a Trapezoid
// int main(){
//     int a, b, h, area;
//     printf("Enter the values: ");
//     scanf("%d%d%d", &a, &b, &h);
//     area= ((a+b)*h)/2;
//     printf("Area of Trapezoid = %d", area);

// }

// 18 write a program to find Pythagorean Theorem(Hypotenus).
// #include<math.h>
// int main(){
//     float a, b, c;
//     printf("Enter the values: ");
//     scanf("%f%f", &a, &b);
//     c= sqrt((a*a) + (b*b));
//     printf("Hypotenus = %.2f", c);
// }

//19 write a program to find Electrical  Power
// int main(){
//     int P, v, i;
//     printf("Enter the volts and current: ");
//     scanf("%d%d", &v, &i);
//     P = v*i;
//     printf("Electrical Power =%d", P);
// }

// 20 write a program to find the greater number between three number without using any conditional operator and condional statement
// #include<stdlib.h>
// int main() {
//     int a, b,c, max, max_ab;
//     printf("Enter the number:");
//     scanf("%d%d%d",&a,&b,&c);
//     max_ab=(a+b+abs(a-b))/2;
//     max=(max_ab+c+abs(max_ab-c))/2;
//     printf("max number=%d",max);
// }

//21 write a program to accept two integers and check whether they are equal or not
// int main(){
//     int a, b;
//     printf("Enter the Numbers: ");
//     scanf("%d%d", &a, &b);
//     if(a==b){
//         printf("They are equal");
//     }
//     else{
//         printf("They are not equal");
//     }
// }

// 22 write a program to find the eligibility for a professional course based on the follwing criteria
// int main(){
//     int p, m, c, total;
//     float percentage;
//     printf("Enter the marks: ");
//     scanf("%d%d%d", &p, &m, &c);
//     total=p+m+c;
//     percentage= total/3;

//     if(p>=50 && m>=50 && c>=50 && percentage>=60){
//         printf("Eligible for professional course");
//     }
//     else{
//         printf("Not eligible");
//     }

// }

//23 write a program to print the electricity bill of a given customer
// int main(){
//     int customer_id, units;
//     float bill_amount;
//     printf("Enter the Customer Id: ");
//     scanf("%d%d", &customer_id, &units);
//     if (units<=100){
//         bill_amount= units*1.5;
//     }
//     else if(units<=200){
//         bill_amount=100*1.5 + (units-100)*2.5;
//     }
//     else if (units <= 300) {
//         bill_amount = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
//     } else {
//         bill_amount = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 5.0;
//     }
//     printf("\n--- Electricity Bill ---\n");
//     printf("Customer ID: %d\n", customer_id);
//     printf("Units Consumed: %d\n", units);
//     printf("Total Bill Amount: ₹%.2f\n", bill_amount);   
// } 

// 24 write a program to check whether a triangle can be formed by the given values for the angles.
// int main(){
//     int a, b, c, sum;
//     printf("Enter the angles: ");
//     scanf("%d%d%d", &a, &b, &c);
//     sum = a+b+c;
//     if(a>=0 && b>=0&& c>=0){
//         printf("Triangle can be formed");
//     }
//     else{
//         printf("Triangle can not be formed");
//     }
// }

// 25 write a program to read any month number in integer and display the number of days for this month.
int main(){
    int month;
    printf("Enter the months: ");
    scanf("%d", &month);
    switch(month){
        case 1:
            printf("January has 31 days\n");
            break;
        case 2:
            printf("February has 28 or 29 days (leap year)\n");
            break;
        case 3:
            printf("March has 31 days\n");
            break;
        case 4:
            printf("April has 30 days\n");
            break;
        case 5:
            printf("May has 31 days\n");
            break;
        case 6:
            printf("June has 30 days\n");
            break;
        case 7:
            printf("July has 31 days\n");
            break;
        case 8:
            printf("August has 31 days\n");
            break;
        case 9:
            printf("September has 30 days\n");
            break;
        case 10:
            printf("October has 31 days\n");
            break;
        case 11:
            printf("November has 30 days\n");
            break;
        case 12:
            printf("December has 31 days\n");
            break;
        default:
            printf("Invalid month number");
    } 
}