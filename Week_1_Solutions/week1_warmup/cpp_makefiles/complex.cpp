#include<bits/stdc++.h>
using namespace std;

struct Complex{
    int real,img;
}c1,c2,c3,res;

Complex& add(Complex &c1,Complex &c2){

    res.real = c1.real+c2.real;
    res.img = c1.img+c2.img;

    return res;
}

int main(){

    //complex c1,c2,c3;

    cout<<"Enter real and imaginary part of 1st complex number = ";
    cin>> c1.real>>c1.img;

    //cout<<"\n";
    cout<<"Enter real and imaginary part of 2nd complex number = ";
    cin>> c2.real>>c2.img;

    c3 = add(c1,c2);

    cout<<"Addition of "<<c1.real<<"+"<<c1.img<<"i and "<<c2.real<<"+"<<c2.img<<"i is = ";
    cout<<c3.real<<"+"<<c3.img<<"i"<<"\n";
}