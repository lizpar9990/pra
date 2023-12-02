#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
void create (ochki**arr, int*n) {
	printf("number of positions =");
	scanf("%d",n);
	if (*n<=0)
		return;
	*arr=(ochki*)calloc(*n, sizeof (ochki));
	for (int i=0; i<*n; i++){
		printf ("color=");
	        scanf ("%s", (*arr)[i].color);
	        printf ("country=");
  		  scanf ("%s", (*arr)[i].country);
      		  printf ("price=");
      		  scanf ("%d", &(*arr)[i].price);
        	printf ("size=");
	        scanf ("%d", &(*arr)[i].size);
	}
}
void read (ochki**arr, int*n){
        FILE*fp=fopen("file.txt", "r");
        if(fp==NULL)
                return;
        if (fscanf(fp, "%d", n)!=1)
                return;
                                             
        if (*n<=0)
                return;
                
	*arr=(ochki*)calloc(*n, sizeof(ochki));
		for (int i=0; i<*n; i++)
			fscanf(fp,"%s %s %d %d", (*arr)[i].color, (*arr)[i].country, &(*arr)[i].price, &(*arr)[i].size);
fclose(fp);}

	
void write (ochki*arr, int n){
	if (n<=0)
		return;
	FILE *fp=fopen("file.txt", "w");
	if (!fp)
		return;
	fprintf (fp, "%d\n", n);
	for (int i=0; i<n; i++)
		fprintf(fp, "%s %s %d %d\n", arr[i].color, arr[i].country, arr[i].price, arr[i].size);
	fclose(fp);
				}
				
void search (ochki*arr,int n){			
   printf("vvedite nomer dlya poiska:\n"
          " 1 - color\n"
          " 2 - country\n"
          " 3 - price\n"
          " 4 - size\n");
          int key;
          int k;
          char str[40];
   scanf("%d", &key);
   printf("vvedite iskomoe znachenie: ");
 
   switch (key)
   {
      case 1:
         scanf("%s", str);
         for (int i = 0; i < n; i++)
         {
            if (!strcmp(arr[i].color, str))
            {
             printf("%s %s %d %d\n", arr[i].color, arr[i].country, arr[i].price, arr[i].size);
            }
         }
         break;
 
      case 2:
         scanf("%s", str);
         for (int i = 0; i < n; i++)
         {
            if (!strcmp(arr[i].country, str))
            {
               printf("%s %s %d %d\n", arr[i].color, arr[i].country, arr[i].price, arr[i].size);
            }
         }
         break;
 
      case 3:
         if(scanf("%d", &k)==1)
         {
         	if(k<0){
         		return;
         	}
        	 for (int i = 0; i < n; i++)
         	{
           	 	if (k == arr[i].price)
          		  {
            			 printf("%s %s %d %d\n", arr[i].color, arr[i].country, arr[i].price, arr[i].size);
          	 	 }
       		  }
 	}
         break;
 
 
      case 4:
         if(scanf("%d", &k)==1){
         	if(k<0){
         		return;}
         for (int i = 0; i < n; i++)
         {
            if (k == arr[i].price)
            {
             printf("%s %s %d %d\n", arr[i].color, arr[i].country, arr[i].price, arr[i].size);
            }
         }}
         break;
 
      default:
         printf("error!\n");
  break;}}		












