void printTAB(int[],int n)
{
    if(n==1)

printf("%d",tab[0]);
    
    else{

printTAB(tab,n-1);

printf(" %d",tab[n-1]);
}

}
