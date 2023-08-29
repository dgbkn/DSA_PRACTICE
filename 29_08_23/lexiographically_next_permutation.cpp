
// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).
// For example, the next permutation of arr = [1,2,3] is [1,3,2].

// https://leetcode.com/problems/next-permutation/

#include<iostream>

using namespace std;

int noOfPairs(int *a, int size){
    int c = 0;
    for (int i = size-1; i > 0; i--)
    {
        if(a[i-1] >= a[i]){
            c++;
        }else{
            break;
        }

    }
    return c + 1;
}


int main(){
// cout << "NO OF ELEMENTS" << endl;
// int size;
// cin >> size;
// cout << endl;
// cout << endl;
// cout << endl;

// int *a = new int[size];

int size = 6;
int a[] = {4,2,2,0,3,3};

// for (int i = 0; i < size; i++)
// {
//     cin >> a[i];
// }


int removeIndex = size - noOfPairs(a, size) - 1;
cout <<  noOfPairs(a, size) << "   - >    " << removeIndex << endl;

int maxIndex = 0;

int prevDiff;
  int diff;

for (int i = removeIndex + 1; i < size; i++)
{
    if(a[i] > a[removeIndex]){
    diff = a[i] - a[removeIndex];
    if(prevDiff < diff){
        continue;
       }
       maxIndex = i;
       prevDiff = diff;
    }
}



int temp = a[removeIndex];
a[removeIndex] = a[maxIndex];
a[maxIndex] = temp;

for (int i = removeIndex + 1 ; i < size; i++)
{
    //linear sort the remaining array
    for (int j = i + 1; j < size; j++)
    {
        if(a[i] > a[j]){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }   

}

for (int i = 0; i < size; i++)
{
    cout << a[i] << " ";
}

cout << endl;

}