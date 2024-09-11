#include <stdio.h>

int main()
{
     
     int math ,english, physics ,chemistry, computer, Total;
     double Average;
     printf("Math: ");
     scanf("%d",&math);
     
     printf("English: ");
     scanf("%d",&english);
     
     printf("Physics: ");
     scanf("%d",&physics);
     
     printf("Chemistry: ");
     scanf("%d",&chemistry);
     
     printf("Computer: ");
     scanf("%d",&computer);
     

     Total=math+english+physics+chemistry+computer;
     printf("Total: %d\n",Total);

     Average=(math+english+physics+chemistry+computer)/5.0;
     printf("Average: %.2lf\n",Average);

    return 0;
}
