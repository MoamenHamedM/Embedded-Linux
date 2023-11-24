#include<stdio.h>

int binary_search(int key,int * data,int size) 
{
int high,low,mid;
high = size - 1;
low = 0;
while(high >= low)
{
mid =(high+low) / 2;
if(data[mid] < key)
{
low = mid + 1;
}
else if(data[mid] > key)
{
high = mid - 1;
}
else
{
return mid;
}
}
return -1;
}


int main()
{
int index = 0;
int arr[] = {1,3,5,7,9,11,13,15};

index = binary_search(7,arr,8);

if(index == -1)
{
printf("the number is not in the list");
}
else
{
printf("the index of the number is: %i",index);
}
return 0;


}
