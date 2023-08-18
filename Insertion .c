#include<stdio.h>

  int main()
  {
  int  arr[10],i,j,n, key;
  printf("Input  no. of values in the array: \n");
  scanf("%d",&n);
  printf("Input  %d array value(s): \n",n);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  
  /* Insertion Sort  */
  for (i = 1; i <  n; i++)
  {
  key =  arr[i];
  j = i-1;
  
  while (j >=  0 && arr[j] > key)
  {
  arr[j+1] = arr[j];
  j = j-1;
  }
  arr[j+1] =  key;
  }
  printf("Sorted  Array: \n");
  for (i=0; i <  n; i++)
  printf("%d  \n", arr[i]);
  }
