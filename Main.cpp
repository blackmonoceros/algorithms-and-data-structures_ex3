#include<iostream>

using namespace std;

int random(int min, int max)

{

    int delta;

    if (max < min) // jeśli ktoś podał w niepoprawnej kolejności, to zamieniamy

    {

        int tmp = min;

        min = max;

        max = tmp;

    }

    delta = max - min + 1;

    return rand() % delta + min;

}

int partition(int a[], int L, int R){

 int pivot= a[L];

    int i=L;

    for(int j=L+1;j<=R;j++){

        if(a[j]<pivot){

            i++;

            swap(a[i],a[j]);

            

        }

    }

    swap(a[L],a[i]);

    return i;

}

 void quicksort(int a[], int L, int R){

    if(L<R){

        int j=partition(a,L,R);

        quicksort(a,L,j-1);

        quicksort(a,j+1,R);

    }

}

int maximum(int a[], int n){

  int mx = a[0];

  for (int i=1; i<n; i++){

    if (a[i] > mx) mx = a[i];

  }

  return mx;

}

 

// main

int main()

{

    int t[] = {1, 10, 15, 7, 12, 44, 9, 112, 35, 0};

    int n = sizeof(t) / sizeof(t[0]) - 1;

    cout << "n="<<n<<endl;

    

    t[n] = maximum(t,n);

    quicksort(t,0,n-1);

 

    cout << "Tablica po posortowaniu przez mergesort:" <<endl;

    for (int i=0; i < n; i++)

        cout << t[i] << " ";

    cout <<"\n";

 

    return 0;

}

