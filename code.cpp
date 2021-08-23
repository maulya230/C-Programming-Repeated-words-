#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
   
int main()  
{  
    int n;
    cout<<"Enter the string length ";
    cin>>n;
    cout<<"Enter the string ";
    char string[n]; 
    for(int i=0; i<n; i++){
    cin>>string[i];
    }
    int count;  
    cout<<"Duplicate characters in a given string: "<<endl;  
    
    for(int i = 0; i < strlen(string); i++) {  
        count = 1;  
        for(int j = i+1; j < strlen(string); j++) {  
            if(string[i] == string[j] && string[i] != ' ') {  
                count++;  
                
                string[j] = '0';  
            }  
        }  
        
        if(count > 1 && string[i] != '0')  
            cout<< string[i]<<" ";  
    }  
   
    return 0;  
}  
