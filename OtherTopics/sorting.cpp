// merge
#include <iostream>
using namespace std;

void merge(int *,int, int , int );
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,high,mid);
    }
    return;
}
// Merge sort concepts starts here
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
if (a[i] < a[j])
{
    c[k] = a[i];
    k++;
    i++;
}
else
{
    c[k] = a[j];
    k++;
    j++;
}
    }
    while (i <= mid)
    {
c[k] = a[i];
k++;
i++;
    }
    while (j <= high)
    {
c[k] = a[j];
k++;
j++;
    }
    for (i = low; i < k; i++)
    {
a[i] = c[i];
    }
}
// from main mergesort function gets called
int main()
{
    int a[30], i, b[30];
    cout<<"enter  the number of elements:";
    for (i = 0; i <= 5; i++) { cin>>a[i];
    }
    mergesort(a, 0, 4);
    cout<<"sorted array\n";
    for (i = 0; i < 5; i++)
    {
cout<<a[i]<<"\t";
    }
    cout<<"enter  the number of elements:";
    for (i = 0; i < 5; i++) { cin>>b[i];
    }
    mergesort(b, 0, 4);
    cout<<"sorted array:\n";
    for (i = 0; i < 5; i++)
    {
cout<<b[i]<<"\t";
    }
    getch();
}


// sel3ction
#include <iostream>
using namespace std;

int main()
{
    int a[100], i, n, p, k, min, loc, tmp;

    cout << "\n------------ SELECTION SORT ------------ \n\n";
    cout << "Enter No. of Elements:"; cin >> n;

    cout << "\nEnter Elements:\n";
    for (i = 1; i <= n; i++) { cin >> a[i];
    }

    for (p = 1; p <= n - 1; p++) // Loop for Pass
    {
        min = a[p]; // Element Selection
        loc = p;

        for (k = p + 1; k <= n; k++) // Finding Min Value { if (min > a[k]) {
                min = a[k];
                loc = k;
            }
        }

        tmp = a[p];
        a[p] = a[loc];
        a[loc] = tmp;
    }
    cout << "\nAfter Sorting: \n";
    for (i = 1; i <= n; i++) {
        cout << a[i] << endl;
    }
}


algorithm Bubble_Sort(list)
Pre: list != fi
Post: list is sorted in ascending order for all values
for i <- 0 to list:Count - 1
for j <- 0 to list:Count - 1
if list[i] < list[j]
Swap(list[i]; list[j])
end if
end for
end for
return list
end Bubble_Sort
