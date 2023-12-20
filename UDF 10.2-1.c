/*
Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2

Output:
The sum of an Array: 18
*/

#include<stdio.h>

sum(){
	
	int a[10],sum=0;
	int n,i;
	
	
	printf("enter  array value :- ");
	scanf("%d",&n);
	
	 for(i=0; i<n; i++){
	 	printf("enter array value :-");
	 	scanf("%d",&a[i]);
	 }
	 
	 for(i=0; i<n; i++){
	printf(" %d",a[i]);
	sum +=a[i];
	
}

	printf("\n\nsum = %d",sum);
	
}
  main()
  {
  	
  	sum();
  	
  }








