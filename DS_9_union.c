#include<stdio.h>
int main()
{

    int a[50], b[50], c[100];
    int n,m;
    printf("Enter the size of Array a\n");
      scanf("%d",&n);
    printf("Enter the size of Array b\n");
    scanf("%d",&m);
    printf("Enter the elements od Array a\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements od Array b\n");
    for (int j = 0; j < m; j++)
    {
        scanf("%d",&b[j]);
    }
    for (int k = 0; k < n; k++)
    {
        c[k] = a[k];
    }
    int it = n;

    for (int i = 0; i < n; i++)
    {
        int ele = b[i];
        int count = 0;
        for (int j = 0; j < it; j++)
        {
            if (c[j] == ele)
                count++;
        }
        if (count == 0)
        {
            c[it] = ele;
            it++;
        }
    }
    printf("the union will be\n");
    for (int i = 0; i < it; i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}
