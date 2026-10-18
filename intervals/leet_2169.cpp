// 3169. Count Days Without Meetings
// You are given a positive integer days representing the total number of days an employee is available for work (starting from day 1). You are also given a 2D array meetings of size n where, meetings[i] = [start_i, end_i] represents the starting and ending days of meeting i (inclusive).

// Return the count of days when the employee is available for work but no meetings are scheduled.
// Note: The meetings may overlap.
// Example 1:
// Input: days = 10, meetings = [[5,7],[1,3],[9,10]]
// Output: 2
// Explanation:
// There is no meeting scheduled on the 4th and 8th days.

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        vector<vector<int>> ans;

        sort(meetings.begin(), meetings.end());
        ans.push_back(meetings[0]);

        for(int i=1; i<meetings.size(); i++){
            if(meetings[i][0] <= ans[ans.size()-1][1]){
               ans[ans.size()-1][0] = min(ans[ans.size()-1][0],meetings[i][0]);
               ans[ans.size()-1][1] = max(ans[ans.size()-1][1],meetings[i][1]);
            }else{
                ans.push_back(meetings[i]);
            }
        }

        int gap = 0;
        for(int i=1; i<ans.size(); i++){
            gap += ans[i][1] - ans[i-1][0] -1;
        }

        gap += ans[0][0] -1;
        gap += days - ans[ans.size()-1][1];

        return gap;
    }
};


// second approach
