#include<iostream>
using namespace std;

int main() {
    double distance = 0,walk_v = 1.2,bike_v = 3.0;
    cin >>distance;
    double walk_time = distance/walk_v;
    double bike_tmie = distance/bike_v+50.0;
    if(walk_time<bike_tmie) cout<<"Walk";
    else if(walk_time==bike_tmie) cout<<"All";
    else cout<<"Bike";
    return 0;
}