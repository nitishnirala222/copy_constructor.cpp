#include<iostream>
using namespace std;
class test
{
int code;
float price;
public:
test(int c,float p)
{
code=c;
price=p;
}
test(const test &t)
{
code=t.code;
price=t.price;
}
display()
{
cout<<"code= "<<code<<endl;
cout<<"price= "<<price<<endl;
}};
int main()
{
test o1(101,50.5);
test o2(o1);
//test o3=o2;
o1.display();
o2.display();
}
