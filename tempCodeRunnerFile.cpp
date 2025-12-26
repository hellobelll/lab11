#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string rand(int i){
    //string grade[9]= {"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    string grade;
    i = rand() % 7;
    if(i==0) grade = "A";
    else if(i==1) grade = "B+";
    else if(i==2) grade = "B";
    else if(i==3) grade = "C+";
    else if(i==4) grade = "C";
    else if(i==5) grade = "D+";
    else if(i==6) grade = "D";
    else if(i==7) grade = "F";
    else grade = "W";
    return grade;
}
int main() {
    int i;
cout << "Press Enter 3 times to reveal your future.";
cin.get();
cin.get(); 
cin.get();
cout << "You will get "<< rand() <<" in this 261102.";
cout << "You will get "<< rand() <<" in this 261102.";
cout << "You will get "<< rand() <<" in this 261102.";
}
    // Uncomment the lines below to reveal your future
   

