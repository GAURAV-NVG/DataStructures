#include <iostream>
// solution by gaurav nv
//to decrease the use of unecessary space and effective utilization
// short int is used insted of int

using namespace std;

int *arrg(int *arr,short int start,short int end,short int no_of_swaps){
    // the function is recursively called until the no_of_swaps becomes 0
    if(no_of_swaps>0){
       swap(arr[start],arr[end]);
        arrg(arr,++start,--end,--no_of_swaps);
    }
    
    return arr;
}

int main()
{
    int arr[] = {1,2,3,4};
    short int array_size = sizeof(arr)/4,no_of_swaps;
    
    //to find no of swaps requred for an array whether it is even or odd
    
    (array_size%2 == 0)?no_of_swaps= array_size/2: no_of_swaps = (array_size/2)+1;
    arrg(arr,0,array_size-1,no_of_swaps);
    
    
    //printing the final result;
    for(int i = 0;i<sizeof(arr)/sizeof(int);i++){
            cout<<arr[i]<<" ";
    }
   
    return 0;
    
    
}
