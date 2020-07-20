#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> v;
    string s {"Hola Soy Jim"};
    v.push_back(string("Hola Soy Jim"));
    cout<<v[0];
    v.emplace_back("Hola Soy Jim");

    v.push_back(s);
    v.push_back(std::move(s));
    
    return 0;
}