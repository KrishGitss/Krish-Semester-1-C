#include <stdio.h>

int main()
{
   double Grossalary, Basicsalary, HouseRentalAllowance, OtherAllowance;

   printf("Enter basic salary: ");
   scanf("%lf",&Basicsalary);

   if (Basicsalary < 5000)
   {
       HouseRentalAllowance = Basicsalary * 60/100;
       OtherAllowance = Basicsalary * 40/100;
   }
   else 
   { 
       HouseRentalAllowance = 600;
       OtherAllowance = Basicsalary * 95/100;
   }
       
       Grossalary = Basicsalary + HouseRentalAllowance + OtherAllowance;

    printf("Gross Salary: %.2lf", Grossalary);
    
    return 0;
}
