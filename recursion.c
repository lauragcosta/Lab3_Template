int min(int, int);

int min(int x, int y)
{
    return (x<y)?x:y;
}

int arrayMinimum(int arr[], int arrLength)
{
    if(arrLength == 1)
    {
        return arr[0];
    }
    else
    {
        return min(arr[arrLength-1], arrayMinimum(arr, arrLength-1));
    }
}

int arraySumEven(int arr[], int arrLength)
{
    if(arrLength == 0)
    {
        return 0;
    }
    else
    {
        if(arr[arrLength-1]%2 == 0)
        {
            return arr[arrLength-1] + arraySumEven(arr, arrLength-1);
        }
        else
        {
            return arraySumEven(arr, arrLength-1);
        }
    }
}