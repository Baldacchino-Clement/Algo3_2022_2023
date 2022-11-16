int valdicho(tab t, int n ,int i,int v)
{
    int reponse=-1;
    if (i<n)
    {
        if (t[i]==v)
        {
            reponse=i;
        }
        else
        {
            reponse=valdicho(t,n,i+1,v);
        }
    }
    return reponse;
}
