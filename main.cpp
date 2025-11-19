#include <iostream>
using namespace std;

//p1
/*void setToHundred(int** p);
int main() {
    int n;
    cin>>n;
    int *p=&n;
    setToHundred(&p);
    cout<<*p<<endl;
}
void setToHundred(int** p){
    **p=100;
}*/

//p2
/*void swapRef(int a, int b);
void swapPtr(int* a, int* b);
int main() {
    int x,y;
    cin>>x>>y;
    swapPtr(&x,&y);
}
void swapRef(int a, int b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}
void swapPtr(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;
}*/

//p3
/*int countValid(int *arr, int size) {
   int* p = arr;
    int count = 0;
    int* end = arr + size;
    while (p < end) {
        if (*p!=-1) count++;
        p++;
    }
    return count;
}
int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        string s;
       cin >>s;
        if (s == "-") arr[i] = -1;
        else arr[i] = stoi(s);
    }
    cout << countValid(arr, size)<<endl;
    delete [] arr;
    return 0;
}*/

//p4

/*void fixNeg(int* arr, int size) {
    int* p = arr;
    for (int i = 0; i < size; i++) {
        if (*(p+i) < 0) *(p+i)=0;
        cout << *(p+i) << " ";
    }
}
int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    fixNeg(arr, size);
    delate [] arr;
    return 0;
}*/

//p5

/*int sum2D(int** m, int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum += *(*(m+i)+j);
        }
    }
    return sum;
}
int main() {
    int r = 2, c = 3;
    int** m = new int*[r];
    for (int i = 0; i <r; i++) {
        *(m+i) = new int[c];
    }
    for (int i = 0; i <r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> *(*(m+i)+j);
        }
    }
    cout << sum2D(m, r, c) << endl;

    for (int i = 0; i <r; i++) {
        delete [] *(m+i);
    }
    delete [] m;
    return 0;
}*/

//p6
