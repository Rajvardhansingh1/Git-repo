#include <iostream>

using namespace std;

class Player
{
public:

    int speed;
    int x,y;

    void Move(int xa ,int ya)
    {
        x += xa *speed;
        y += ya *speed;

    }
};

int main()
{
    Player player;
    player.speed = 100;
    cout<<player.speed;
}