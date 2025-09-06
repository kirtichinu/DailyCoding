// code360 ninjas code for sum of all elements of the array

int arraySum(int arr[], int n)
{
    int sum = 0;
    if (n < 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return n;
    }
    else if (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        return sum;
    }
}