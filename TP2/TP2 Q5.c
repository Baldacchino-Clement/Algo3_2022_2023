int chercheVal(int tab[],int n, int v)
{if (n<0)
{
    return -1;
}
else if (tab[n]==v)
{
    return n;
}
else
{
    return chercheVal(tab,n-1,v);
}
}    


