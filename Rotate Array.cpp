// Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer.

// Input:
// N = 5, D = 2
// arr[] = {1,2,3,4,5}
// Output: 3 4 5 1 2
// Explanation: 1 2 3 4 5  when rotated
// by 2 elements, it becomes 3 4 5 1 2.

int gcd(int a,int b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

void rotateArr(int arr[], int d, int n){
    
    
    // USING JUGGLING ALGORITHM 
    
    d = d % n;
    int hcf = gcd(n,d);
    int j = 0;
    int k = 0;
    int temp = 0;
    for(int i=0;i<hcf;i++)
    {
        temp = arr[i];
        j = i;
        while(1)
        {
            k = j + d;
            if(k >= n)
            {
                k = k - n;
            }
            if(k == i)
            {
                break;
            }
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
    
}
