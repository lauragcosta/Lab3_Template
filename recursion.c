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