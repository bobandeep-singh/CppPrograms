#include <stdio.h>
#include <iostream>
using namespace std;
class Matrix{
    int arr[3][3];
    public:
        void accept();
        void display();
        void operator+(Matrix a);
};

void Matrix :: accept(){
     cout<<"\n Enter Matrix Element 3X3 : \n";
     for(int i = 0; i < 3; i++){
         for(int j = 0; j < 3; j++){
             cin >> arr[i][j];
         }
     }
}

void Matrix::display() {
    for(int i=0; i <= 2; i++) {
        cout<<" ";
        for(int j=0; j <= 2; j++) cout<<arr[i][j] << "\t";
        cout << endl;
    }
}

void Matrix::operator+(Matrix a) {
        int mat[3][3];
        for(int i=0; i < 3; i++)
            for(int j=0; j < 3; j++)
                mat[i][j]=arr[i][j]+a.arr[i][j];
        
        cout<<"\n Addition of Matrix :" << endl;
        for(int i=0; i < 3; i++){
            cout<<" ";
            for(int j=0; j < 3; j++) cout<<mat[i][j]<<"\t";
            cout << endl;
        }
}

int main() {
	// Bobandeep Singh - Roll No: 6164311
    Matrix m,n;
    m.accept();
    n.accept();
    cout<<"\n First Matrix :" << endl;
    m.display();
    cout<<"\n Second Matrix :" << endl;
    n.display();
    m+n;
	return 0;
}
