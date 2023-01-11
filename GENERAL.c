/*BASIC CODES*/
// HELLO WORLD PRINT
#include<stdio.h>
int main()
{
    printf("Hello World!");
}
// TAKING INPUT FROM USER
#include<stdio.h>
int main()
{
    int age;
    printfd("Enter your age:");
    scanf("%d",&age);
    printf("Your age is: %d");
}
// ARITHMATIC OPERATORS
#include<stdio.h>
int main()
{
    int a=15, b=19;
    printf("%d\n",a&&b);
    printf("%d\n",a||b);
    printf("%d\n",!(a&&b));
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
    printf("%d\n",a&b);
    printf("%zu",sizeof(a));
    (a<b)?printf("b is greater"):("a is greater");
    return 0;
}
// MATH LIBRARY FUNCTIONS
#include<stdio.h>
#include<math.h>
int main()
{
    float n,k;
    printf("Enter the number:");
    scanf("%f",&n);
    printf("The cube of the number is: %f\n",pow(n,3));
    k=sqrt(n);
    printf("Square root of the number is: %f",k);
    return 0;
}
// CODE TO CALCULATE AREA OF RECTANGLE
#include<stdio.h>
int main()
{
    int length,breadth;
    printf("Enter length of rectangle=\n");
    scanf("%d",&length);
    printf("Enter breadth of rectangle=\n");
    scanf("%d",&breadth);
    printf("Area of ractangle=%d\n",(length*breadth));
}
// CODE TO FIND COMPOUND INTEREST
#include<stdio.h>
#include<math.h>
int main()
{
    float principal ,rate, timee;
    printf("Enter principal value\n");
    scanf("%f",&principal);
    printf("Enter rate\n");
    scanf("%f",&rate);
    printf("Enter time\n");
    scanf("%f",&timee);
    double ci=principal*(pow((1+(rate/100)),timee));
    printf("Compound interest=%f",ci);
}
// ESCAPE SEQUENCE
#include<stdio.h>
int main()
{
    printf("\"c programming\"");
}
// CODE TO PRINT ASCII VALUES OF CHARACTERS
#include<stdio.h>
int main()
{  
    char e;
    printf("enter a character\n");
    scanf("%c",&e);
    printf("%c=%d",e,e);
}
// CODE TO USE INCREMENT AND DECREMENT OPERATORS
#include<stdio.h>
int main()
{   int i;
    printf("enter a integer\n");
    scanf("%d",&i);
    int x=i++;
    int y=++i;
    int z=i--;
    int k=--i;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
    printf("k=%d",k);
    return 0;
}
// SIZEOF FUNCTION
#include<stdio.h>
int main()
{
    int c;
    printf("enter a number\n");
    scanf("%d",&c);
    printf("%zu",sizeof(c));
}
// CODE TO COVERT UNITS
#include<stdio.h>
int main()
{
    int a,n;
    printf("Which unit conversion you want to do:\nEnter 1 for km to miles\nEnter 2 for in to ft\n3 for cm to in\n4 for pound to kg\n5 for in to m:\n5 to quit:");
    scanf("%d",&a);
    printf("Enter the no. of units: ");
    scanf("%d",&n);
    if(a==1)
    {
        printf("%d km=%f miles",n,n/1.609);
    }
    else if (a==2)
    {
        printf("%din=%fft",n,n/12.0);
    }
    else if (a==3)
    {
        printf("%dcm=%fin",n,n/2.54);
    }
    else if (a==4)
    {
        printf("%dpound=%fkg",n,n/2.205);
    }
    else
    {
        printf("%din=%fm",n,n/39.97);
    }
    return 0;
}
// TERNARY OPERATOR OR CONDITIONAL OPERATOR
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the value of n and m:");
    scanf("%d %d",&n,&m);
    (n>m)?printf("n is maximum "):printf("m is maximum");
}
// FINN MAX AND MIN NUMBER BETWEEN THREE NUMBERS USING CONDITIONAL OPERATOR
#include<stdio.h>
int main()
{
    int n,m,o;
    printf("Enter the value of n,m,o:");
    scanf("%d %d %d",&n,&m,&o);
    ((n>m)&&(n>o))?printf("n is maximum "):((m>n)&&(m>o))?printf("m is maximum"):printf("o is maximum");
}
// CODE TO CHECK LEAP YEAR
#include<stdio.h>
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    (n%4==0)?printf("n is leapyear "):printf("n is not a leapyear");
}
// CHECK WHETHER IT IS CHARACTER OR SOMETHING ELSE USING CONDITIONAL OPERATOR
#include<stdio.h>
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ((ch>=65)&&(ch<=122))?printf("The character is an alphabet"):printf("It is something else");
}
// CHECK WHETHER IT IS CHARACTER OR SOMETHING ELSE USING IF ELSE
#include<stdio.h>
int main()
{
    char n;
    printf("Enter a character: ");
    scanf("%c",&n);
    if(n>=65 && n<=122)
    printf("The character is an alphabet");
    else
    printf("Entered charcter is something else");
}
// CODE TO FIND TOTAL, AVERAGE AND PERCENTAGE OF A STUDENT
#include<stdio.h>
int main()
{
    int math,chem,phy,hin,eng,tot,avg;
    float per;
    printf("Enter the marks of your subjects:\n");
    printf("Enter the marks of Mathematics=");
    scanf("%d",&math);
    printf("Enter the marks of Chemistry=");
    scanf("%d",&chem);
    printf("Enter the marks of Physics=");
    scanf("%d",&phy);
    printf("Enter the marks of Hindi=");
    scanf("%d",&hin);
    printf("Enter the marks of English=");
    scanf("%d",&eng);
    tot=math+chem+phy+hin+eng;
    printf("Total of your marks=%d\n",tot);
    avg=tot/5;
    printf("Average of your marks-%d\n",avg);    
    per=tot/(float)5;
    printf("Your percentage= %f%%",per);
}
// CODE TO PRINT THE TABLE OF A NUMBER
#include<stdio.h>
int main()
{
   int a;
   printf("Enter the number you want table of:\n");
   scanf("%d", &a);
   printf("Multiplication table of %d is as follows\n", a);
   printf("%d X 1 = %d\n", a, a*1);   
   printf("%d X 2 = %d\n", a, a*2);   
   printf("%d X 3 = %d\n", a, a*3);   
   printf("%d X 4 = %d\n", a, a*4);   
   printf("%d X 5 = %d\n", a, a*5);   
   printf("%d X 6 = %d\n", a, a*6);   
   printf("%d X 7 = %d\n", a, a*7);   
   printf("%d X 8 = %d\n", a, a*8);   
   printf("%d X 9 = %d\n", a, a*9);   
   printf("%d X 10 = %d\n", a, a*10);   
   return 0;
}
// CODE to convert days into years,weaks,days
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of days=%d\n",n);
    scanf("%d",&n);
    int year=n/365;
    int d=n%365;
    int weaks=d/7;
    int days=d%7;
    
    printf("No of years=%d\n",year);
    printf("No of  weaks=%d\n",weaks);
    printf("No of remaining days=%d\n",days);
}
// CODE TO FIND MAXIMUM AND MINIMUM BETWEEN TWO NUMBERS
#include<stdio.h>
int main()
{
    int n;
    int m;
    printf("enter  first number\n");
    scanf("%d",&n);
    printf("enter second number\n");
    if(n>m)
    printf("manimum = %d",n);
    else
    printf("manimum = %d",m);
}
// CODE TO PRINT N NATURAL NUMBERS USING DO-WHILE LOOP
#include<stdio.h>
int main()
{
    int num, i=0;
    printf("Enter the number:");
    scanf("%d", &num);
    do{
        printf("%d\n",i);
        i=i+1;
    }
    while (i<num);
    return 0;
}
// CODE TO CHECK VOTING ELIGIBILITY
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("You have entered your age:%d\n",age);
    if (age>=18)
    {
        printf("You can vote!");
    }
    else
    {
    printf("You cannot vote!");
    }
    return 0;
}
// CODE TO CHECK WHETHET THE NUMBER IS NEGATIVE POSITIVE OR ZERO
#include<stdio.h>
int main()
{
    int n;
    int c=0;
    printf("enter  a number\n");
    scanf("%d",&n);
    if(n>0)
    printf("positive");
    if(n<0)
    printf("negative ");
    if(n==0)
    printf("zero");
}
// CODE TO CHECK EVEN OR ODD NUMBER
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    switch(n%2)
    {
    case 0:
    printf("%d is even",n);
    break;
    case 1:
    printf("%d is odd",n);
    }
}
// CODE TO SWAP TWO VALUES USING THIRD VARIABLE
#include<stdio.h>
int main()
{
    int a=5,b=10,temp;
    printf("Before Swapping:\nValue of a=%d and Value of b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping:\nValue of a=%d and Value of b=%d",a,b);
}
// CODE TO SWAP TWO VALUES USING ARITHMATIC OPERATORS
#include<stdio.h>
int main()
{
    int x=2,y=7;
    printf("Before Swapping:\nValue of x=%d and Value of y=%d\n",x,y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("After Swapping:\nValue of x=%d and Value of y=%d",x,y);
}
// CODE TO FIND LEAP YEAR
#include<stdio.h>
int main()
{
    int n;
    printf("enter  a number\n");
    scanf("%d",&n);
    if((n%4==0&&n%100!=0)||n%400==0)
    printf("leap year ");
    else
    printf("not leap year");
}
// CODE TO CHECK VOWELS AND CONSONANTS
#include<stdio.h>
int main()
{
    char a;
    printf("enter  a alphabet\n");
    scanf("%ca",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='u')
    printf("vowel ");
    else
    printf("constant");
}
// CODE TO PRINT THE DAY USING SWITCH CASE
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Sunday");
        break;
        case 2:printf("Monday");
        break;
        case 3:printf("Tuesday");
        break;
        case 4:printf("Wednesday");
        break;
        case 5:printf("Thursday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("Saturday");
        break;
    }
}
// CODE TO PRINT NO. OF DAYS IN A MONTH
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("No of days in the month ");
    switch(n)
    {
        case 1:printf("31");
        break;
        case 3:printf("31");
        break;
        case 5:printf("31");
        break;
        case 7:printf("31");
        break;
        case 8:printf("31");
        break;
        case 10:printf("31");
        break;
        case 12:printf("31");
        break;
        case 2:printf("28");
        break;
        case 4:printf("30");
        break;
        case 6:printf("30");
        break;
        case 9:printf("30");
        break;
        case 11:printf("30");
        break;
    }
}
// CODE TO FIND THE FACTORIAL OF A NUMBER
#include<stdio.h>
int main()
{
    
    int n,f=1;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("%d",f);
    return 0;
}
// CODE TO REVERSE THE NUMBER
#include<stdio.h>
int main()
{
    int n,t=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        t=t*10+r;
        n=n/10;
    }
    printf("Reverse number is:%d",t);
}
// CODE TO CHECK PALINDROME NUMBER
#include<stdio.h>
int main()
{
    int n,t=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    int k=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        t=t*10+r;
    }
    if(t==k)
    printf("%d is a Palindrome number!",k);
    else
    printf("%d is not a Palindrome number!",k);
}
// CODE TO CHECK ARMSTRONG NUMBER
#include<stdio.h>
#include<math.h>
int main()
{
    int n,t=0,l,r;
    scanf("%d",&n);
    int k=n;
    l=log10(n)+1;
    while(n)
    {
        r=n%10;
        t=t+pow(r,l);
        n=n/10;
    }
    printf("%d",t);
    if(t==k)
    printf("%d is an Armstrong Number!",k);
    else
    printf("%d is not an Armstrong Number!",k);
}
// CODE TO PRINT THE FIBONACCI SERIES UPTO N INDEX
#include<stdio.h>
int main()
{
    int n,x=0,y=1,u=0;
    printf("Enter the index upto which fibonacci series print:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d ",u);
        x=y;
        y=u;
        u=x+y;
    }
}
// CODE TO CHECK STRONG NUMBER
#include<stdio.h>
int main()
{
    int n,r,f=1,t=0;
    scanf("%d",&n);
    int k=n;
    while(n>0)
    {     
        r=n%10;
        while(r!=0)
        {
            f=f*r;
            r--;
        }
        t=t+f;
        f=1;
        n=n/10;
    }
    if(k==t)
    printf("It is an STRONG number!");
    else
    printf("Not an STRONG number");
}
// CODE TO FIND LCM
#include<stdio.h>
int main()
{
    int a,b,k,lcm,i,max;
    scanf("%d %d",&a,&b);
    if(a>b)
    max=a;
    else
    max=b;
    for(int i=1;i<max;i++)
    {
        if(a%i==0&&b%i==0)
        k=i;
    }
    lcm=a*b/k;
    printf("%d",lcm);

}
// CODE TO FIND HCF
#include<stdio.h>
int main()
{
    int a,b,k;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        k=i;
    }
    printf("%d",k);`
}