#include<iostream>
#include<math.h>
using namespace std;
void addition ();
void substraction();
void multiplication();
void division();
void power();
void squareroot();
void AP();
void GP();
void percentage();
void simple_interest();
void cube();
void factorial();
void fibonacci();
void TABLE();
void straight_line();
void equation();
int main()
{
    cout<<"\t\t WELCOME TO MY PROJECT MY FIRST CALCULATOR IN C++ programmer by nitish kumar /t/t"<<endl;
cout<<"****** PRESS 0 TO QUIT PROGRAM**********"<<endl;  
cout<<"enter 1 for addition "    <<endl;
cout<<"enter 2 for substraction "<<endl;
cout<<"enter 3 for multiplication"<<endl;
cout<<"enter 4 for division "<<endl;
cout<<"enter 5 for power"<<endl;
cout<<"enter 6 for squareroot"<<endl;
cout<<"enter 7 for AP"<<endl;
cout<<"enter 8 for GP "<<endl;
cout<<"enter 9 for percentage"<<endl;
cout<<"enter 10 for simple interest "<<endl;
cout<<"enter 11 for cube "<<endl;
cout<<"enter 12 for factorial"<<endl;
cout<<"enter 13 for find fibonacci"<<endl;
cout<<"enter 14 for find table of any number"<<endl;
cout<<"enter 15 for find a straight line"<<endl;
cout<<"enter 16 for find quadratic equation"<<endl;
int choice;
while (1)
{
    cout<<"\n\n ENTER THE OPRATION YOU WANT TO DO:"<<endl;
cin>>choice;
switch (choice)
{
case 1:
    addition();
    break; 
    case 2:
    substraction();
    break;
    case 3:
    multiplication();
    break;
    case 4:
    division();
    break;
case 5:
power();
break;
case 6:
squareroot();
break;
case 7:
AP();
break;
case 8:
GP();
break;
case 9:
percentage();
break;
case 10:
simple_interest();
break;
case 11:
cube();
break;
case 12:
factorial();
break;
case 13:
fibonacci();
break;
case 15:
straight_line();
break;
case 14:
void TABLE();
break;
case 16:
void equation();
break;
case 0:
exit(0);
break;
default:
cout<<"*******WRONG CHOICE ENTER VALID CHOICE*******"<<endl;
    break;
}
}
return 0;
}
void addition() {
    cout<<"enter the any two number for addition:";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"addition of two number is :"<<a<<"and"<<b<<"is="<<a+b<<endl;
}
void substraction() {
    cout<<"enter the any two number for substraction:";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"substraction of two number is :"<<a<<"and"<<b<<"is="<<a-b<<endl;
}
void multiplication() {
    cout<<"enter the any two number for multiplication:";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"multiplication of two number is :"<<a<<"and"<<b<<"is="<<a*b<<endl;
}
void division() {
    cout<<"enter the any two number for division:";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"division of two number is :"<<a<<"and"<<b<<"is="<<(float) a/(float)b<<endl;
}
void power() {
    cout<<"enter the any two number for power :";
    double b,e;
    cin>>b;
    cin>>e;
  double power= pow(b,e);
    cout<<"the solution for base "<<b<<"and exponent"<<e<<"is="<<power<<endl;
}
void squareroot() {
    cout<<"enter the any two number for square root :";
    float a,b;
    float c;
    double n;
    cin>>n;
    double squareroot=sqrt(n);

    cout<<"the square root of "<<n<<"is="<<squareroot<<endl;
}
void AP() {
    int n;
    cout<<"enter the value of nth term:";
    cin>>n;
   int a1,a2,a3,a4;
   cout<<"enter the value of a1:";
   cin>>a1;
   cout<<"enter the value of a2:";
   cin>>a2;
   cout<<"enter the value of a3:";
   cin>>a3;
   cout<<"enter the value of a4:";
   cin>>a4;
   int d1=a2-a1;
   int d2=a4-a3;
   if(d1==d2) {
    cout<<"this number is ap:"; 
    int an=(a1+(n-1)*d1);
    float s=n/2*(2*a1+(n-1)*d1);
    cout<<"the sum of n term is :"<<s<<endl;
    for(int i=a1;i<=an;i=i+d1) {
        cout<<" "<<i;
    }
   }

   else {
    cout<<"this number is not ap :";

   }
}
void GP (){
    int n;
    cout<<"enter the value of nth term:";
    cin>>n;
   int a1,a2,a3,a4;
   cout<<"enter the value of a1:";
   cin>>a1;
   cout<<"enter the value of a2:";
   cin>>a2;
   cout<<"enter the value of a3:";
   cin>>a3;
   cout<<"enter the value of a4:";
   cin>>a4;
   int r1=a2/a1;
   int r2=a4/a3;
   if (r1==r2) {
    cout<<"this number is GP:";
    int pn=pow(a1*r1,n);
    int sn=a1*(pn-1)/(r1-1);
    int nth=pow(a1*r1,n-1);
    cout<<"the sum of gp is :" <<sn<<endl;
    for(int i=a1;i<=nth;i=i*r1) {
        cout<<""<<i<<endl;
    }

}
 else {
    cout<<"this number is not GP :";
 }
}
void percentage() {
    float number,total_number,percentage;
    cout<<"enter the number for find percentage:"<<endl;
    cin>>number;
    cout<<"enter the total number for percentage :"<<endl;
    cin>>total_number;
    percentage=(number*100)/total_number;
    cout<<"the total percentage is ="<<percentage<<endl;
}
void simple_interest() {
    float p,r,t;
    cout<<"enter your principle"<<endl;
    cin>>p;
    cout<<"enter your rate"<<endl;
    cin>>r;
    cout<<"enter your time"<<endl;
    cin>>t;
     float simpleinterest=(p*r*t)/100;
     cout<<"the simple interest is ="<<simpleinterest<<endl;
}

void cube() {
 cout<<"enter the any number for cube :";
 double n;
 cin>>n;
  double cubes= pow(n,3);
 cout<<"the cube of number is ="<<cubes<<endl;
}
void factorial() {
    int n;
    cout<<"enter your number you want to factorial:";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++) {
   fact=fact*i;
    }
    cout<<"the factorial of number is"<<n<<"is"<<fact<<endl;
}
void fibonacci() {
    int n;
    cout<<"enter the value of n for find the fibonacci:";
    cin>>n;
    int sum=1,a=1,b=1;
    for(int i=1;i<=n-2;i++) {
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<"the value of fibonacci series is :"<<sum;
}
void TABLE() {
    int X;
    cout<<"enter the value of number for find the table :";
    cin>>X;
    int table=X;
    for(int i=1;i<=10;i++) {
        int multiplication=table*i;
        cout<<multiplication<<endl;
    }
}
void straight_line() {
    int x1,x2,x3;
    int y1,y2,y3; 
    cout<<"enter the value of x1:";
    cin>>x1;
    cout<<"enter the value of x2:";
    cin>>x2;
    cout<<"enter the value of x3";
    cin>>x3;
    cout<<"enter the value of y1:";
    cin>>y1;
    cout<<"enter the value of xy2:";
    cin>>y2;
    cout<<"enter the value of y3:";
    cin>>y3;
    int m1=(x2-x1)/(y2-y1);
    int m2=(x3-x2)/(y3-y2);
    if(m1==m2) {
        cout<<"there are three points are lies on straight line :";
    }
    else{
        cout<<"there are three points are not lies on straight line:";
    }
}
void equation() {
    float a,b,c,x1,x2,discrit;
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
cout<<"enter the value of c"<<endl;
cin>>c;
if(a==0 && b ==0) {
    cout<<"this equation is not quadratic equation:";
}
else {
    discrit=(b*b)-(4*a*c);
    if(discrit>=0) {
        x1=(-b+sqrt(discrit))/(2*a);
        x2=(-b-sqrt(discrit))/(2*a);
        cout<<"roots are real";
        cout<<"root 01="<<x1<<endl;
        cout<<"roots 02="<<x2<<endl;
    }
    else {
        cout<<"roots are imaginary";
    }
}


}