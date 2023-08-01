/*
CSCI 12042-Course Work
G.R.Shashikala Hansini Manohari
CS/2020/009
*/

#include <stdio.h>
#include <math.h>

//Intoductory Function
void intro(){
    printf("\n--------Prime Number Checker-------------\n");
}

//Function to check whether the given number is a prime or not
void check_prime(int n){
    int i,c=1;

    if (n<=1){
        c=0;
    }
    for ( i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            c=0;
        }
    }
    if (c) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}

//Function to display an error message when the input is invalid
void error(){
    printf("\n Error!...Please Enter a positive integer....\n\n");
    printf("*****End******\n");
}

int main() {
    intro();
    char ans;
    do{
        int n;

        printf("\nEnter any number n:\t");
        scanf("%d", &n);

        if (n<0){
            error();
            return;
        }
        check_prime(n);

        //To enter number repeatedly
        printf("\nDo you want to continue!...(YyNn):");
        do{
            scanf(" %c",&ans);
            if(ans=='Y'||ans=='y'||ans=='N'||ans=='n'){
                break;
            }
            else{
                printf("\nWrong letter, Enter(YyNn):");
            }
        }while(1);
        if(ans=='N'||ans=='n')
            break;
    }while(1);
    printf("\n\n*****End******\n");

    return 0;
}