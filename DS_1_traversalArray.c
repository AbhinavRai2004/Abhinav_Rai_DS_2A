#include <stdio.h>
// Traversal Of Array.
int main()
{  int n;
   printf("Enter the no. of element in array");
   int a[n];
   printf("Enter the size of array");
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   for (int i = 0; i < n; i++)
   {
      printf("%d", &a[i]);
   }
   return 0;
}