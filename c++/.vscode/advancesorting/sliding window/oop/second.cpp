#include<iostream>
using namespace std;
class player
{ 
    public:
    int score;//data member
    int health;
    void showHealth()//member function
    {
        cout<<"Health is :"<<health<<endl;
    }
    void showScore()
    {
       cout<<"Score:"<<score;
    }
    
};

int main()
{
    int score[100]={};
    int health[100]={};
    player amit;
    amit.score=90;
    amit.health=100;
    amit.showHealth();
    amit.showScore();

}