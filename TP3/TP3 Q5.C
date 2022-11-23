int permute(int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}

int initPivot(tab t, int  g, int d){
	return t[g];
}

int partitionN(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;    
            permute(&arr[i], &arr[j]);
        }
    }
    permute(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 

int partitionner(tab t, int g, int d){
	int pivot = initPivot(t, g,d);
	int i = g - 1;
	int j = d + 1;
	
	int fin = 0;
	
	while (!fin){
		printf("\n %d , i %d , j %d \n", pivot, i, j);
		
		do{	
			j = j -1;
		}while(t[j] < pivot);//
		
		do{
		 i = i +1;
		}while(t[i] >= pivot);
		
		if (i < j){
			printf("\n Permute ");
			permute(&t[i], &t[j]);
		}else{
			fin = 1;
		}
	}
	return i;
}

int quicksort(tab t, int g, int d){
	if (g < d)
    {
		int p = partitionN(t, g, d);
		quicksort(t, g, p-1);
		quicksort(t, p + 1, d);
		
	}
}