class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right= heights.size()-1;
        int max=0;
        int area;
        while (left<right){
            if (heights[left]<heights[right]){
                 area=heights[left]*(right-left);
                left++;
            }
            else{
                 area=heights[right]*(right-left);
                right--;
            }
            if (area>max){
                max=area;
            }
            
        }
        return max;
        
    }
};
