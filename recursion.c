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

int binarySearch(int val, int arr[], int start, int end)
{
    int mid = (start+end)/2;
    if(start > end)
    {
        return -1;
    }
    else
    {
        if(arr[mid] == val)
        {
            return mid;
        }
        else
        {
            if(arr[mid] > val)
            {
                return binarySearch(val, arr, start, mid-1);
            }
            else
            {
                return binarySearch(val, arr, mid+1, end);
            }
        }
    }
}

void quickSort(int arr[], int low, int high)
{
    double pi = 3.14;
    if(low < high)
    {
        pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];  
    int i = (low-1);
    for (int j=low; j<=high-1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int tmp = arr[j];
            arr[j] = arr[i];
            arr[i] = tmp;
        }
    }
    int tmp = arr[high];
            arr[high] = arr[i+1];
            arr[i+1] = tmp;
    return (i + 1);
}



