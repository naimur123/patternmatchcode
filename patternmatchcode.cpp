// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string p;
    string t;
    cout<<"Enter your text:";
    cin>>t;
    cout<<"Enter your pattern:";
    cin>>p;
    int plength= 0;
    int tlength= 0;
    int count = 0;
    for(int i=0;t[i]!='\0';++i){
        tlength++;
    }
    for(int j=0;p[j]!='\0';++j){
        plength++;
    }
    for(int i= 0; i<= tlength - plength; i++){
        int j= 0;
        for(j=0; j<plength; j++){
            if(t[i+j] != p[j]){
                break;
            }
        }
        if(j==plength){
            count++;
        }
    }
    cout << "Pattern " << p << " spaces " " appears " << count << " times in the text " << t << "spaces" << endl;
    
    
}