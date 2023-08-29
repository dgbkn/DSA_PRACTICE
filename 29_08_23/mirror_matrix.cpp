//input diagonal and upper diagonal matrix and make symmetric matrix from it..


#include<iostream>

using namespace std;


int main(){
cout << "ENTER THE ORDER OF MATRIX" << endl;
int size;
cin >> size;

int m_size = size * size;

int *a = new int[m_size];

cout << "ENTER THE ELEMENT S OF DIAGONAL" << endl;

//diagonal size+1
for (int i = 0; i < size; i++)
{
    cin >> a[i * (size + 1)]; 
}


cout << "ENTER THE UPPER DIAGONAL ELEMENTS" << endl;


int c = 0;

// upper diagonal mirrors to lower diagonal
for (int i = 0; i < size; i++)
{

    for (int j = i * (size + 1) + 1; j <= (((i+1) * size) - 1); j++)
    {
       cin >> a[j]; 
       c++;
       a[j +  c * (size - 1)] = a[j];
    }
    c=0;
    
}



for (int i = 0; i < m_size; i++)
{
    cout << a[i] << " ";
    if((i+1) % size == 0){
        cout << endl;
    }

}

}