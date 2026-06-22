#include<stdio.h>
int main (){
   /* int n,sum=0;,number;
    
    printf("enter the total number of integers to be summed : ");
    scanf("%d",&n);
    {
        for(int i=0;i<n;i++)
        printf("enter the number ,i+1");
        scnaf("%d",&number);


        int sum=sum+number;
    }
    printf("the sum is %d\n",sum);
    return 0;
}*/
int num, fact = 1;
printf("Enter a number: ");
scanf("%d", &num);
for(int i = 1; i <= num; i++) {
    fact *= i;
}
printf("Factorial of %d is %d\n", num, fact);

}
