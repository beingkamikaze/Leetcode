class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int a=0,b=0;
        vector<char>voy={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i=0;i<n/2;i++){
            for(auto x : voy){
                if(s[i]==x){
                    a++;
                    break;
                }
            }
        }
        for(int i=n/2;i<n;i++){
            for(auto x : voy){
                if(s[i]==x){
                    b++;
                    break;
                }
            }
        }
        return a==b;
    }
};
