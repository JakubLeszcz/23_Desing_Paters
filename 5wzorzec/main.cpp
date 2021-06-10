#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Netfilx  {
public:
    void otworz_Netflix(){
        cout<<"Netflix otwarty"<<endl;
    };
    void wlacz_TV();
};

class Pilot{
public:
    void wlacz_TV(){
        cout<<"TV wlaczony"<<endl;
    };
    void wlacz_Dekoder(){
        cout<<"dekoder wlaczony"<<endl;
    };;
    void przelacz_Kanal(){
        cout<<"kanal przelaczony"<<endl;
    };;
};

class PilotDekorator{
public:
    Pilot* base_pilot;
    PilotDekorator(Pilot* base_pilot){
        this->base_pilot=base_pilot;
    };
    void wlacz_TV(){
        base_pilot->wlacz_TV();
    };
};

class TV {
public:
    void wlacz_TV();
};

class Youtube {
public:
    void otworz_Youtube(){
        cout<<"youtube otwarty"<<endl;
    };
    void wlacz_TV();
};
int main() {
    Pilot *p  =  new Pilot();
    PilotDekorator a  = PilotDekorator(p);
//    a.wlacz_TV();
    p->wlacz_TV();
    Netfilx n= Netfilx();
    Youtube y= Youtube();
    n.otworz_Netflix();
    y.otworz_Youtube();
    return 0;
}

