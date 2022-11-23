void f ()
{
    tab t1;
    tab t2;
    remplirTableau(t1, N);
    copier(t1,t2,N);
    triParMin(t1,N);
    affiche(t1,N,0);
    quicksort(t2,0,N-1);
    affiche(t2,N,0);
}