{
  int i, number, Even_Sum = 0, Odd_Sum = 0,a;
 
  printf("\n Please Enter the Maximum Limit Value : ");
  scanf("%d", &number);
  
  for(i = 1; i <= number; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        Even_Sum = Even_Sum + i;
  	}
  	else
  	{
  		Odd_Sum = Odd_Sum + i;
	}
  }
  a = Even_Sum + Odd_Sum;
  printf("\n The Sum of Even Numbers upto %d  = %d", number, Even_Sum);
  printf("\n The Sum of Odd Numbers upto %d  = %d", number, Odd_Sum);
  printf("\n The Sum of Odd and Even = %d ",a);

  return 0;
}
