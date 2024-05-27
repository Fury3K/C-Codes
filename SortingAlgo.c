#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp){ //swaps the variables
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_idx;

    for(i = 0; i < n-1; i++) //goes through array
    {
        min_idx = i; //assigns min_index for i to compare
            for(j=i+1; j<n; j++) //goes through array as well
                if(arr[j] < arr[min_idx]) //compares current number in array with mid index i.e 1 to 64
                    min_idx = j;


        swap(&arr[min_idx], &arr[i]);
    }
}

void bubbleSort(int arr[], int n){
    int i, j;
    bool swapped;
    for(i = 0; i < n-1; i++)
    {
        swapped = false; //sets swap to false
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) //compares two variables in array
            {
                swap(&arr[j],&arr[j+1]); //if true swaps
                swapped = true; //sets swap to true
            }
        }
        if (swapped == false) //checks if succesful swap, if not, break loop meaning sorting is done.
            break;
    }
}

void insertionSort(int arr[], int n){
    int i, key, j;
    for(i = 1; i < n; i++){
        key = arr[i]; //flag or key that is used to compare
        j = i-1; //


        while(j >= 0 && arr[j] > key){ //shifts everything to the right
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key; //turns the lowest found element into the key/head
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[high]; //pivot is the last index of the array
    int i = (low - 1); // i is -1
    
    for(int j = low; j <= high - 1; j++) //traverses the array
    {
        if(arr[j] < pivot) //if the element is lesser than the last array
        {
            i++; //increment i by 1
            swap(&arr[i], &arr[j]); //swap the first index and the second index
        }
    }
    swap(&arr[i+1],&arr[high]); //swaps the last array and the middle of the array to make the pivot the center
    return(i+1);
}

void quickSort(int arr[], int low, int high){
    if(low < high) //if low is less than high
    {
        int pi = partition(arr,low,high);


        quickSort(arr, low, pi-1); //swaps whatever is lower than the partition
        quickSort(arr, pi-1,high); //swaps whatever is higher than the partition and the partition itself
    }
}

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
 
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}
 

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}



int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);//this literally just gets the size of the array
    selectionSort(arr, n);
    printArray(arr, n);
    printf("Sort array: \n");
    printArray(arr, n);
    return 0;
}