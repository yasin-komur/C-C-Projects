#include<iostream>

using namespace std;

int main() {

    int A[5];

    A[0] = 5;
    A[1] = 10;
    A[2] = 15;

    // std::cout<<"Hello World!\n";
    //printf("%d\n", A[0]);
    //printf("%d\n", A[1]);

    //std::cout<<sizeof(A);

    for (int i=0; i<5; i++) {
        printf("%d\n", A[i]);
    }

    for (int x:A) {
        cout<<x<<endl;
    }
}



