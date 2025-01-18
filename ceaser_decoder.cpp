#include<iostream>
#include<string>
using namespace std;

void ceaser(string &str , int k) {

    for (char &i: str) {
        if (i <= 90 && i >= 65){
              int result = i - k; 
                if(result < 65){
                    int rem = 65 - result;
                    i = 90 - rem - 1;
                }
                else i = result;
        }
        else if( i <= 122 && i >= 97){
                int result = i - k; 
                if(result < 97){
                    int rem = 97 - result;
                    i = 122 - rem - 1;
                }
                else i = result;
        }
            
    }
}

int main(){
    cout<<"Enter the word : ";

    string word;getline(cin , word);
    cout<<"\nEnter the key : ";

    int key;cin>>key;

    cout<<endl;
    ceaser(word , key);
    cout<<word;
}
