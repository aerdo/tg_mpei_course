//https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public: 
    string defangIPaddr(string address) {
        string newAddress="";
        int n=address.size();
        for (int i=0; i<n; i++){
            if (address[i]=='.'){
                newAddress=newAddress+"[.]";
            }else{
                newAddress=newAddress+address[i];
            }
        }
        return newAddress;
    }
};