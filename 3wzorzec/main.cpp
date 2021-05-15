#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chessboard {
public:
    string positon;
    void startGame(){
        cout<<"Game started"<<endl;
    };
    void update(){
        cout<<"Position has been updated"<<endl;
    };
    Chessboard getChessboard();
private:
    vector<players> players;
    void <create>Chessboard();
};

class Player {
public:
    Player(string name, string color){
        this.name = name;
        this.color = color;
    };
    void move(){
        cout<<"Player " << this->name <<" has moved"<<endl;
    };
private:
    string name;
    string color;
};


int main() {
    Player player = Player("ziomo 1 ", "white");

    return 0;
}

