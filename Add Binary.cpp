//https://leetcode.com/problems/add-binary/
class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1;
        string res="";
        int sum=0;
        char c;
        while(i>=0 || j>=0) {
            if(i>=0)
                sum+=a[i]-'0';
            if(j>=0)
                sum+=b[j]-'0';
            c='0'+sum%2;
            res.insert(0, 1, c);
            sum/=2;
            i--;
            j--;
        }
        if(sum>0) res.insert(0, 1, '1');
        return res;
    }
};