//https://leetcode.com/problems/last-stone-weight/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
		while(stones.size()>=2){
			if(stones[stones.size()-1]==stones[stones.size()-2]){
				stones.pop_back();
				stones.pop_back();

			}else{
				int w=stones[stones.size()-1]-stones[stones.size()-2];
				stones.pop_back();
				stones.pop_back();
				stones.push_back(w);
				sort(stones.begin(),stones.end());
			}
		}
		if (stones.empty()) return 0;
		else return stones[0];
    }
};