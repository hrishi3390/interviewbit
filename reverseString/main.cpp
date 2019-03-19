//
//  main.cpp
//  reverseString
//
//  Created by Hrishikesh Chaudhari on 19/03/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void reverse(string &word, int start, int end)
{
    while(end > start)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        end--;
        start++;
    }
}


void reverseString(string &original)
{
    int start = 0;
    
    for(int i =0 ; i <original.size(); i++)
    {
        if(original[i] == ' ')
        {
            reverse(original, start, i-1);
            start = i+1;
        }
    }
    
    reverse(original, start, (int)original.size() - 1);
    
    
}


int main(){
    
    string str = "I am in India";
    reverseString(str);
    
    cout<<str<<endl;
    
    return 0;
    
}

