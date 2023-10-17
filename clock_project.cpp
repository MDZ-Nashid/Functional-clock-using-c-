#include <iostream>
#include <ctime>
#include <windows.h>
#include <unistd.h>
#include<conio.h>
using namespace std;
int main() {
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    int hour = now->tm_hour;
    int minute = now->tm_min;
    int second = now->tm_sec;
    pair<int,int> p1;
    p1 = {hour,minute};
    int s2=second;
    string x;
    while(!kbhit()){
            if(p1.first==24){
                p1.first=0;
            }
            if(p1.second==60){
                p1.second=0;
                p1.first++;
            }
            if(s2==60){
                s2=0;
                p1.second++;
            }
            if(hour>12){
                p1.first=hour-12;
                x="PM";
            }
            else{
                x="AM";
            }
            cout<<"\t\t\t\t\t\t"<<p1.first<<":"<<p1.second<<":"<<s2<<" "<<x;
            s2++;
            sleep(1);
            system("cls");
    }
    return 0;
}



