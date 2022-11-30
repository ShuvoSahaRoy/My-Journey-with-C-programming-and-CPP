#include<iostream>
using namespace std;

class Player {
  public:
    int age;
    string name;
};

class CricketPlayer: public Player
{
    public:
    void playerType()
    {
        cout << "Cricket Player\n";
    }
};

class FootballPlayer: public Player
{
    public:
    void playerType()
    {
        cout << "Football Player\n";
    }
};

int main()
{
    CricketPlayer obj4Cricket;
    obj4Cricket.playerType();

    FootballPlayer obj4Football;
    obj4Football.playerType();

}
