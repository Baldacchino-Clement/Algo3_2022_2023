int ElemTabSup(int *tab, int n ,int v)
{
    int nbrelem=0;
    if (n==0)
    {
        if (tab[n-1]>v)
        {
            nbrelem=1+ElemTabSup(tab,n-1,v);
        }
        else
        {
            nbrelem=ElemTabSup(tab,n-1,v);
        }
    }

    return nbrelem;
}