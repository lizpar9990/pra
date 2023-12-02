#include <stdio.h>
#include <stdlib.h>
#include "func.h"
int main(){
	ochki*arr=NULL;
	int n=0;
	int stop=0;
	while (stop!=1){
		int key;
		printf("1-create, 2-read, 3-print, 4-search\n");
		scanf("%d",&key);
		switch (key){
		case 1:
			create (&arr, &n);
			if (arr)
				write(arr, n);			
			break;
					
		case 2:
			read (&arr, &n);
			if(!arr)
				printf("ashipka\n");
			else
				printf ("loaded %d\n", n);	
			break;
		case 3:
			for (int i=0; i<n; i++)
				printf( "%s %s %d %d\n", arr[i].color, arr[i].country, arr[i].price, arr[i].size);
			break;
		case 4:
			if(arr)
				search(arr,n);
			break;
		default:
			stop=1;
			break;
				}
		}	
if (arr)
	free (arr);
	return 0;}		
