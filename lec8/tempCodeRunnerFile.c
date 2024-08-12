
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
               c[n1]=a[i]+b[j];
               printf("\n Array of C is %d ",c[n1]);
               n1++;
            }
        }
    }