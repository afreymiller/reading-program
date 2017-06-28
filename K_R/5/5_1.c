#include <stdio.h>
#include <stdlib.h>

void swap(int *px, int *py){
    int tmp;

    tmp = *px; /* store dereferenced value of x in tmp */
    *px = *py; /* swap value pointed to by px with py */
    *py = tmp; /* finally point the pointer to y to tmp */
}

/* strlen: return length of string s */
int strlen(char *s){
    int n;

    for(n = 0; *s != '\0'; s++){
        n++;
    }
    return n;
}

/* strcpy: copy t to s; array subscript version */
/*void strcpy(char *s, char *t){
    int i; 

    i = 0;
    while((*s = *t) != '\0'){
        s++;
        t++;
    }
} */

int main()
{
    int r = 3, c = 4;
    int *arr = (int *)malloc(r * c * sizeof(int));
 
    int i, j, count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         *(arr + i*c + j) = ++count;
 
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", *(arr + i*c + j));
 
   /* Code for further processing and free the 
      dynamically allocated memory */

    free(arr);
   
   return 0;
}