class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)
        return 1;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0)
            return 1;
            else
            return 0;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
        flowerbed[0]=1;
        n--;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0){
            if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0)
        n--;

        if(n<=0)
        return true;
        return false;
    }
};