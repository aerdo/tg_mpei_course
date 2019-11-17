//https://leetcode.com/problems/rectangle-area/
class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        long int area1=(C-A)*(D-B);//площадь первого прямоугольника
        long int area2=(G-E)*(H-F);//площадь второго прямоугольника
        long int total=area1+area2;//сумма площадей первого и второго
        long int maxLeft=max(A, E);   //
        long int minRight=min(C, G);  //определяем область наложения
        long int maxBottom=max(B, F); //удобно на рисунке показать
        long int minTop=min(D, H);    //
        if(maxLeft>=minRight || maxBottom>=minTop)//если такой нет, то ответ-уже найденная сумма площадей
            return total;
        return total-(minRight-maxLeft)*(minTop-maxBottom);//иначе вычесть
    }
};