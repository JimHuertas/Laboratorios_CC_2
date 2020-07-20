#include<bits/stdc++.h> 
#include<vector>
using namespace std;

int main() { 
    vector<int> vec1 {1, 2, 3, 4, 5}; 
    vector<int> vec2 {7, 7, 7, 7, 7}; 
  
    //Impresion
    cout << "Vector1: "; 
    for(int i=0; i<vec1.size(); i++) 
        cout << " " << vec1[i]; 
    cout << "\n"; 
      
    //Impresion 
    cout << "Vector2: "; 
    for(unsigned int i = 0; i<vec2.size(); i++) 
        cout << " " << vec2[i]; 
    cout << "\n\n"; 
      
    //Usando move con parametros en arrays
    std::move(vec1.begin(), vec1.begin() + 4, vec2.begin() + 1); 
      
    //Impresion
    cout << "Vector2 despues de usar std::move: "; 
    for(unsigned int i = 0; i < vec2.size(); i++) 
        cout << " " << vec2[i]; 
    cout << "\n";

    return 0; 
} 