//
//  binarySearch.cpp
//  programingBasics
//
//  Created by Hrishikesh Chaudhari on 13/03/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include "binarySearch.hpp"

void binarySearch(int *a, int size, int x)
{
    int mid;
    int start = 0;
    int end= size-1;
    
    while(start <= end){
        
        mid = start + (end - start)/2;
        
        if(a[mid] == x)
        {
            cout<< "Element is found"<<endl;
            return;
        }
        
        if(a[mid] > x)
            end = mid -1;
        if(a[mid] < x)
            start = mid+1;
    }
    
    cout<<"Element could not be found"<<endl;
    
}

int firstOccurenceOfElement(int *a, int size, int x){
    
    int mid;
    int low, high;
    int result = -1;
    
    low = 0;
    high = size -1;
    
    while(low <= high)
    {
        mid = low + (high- low)/2;
        
        if(a[mid] == x)
        {
            result = mid;
            high = mid - 1;
        }
        else if (a[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    
    return result;
}

int lastOccurenceOfElement(int *a, int size, int x){
    
    int mid;
    int low, high;
    int result = -1;
    
    low = 0;
    high = size -1;
    
    while(low <= high)
    {
        mid = low + (high- low)/2;
        
        if(a[mid] == x)
        {
            result = mid;
            low = mid + 1;
        }
        else if (a[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    
    
    return result;
}


int findNumberOfOccurences(int *a, int size, int x){
    
    return lastOccurenceOfElement(a, size, x) - firstOccurenceOfElement(a, size, x) +  1;
    
    
}