#include<iostream>
using namespace std;
class Player
{
    private:
    int health;
    int age;
    int score;
    bool alive;
    public:
    int getHealth()
    {
        return health;
    }
     int getAge()
    {
        return age;
    }
     int getScore()
    {
        return score;
    }
     int isAlive()
    {
        return alive;
    }
     int setHealth(int health)
     {
        this->health=health;
     }
     int setAge(int age)
     {
        this->age=age;
     }
     int setScore(int score)
     {
        this->score=score;
     }
      void  setisAlive(int alive)
     {
        this->alive=alive;
     }
};
  int add(int a,int b)
  {
    return a+b;
  }
  int addScore(Player a, Player b)
  {
    return a.getScore()+b.getScore();
  }

  Player  getMaxScorePlayer(Player x,Player y)
  {
    if(x.getScore()>y.getScore())
    return x;
    else 
    return y;

  }

int main()
{
    Player harsh;
    Player raghav;
    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setisAlive(true);
    harsh.getHealth();

    raghav.setAge(25);
    raghav.setScore(1066);
    raghav.setisAlive(true);
    raghav.getHealth();
    cout<<add(10,12);
    cout<<endl;
    cout<<addScore(harsh,raghav);
    cout<<endl;
    Player sanket=getMaxScorePlayer(harsh,raghav);
    cout<<sanket.getScore();

}