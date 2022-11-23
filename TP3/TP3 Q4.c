int tri(tab t, int n)
{
    int min,temp;
    for(int i = 0 ; i < n-1 ; i++)
    {
    min = i;
    for(int j = i+1 ; j < n ; j++)
    if(t[j] < t[min])
    min = j;
    if(min!=i)
       {
          temp = t[i];
          t[i]=t[min];
          t[min]=temp;
       }
    }
}