//https://leetcode.com/problems/day-of-the-week/
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<int> daysInMonth={31,28,31,30,31,30,31,31,30,31,30,31};
        //первое января 1971-пятница, поэтому массив с пятницы
        vector<string> res={"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        
        int totalDays=(year-1971)*365;
        
        int leapYears=0;
        for(int i=1972; i<=year; i+=4)
        if ((i%4==0 && i%100!=0) || i%400 == 0) leapYears++;
        
        totalDays+=leapYears; 
        
        for(int i=0; i<month-1; i++)
        totalDays+=daysInMonth[i];
        totalDays+=day-1;
        
        if (month==2 && day==29) totalDays--;
        
        return res[totalDays%7];
    }
};