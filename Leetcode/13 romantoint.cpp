class Solution {
    public:
        int nums(char x){
            if(x=='I') return 1;
            else if(x=='V') return 5;
            else if(x=='X') return 10;
            else if(x=='L') return 50;
            else if(x=='C') return 100;
            else if(x=='D') return 500;
            else return 1000;
        }
        int romanToInt(string s) {
            int n=s.size();
            int ans =0,i=0;
            while(i<n-1){
                if(nums(s[i])<nums(s[i+1])) ans = ans-nums(s[i]);
                else ans = ans+nums(s[i]);
                i++;
            }ans = ans + nums(s[n-1]);
            return ans;
        }
    };