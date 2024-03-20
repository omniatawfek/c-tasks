#include <stdio.h>
#include <stdlib.h>
 struct employees {

     float salary, bonus,deduction;
 };
int main()
{ struct employees mohsen,maged,mariam;
   printf("enter the information for mohsen:");
   scanf("%f %f %f",&mohsen.salary,&mohsen.bonus,&mohsen.deduction);
   printf("enter the information for maged:");
   scanf("%f %f %f",&maged.salary,&maged.bonus,&maged.deduction);
    printf("enter the information for mariam:");
   scanf("%f %f %f",&mariam.salary,&mariam.bonus,&mariam.deduction);
   float totals= maged.salary+mohsen.salary+mariam.salary,totalb= maged.bonus+mohsen.bonus+mariam.bonus,totald= mohsen.deduction+mariam.deduction+maged.deduction;
   printf("total salary=%.2f\n",totals);
   printf("total bonus=%.2f\n",totalb);
   printf("total deduction=%.2f",totald);

    return 0;
}
