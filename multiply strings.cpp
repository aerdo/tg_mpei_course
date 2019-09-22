// https://leetcode.com/problems/multiply-strings/
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1=="0"||num2=="0"){
            return "0";
        }else{
            int n=num1.size();
            int m=num2.size();
            string answ(n+m,'0');
            int c=0,sum=0; 
            for (int i=n-1; i>=0; i--){
                for (int j=m-1; j>=0; j--){//считаем "столбиком" 
                    sum=(num1[i]-'0')*(num2[j]-'0')+c+answ[i+j+1]-'0';
                    answ[i+j+1]=sum%10+'0';
                    c=sum/10;
                }
                answ[i]+=c;
                c=0;
            }
            int i=0;
            while (i<answ.size()&&answ[i]=='0'){
                i++;
            }
            answ=answ.substr(i);
            return answ;
        }
    }
};