#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//approach:create 3 pointers as i,j,k and traverse through arrays

vector<int>common_elements(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
 
    int i=0;
    int j=0;
    int k=0;

    vector<int>ans;
    while(i<n1 && j<n2 && k<n3 ){
        if(arr1[i]<arr2[j] && arr2[j]<arr3[k]){
            //if ans array contains same number it will neglect.
            if(find(ans.begin(),ans.end(),arr1[i])==ans.end()){
                ans.push_back(arr1[i]);
                i++;
                j++;
                k++;
            }

            else if(arr1[i]<arr2[j]){
            i++;
            }

            else if(arr2[i]<arr3[j]){
            i++;
            }

             else {
            k++;
            }

        }
    }
}

