#include <iostream>
#include <vector>
#include <algorithm> // For min and max functions
using namespace std;

int maxArea(vector<int>& height) {
    int left=0;
    int right=height.size()-1;
    int max_area=0;
    while(left<right){
        int current_area=min(height[left],height[right])*(right-left);
        max_area=max(max_area,current_area);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return max_area;
}
int main(){
    vector<int> height;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    vector<int> height(n);
    cout<<"Enter the Heights: ";
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    cout<<"The maximum area is: "<<maxArea(height)<<endl;
    return 0;
}
