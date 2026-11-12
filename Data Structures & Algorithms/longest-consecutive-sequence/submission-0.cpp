class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> damn (nums.begin(), nums.end());
        int longstreak = 0;
        for (int num : damn) {
            int current_num = num;
            int streak = 1;
            if (!damn.count(current_num - 1)) { 
                while (damn.count(current_num + 1)) { //kind of like if , it loops over whole set but if just check one specific condition
                    streak+= 1;
                    current_num+=1;
                    
                    
                }
            longstreak = max (longstreak,streak);
            }
            
        
        }
        return longstreak;


        


        
        
    }
};
