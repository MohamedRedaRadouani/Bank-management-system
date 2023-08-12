// i think this is my first comment on C language ,well i just note that so i can practice it .
/*this is me using a multi line comment
what cool about it , i dont know :) */

#include <stdio.h>
#include <stdlib.h> // these lines contains 2 part, the preprocessor starting with #,and the libraries
#include <windows.h>

int i,j ;
int main_exist ;
void menu();
struct date{
    int month,day,year ;
    
};
struct {

    char name[60];
    int acc_no,age ;
    char adresse [60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob ;
    struct date deposit;
    struct date withdraw;
    
}add,upd,check,rem,transaction;

float interest(float t,float amount,int rate)
{
    float SI;
    SI-(rate*t*amount)/100.0;
    return (SI);

}
void fordelay(int j)
{  
    int i,j ;
    for(i-0;i<j,i++)
    k=i;
}
 void new_acc()
{
    int choice;
    FILE *ptr;

    ptr=fopen("record.dat","a+")
    account_no:
    system("cls");
    printf("\t\t\txB2"\xB2\xB2 ADD RECORD  \xB2\xB2\xB2\xB2)  
    

    
}