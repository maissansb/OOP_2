#include <iostream>
using namespace std;
class journey{
private:
    string city;
    int points;
    double ttime;
public:
    void calculatePoints ();
    void print();
    void set(string, double);
    void get(string &, double &, int &)const;
};
void journey::calculatePoints( ){

    points=20*ttime;

}
void journey::set(string c, double t){
    city=c;
    ttime=t;
}
void journey::print( ){
    cout<<"Your destination is: "<<city<<" the time is: "<<ttime<<" and the points are: "<<points;

}
void journey::get(string &c, double &t, int &p)const{
    c=city;
    t=ttime;
    p=points;

}
int main (){
    journey x;
    int j, total=0,p;
    string c;
    double t;
    cout<<"Enter the number of journeys: ";
    cin>>j;
    for (int i=0; i<j;i++){
       cout<<"Enter the city, and travel time: ";
       cin>>c>>t;
       x.set(c,t);
       x.calculatePoints ();
       x.print();
       x.get(c,t,p);
       total+=p;
       cout<<endl;
    }
    cout<<"The total number of points: "<<total<<endl;
    return 0;

}