#include <iostream>
#include<conio.h>
using namespace std;

class complex
{
private:
    int real,img;
public:
    void read()
    {
        cin>>real>>img;
    }
    void display()
    {
        if(img>0)
            cout<<real<<"+"<<img<<"i"<<endl;
        else
            cout<<real<<img<<"i"<<endl;
    }
    void sum(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }


};
int main()
{
    complex c1,c2,c3;
    cout<<"enter 1st complex!"<<endl;
    c1.read();
    cout<<"enter 2nd complex!"<<endl;
    c2.read();
    cout<<"1st complex:"<<endl;
    c1.display();
    cout<<"2nd complex:"<<endl;
    c2.display();
    c3.sum(c1,c2);
    cout<<"resultant complex is: "<<endl;
    c3.display();
    getch();
    return 0;
}
