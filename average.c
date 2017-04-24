//new zmiana 2
//new zmiana 2
// Returns the new average after including x
//asd
//asd
//asd
float getAvg (int x)
{
    static int sum, n;

    sum += x;
    return (((float)sum)/++n);
}

// Prints average of a stream of numbers
void streamAvg(float arr[], int n)
{
   float avg = 0;
   for(int i = 0; i < n; i++)
   {
       avg  = getAvg(arr[i]);
       printf("Average of %d numbers is %f \n", i+1, avg);
   }
   return;
}

// Driver program to test above functions
int main()
{
    float arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    streamAvg(arr, n);

    return 0;
}
