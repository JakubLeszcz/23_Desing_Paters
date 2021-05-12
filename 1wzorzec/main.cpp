#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CalculatePoints {
public:

    void calculatePoints(){
        cout<<"obliczanie punktów"<<endl;
        checkIfEnd();
    };
    void checkIfEnd(){
        cout<<"sprawdz czy koniec"<<endl;
    };

};
class CheckingDartPostion{
public:
    void checkDartPositon(string rzuty){
        cout<<"Obliczanie pozycji "<<endl;

    };
};

class GameFacade {
public:
    GameFacade(){
    }

    void getPointsAfterTrow(string rzuty){

        getPositon(rzuty);
        getPoints();
    }
private:
    void getPositon(string rzuty) {
        CheckingDartPostion cdp;
        cdp.checkDartPositon(rzuty);

    }
    void getPoints() {
        CalculatePoints cp;
        cp.calculatePoints();
    }
};

class Client {
public:
    void throwDarts() {
        cout << "Pierwszy rzut" << endl;
        cout << "Drugi rzut" << endl;
        cout << "Trzeci rzut" << endl;
        string rzuty;
        GameFacade gf;
        gf.getPointsAfterTrow(rzuty);
    };
    Client(){};

private:
    string playerName;
    int points;
};
int main() {
    Client client = Client();
    client.throwDarts();
    return 0;
}

