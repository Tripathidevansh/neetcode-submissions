class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int maxheight=0;
        while(i<j){
            int level=0;
            if (heights[j]<heights[i]){
            level= (j-i)*heights[j];
            j--;
            }   
            else if (heights[j]>=heights[i]){
                level= (j-i)*heights[i];
                i++;
            }
            maxheight=max(maxheight,level);
    }
    return maxheight;
}
};