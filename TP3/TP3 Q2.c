void remplirTableau(tab t, int n)
{ 
    int i ;
    srand ( time(NULL) );
    for (i=0; i<n; i++)
    t[ i]= rand() % n;
}

void affiche (int *t, int n , int i ) 
{
	if (i == n) return;
	printf("| %d", t[0]) ;
        affiche (t + 1 , n, i+1) ;
}