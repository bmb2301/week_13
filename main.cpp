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
/*void printIfValid(int* p) {
    if (*p == -1) {
        cout<<"null";
    }
    else {
        cout<<*p;
    }
}
int main() {
    int i = 0;
    int* p = new int[i];
    int* p1 = p;
    bool l = true;
    int d = 0;
    while (l) {
        string input;
        cin >> input;
        if (input == "n") *(p+i) = -1;
        else *(p+i) = stoi(input);
        cout << "You wanna continue?(y/n)";
        string answer;
        cin >> answer;
        if (answer == "n") {
            l = false;
        }
        else i++;
    }
    while (i!=-1) {
        *p1=*(p+d);
        printIfValid(p1);
        d++;
        i--;
        if (i!=-1) cout<<" , ";
    }
    delate [] p;
    return 0 ;
}*/

//p7
/*int* findMax(int* arr, int size) {
    int* MaxValue = arr;
    for (int* p = arr; p < arr + size; p++) {
        if (*MaxValue < *p) MaxValue = p;
    }
    return MaxValue;
}
int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    int* max = findMax(arr, size);
    cout << *max << endl;
}*/

//p8
/*void reverseArr(int** arr, int size) {
    int* p = *arr;
    int left = 0, right = size - 1;
    while (left < right) {
        int temp = *(p + left);
        *(p + left) = *(p + right);
        *(p + right) = temp;
        left++;
        right--;
    }
}
int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int*p = arr;
    reverseArr(&p,size);
    for (int i = 0; i < size; i++) {
        cout << *(p+i)<<" ";
    }
    return 0;
}*/

//p9
/*void avg(const double* arr, int size, double* result) {
    for (int i = 0; i < size; i++) {
        *result += *(arr + i);
    }
    *result /= size;
}
int main() {
    int size;
    cin >> size;
    double* arr = new double[size];
    double result=0;
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    avg(arr, size, &result);
    cout << result;
    delete [] arr;
}*/

//p10
void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
    for (int i = 0; i < n; i++) {
        *(out + i) = *(a + i);
    }
        for (int i = n; i < m+n; i++) {
            for (int j = 0; j < m; j++) {
                *(out + i) = *(b + j);
            }
        }

    }
int main() {
    int n;
    cin >> n;
    int * a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }
    int m ;
    cin >> m;
    int * b = new int[m];
    for (int i = 0; i < m; i++) {
        cin >> *(b + i);
    }
    int out = 0;
    mergeSorted(a, n, b, m, &out);
    cout << out ;
}