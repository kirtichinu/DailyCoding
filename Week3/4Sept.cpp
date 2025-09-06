//to find second largest elt of arrray in cpp

#include <bits/stdc++.h> 
int main()
{
    int arr[] = {12, 54, 94, 6, 72};

    int i, j, large = arr[0], second_large = arr[0], size = 5;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }
        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
    std::cout<<"Largest elt is ="<< large;
    std::cout<<"Second largest elt = "<<second_large;

    return 0;
}