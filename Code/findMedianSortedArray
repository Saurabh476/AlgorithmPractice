#include<bits/stdc++.h>
using namespace std;

int main(){
	int size1 = nums1.size(),left1=0,left2=0,size;
        int size2 = nums2.size(),mid1,mid2,len1,len2;
        len1 = size1;
        len2 = size2;
        cout<<len1<<" "<<len2;
        vector<int> temp;
        double median;
        size = len1 + len2;
        
        if(size1 == 0){
            if(size2%2 == 0){
                mid2 = size2/2;
                median = (nums2[mid2] + nums2[mid2-1])/2.0;
                return median;
            }
            else{
                mid2 =size2/2;
                median = nums2[mid2];
                return median;
            }
        }
        if(size2 == 0){
            if(size1%2 == 0){
                mid2 = size1/2;
                median = (nums1[mid2] + nums1[mid2-1])/2.0;
                return median;
            }
            else{
                mid2 = size1/2;
                median = nums1[mid2];
                return median;
            }
        }
        
        
        while(size>4 && size1!=0 && size2 != 0){
            mid1 = left1 + (len1 - left1)/2;
            mid2 = left2 + (len2 - left2)/2;
            if(nums1[mid1]<nums2[mid2]){
                left1 = mid1;
                len2 = mid2;
            }
            else if(nums1[mid1]>=nums2[mid2]){
                len1 = mid1;
                left2 = mid2;   
            }
            size1 = len1 - left1;
            size2 = len2 - left2;
            size = size1 + size2;
        }
        if(size2 == 0){
            for(int i=left1;i<len1;i++)
                temp.push_back(nums1[i]);
        }
        else if(size1 == 0){
            for(int i=left2;i<len2;i++)
                temp.push_back(nums2[i]);
        }
        else{
            
        }
        
        sort(temp.begin(),temp.end());
        
        if(size == 4){
            median = (temp[1] + temp[2])/2.0;
        }
        else if(size == 3)
            median = temp[1];
        
        else if(size == 2)
        {
            median = (temp[0]+temp[1])/2.0;
        }
        else if(size == 1)
        {
            median = temp[0];
        }
        
}