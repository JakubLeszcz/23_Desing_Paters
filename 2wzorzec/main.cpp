#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Observer {
public:
    virtual void update(string notification);
};

class Team {
public:
    void addUser(Observer* observer){
        users.push_back(observer);
    };
    void deleteUser(Observer *observer){
        for(int i = 0; i<observers.size(); i++) {
            if (users[i] == user) {
                users.erase(observers.begin()+i);
                break;
            }
        }
    };
    void sendNotification(){
    };
private:
    vector <Observer*> users;
};

class User : public Observer {
private:
    string name;

public:
    User(string name){
        this->name = name;
    }
    void update(string notification){
        cout<<this->name<< " recivied notification: "<<notification<<endl;
    };
};


int main() {
    User *user = user("DSADASF");

    return 0;
}

