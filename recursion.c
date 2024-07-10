/*#include<stdio.h>
void hello(int x);

int main()
{
    hello(10);
    return 0;
}
void hello (int x)
{
    if (x==0){
        return 0;
    }
    else {
        printf("Hello world\n");
    hello(x-1);
    }
}*/




/// factorial by recursion function

/*#include<stdio.h>
int facto_rial (int x)
{
    int func;
    if(x==1) {     /// base case
        return 1;
    }
    else
     func=x*facto_rial (x-1);
     return func;

}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");   ///4
    scanf("%d",&n);
    int factorial = facto_rial (n);

    printf("Factorial of %d: %d",n,factorial);
    return 0;

}*/

/// Print 1 to n...

/*#include<stdio.h>


 int main()
 {
     int n;
     printf("Enter a value: ");
     scanf("%d",&n);
     int values = recursion (n);

     return 0;
 }


 int recursion(int x)
 {

     if (x==0)
        return 1;
     else
     recursion (x-1);
     printf("%d\n",x);

 }*/


 /// print n to 1....
/*#include<stdio.h>

 int recursion (int x)
 {
     if(x==0)
        return 1;
     else {
            printf("%d\n", x);
     recursion (x-1);
 }
 }

 int main()
 {
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    int value =  recursion(n);
    return 0;
 }*/

#include<stdio.h>
int fibo(int a)
{
    if(a==0 || a==1) /// n=5 then it will work like this.. 5-1=4th nmbr * 5-2=3rd nmber will be sum..
    return 1;
    else
    return fibo(a-1) + fibo (a-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    int fibonacci_number = fibo(n);
    printf("%d", fibonacci_number);
    return 0;
}




