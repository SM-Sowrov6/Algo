#include<stdio.h>

int binarysearch(int a[],int element,int start,int finish){
    if(start<=finish){
        int mid=(start+finish)/2;
        if (a[mid]==element)
        {
            return mid;     
        }
    else if(element>a[mid]){
        return binarysearch(a,element,mid+1,finish);
    }   
    else{
         return binarysearch(a,element,start,mid-1);
    } 
    }
    return -1;  
    }
int main(){
    int size;
    printf("Enter the number of books: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter the books ids(sorted in ascending order): \n");
    for (int i = 1; i <=size; i++)
    {
        printf("Books id %d: ",i);
        scanf("%d",&a[i]);
    }
    int target;
    printf("Enter the book to search: ");
    scanf("%d",&target);

    int result = binarysearch(a,target,0,size-1);
    if(result != -1){
        printf("available target %d \n",result);
    }
    else{
        printf("Khuje paua jacce nah");
    }
     
}