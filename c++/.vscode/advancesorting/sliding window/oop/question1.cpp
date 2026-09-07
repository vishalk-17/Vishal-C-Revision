#include<iostream>
using namespace std;
class Book
{
    public:
    
    char name;
    int price;
    int noofpages;
    int countBooks(int p)
    {
        if(price<p)
        return true;
        else
        false;
    }
    bool isBookpresent(char book)
    {
        if(name==book)
        return true;
        else
        return false;
    }
};
   int main()
   {
    Book harryPotter;
    harryPotter.name='H';
    harryPotter.price=1000;
    harryPotter.noofpages=500;
    cout<<harryPotter.isBookpresent('B');
   }