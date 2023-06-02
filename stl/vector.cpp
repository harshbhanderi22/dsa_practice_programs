#include<iostream>
#include<vector>

using namespace std;

//Vector is dynamic type of array
//Vector will double its size when it reach to its capacity
//Example, If Size is 2 and if we try to add 3rd element, Vector size will be doubled to 4

int main(){

    //Empty Vector
    vector<int> a;

    //Intialize Vector with Size And Element
    vector<int> b(5, 1);
    //Size of this vector will be 5 and all element will be intialized with 1

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << endl;
    }

    vector<int> c(b);
    //It will directly copy vector in C, B vector is copied directly into C

    //Add Element in Vector 
    a.push_back(1);
    cout << "Capacity of Vector is " << a.capacity() << endl;
    cout << "Size of vector is " << a.size() << endl;

    a.push_back(2);
    cout << "Capacity of Vector is " << a.capacity() << endl;
    cout << "Size of vector is " << a.size() << endl;

    a.push_back(3);
    cout << "Capacity of Vector is " << a.capacity() << endl;
    cout << "Size of vector is " << a.size() << endl;

    a.push_back(4);
    cout << "Capacity of Vector is " << a.capacity() << endl;
    cout << "Size of vector is " << a.size() << endl;

    cout << "Before Pop Back" << endl;
    //before Pop Back
    for (int i = 0; i < a.size();i++){
        cout << a[i] << endl;
    }

    // It Will Remove last element from vector
    a.pop_back();

    //After Pop Back
    cout << "After Pop Back" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    cout << "First Element is " << a.front() << endl;
    cout << "Last Element is " << a.back() << endl;

    cout << "Clear Vector" << endl;
    //Clearing Vector will not reduce capacity, It will make size 0 by removing all element
    a.clear();

    cout << "Size of Array after clear is " << a.size() << endl;
    cout << "Capacity of array after clear is " << a.capacity() << endl;
}