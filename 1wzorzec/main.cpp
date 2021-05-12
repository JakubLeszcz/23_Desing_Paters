#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Client {
public:
    void throwDarts() {
        cout << "Pierwszy rzut" << endl;
        cout << "Drugi rzut" << endl;
        cout << "Trzeci rzut" << endl;
    }

private:
    string playerName;
    int points;
};
class GameFacade {
public:
    void getPointsAfterTrow(){

    }
private:
    void getPositon() {
    }
    void getPoints() {
    }
};
class CheckingDartPostion{
private:
    void checkDartPositon();
};
class CalculatePoints {
private:
    GameFacade game;
    Client player;
    void calculatePoints();
    void checkIfEnd();
};
int main() {

    return 0;
}

