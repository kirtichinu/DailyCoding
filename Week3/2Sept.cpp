//code 360 coding ninjas for linear search using functions

int linearSearch(int n, int num,int arr[])
{
    if(n==0)
    {
        return -1;
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            return num;
        }
    }
    
}
