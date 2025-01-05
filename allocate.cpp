#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> names = {"Rushi","Sourabh","Sushant","Suyash","Vinayak","Pranav"};
    vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
   
    vector<string> tasks = {"Kadhai", "Cooker"};

    cout<<days[0]<<":"<<names[0]<<":"<<tasks[0]<<" "<<":"<<names[1]<<":"<<tasks[1]<<endl;
    cout<<days[1]<<":"<<names[1]<<":"<<tasks[0]<<" "<<":"<<names[2]<<":"<<tasks[1]<<endl;
    cout<<days[2]<<":"<<names[2]<<":"<<tasks[0]<<" "<<":"<<names[3]<<":"<<tasks[1]<<endl;
    cout<<days[3]<<":"<<names[3]<<":"<<tasks[0]<<" "<<":"<<names[4]<<":"<<tasks[1]<<endl;
    cout<<days[4]<<":"<<names[4]<<":"<<tasks[0]<<" "<<":"<<names[5]<<":"<<tasks[1]<<endl;
    cout<<days[5]<<":"<<names[5]<<":"<<tasks[0]<<" "<<":"<<names[6]<<":"<<tasks[1]<<endl;
    cout<<days[6]<<":"<<names[6]<<":"<<tasks[0]<<" "<<":"<<names[0]<<":"<<tasks[1]<<endl;

}