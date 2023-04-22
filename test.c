#include<stdio.h>
#include<math.h>
int decimal(int);
int binary(int);
int main(){

    int n,choice;
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Type the number: ");
    scanf(" %d",&n);
    switch(choice){
        case 1: printf("Decimal of %d is %d",n,decimal(n));
        break;
        case 2: printf("Binary of %d is %d",n,binary(n));
        break;
    }
    return 0;
}

int decimal(int x){
    int i=0,r=0;
    while(x>0){
        (x%10==1)? r+=pow(2,i) : 0;
        i++; x/=10;
    }
    return r;
}

int binary(int x){
    int r=0,i=0;
    while(x>0){
        (x%2==1)? r+=pow(10,i) : 0;
        i++; x/=2;
    }
    return r;
}