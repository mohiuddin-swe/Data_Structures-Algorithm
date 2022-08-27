/*--------------------------------------------------------Insertion Sort-----------------------------------------------------------

Insertion Algorithms: Steps on how it works:
If it is the first element, it is already sorted.
Pick the next element.
Compare with all the elements in sorted sub-list.
Shift all the the elements in sorted sub-list that is greater than the value to be sorted.
Insert the value.
Repeat until list is sorted.

https://www.youtube.com/watch?v=Tz7vBodZqo8 (Full video)


Simplified Code:*/

#include <stdio.h>
void insertion_sort (int a[], int length){


for(int i=1;i< length;i++){
    int key=a[i],j;
    j=i-1;
    while (j>=0 && a[j]>key){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
}
}


main(){
int a[]={8,4,9,5,7,6,3,2},i;
insertion_sort(a,8);
for(int i=0;i<8;i++){
    printf("Sorted array is:[%d]=%d\n",i,a[i]);
}
return 0;
}