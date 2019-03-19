//
//  main.cpp
//  binarySearch
//
//  Created by Hrishikesh Chaudhari on 13/03/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

//binary search where the preconditiion is the array is already sorted.

#include "binarySearch.hpp"
#include <string>

int main(int argc, const char * argv[]) {
   
    int a[] {1,2,3,4,5,6,6,6,6,6,7,8,9,10};
    
    int size = sizeof(a)/sizeof(a[0]);
    //binarySearch(a,size, 99);
    cout<<"First occurenece of 6 is: "<<firstOccurenceOfElement(a, size, 6)<<endl;
    
    cout<<"last occurenece of 6 is: "<<lastOccurenceOfElement(a, size, 6)<<endl;
    
    cout<<"Total number of occurences: "<<findNumberOfOccurences(a, size, 6)<<endl;
    
    return 0;
}

