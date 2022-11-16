void decroissant(int tab[],int n)
{

    if(n > 0)
{
    printf("%d",tab[n-1]);

    decroissant(tab,n-1);
}

}