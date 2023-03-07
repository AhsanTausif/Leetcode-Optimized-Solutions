class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(), time.end());
        long long l = 0, h = 1LL*time[time.size() - 1] * totalTrips;
        long long minTime = 1LL*time[time.size() - 1] * totalTrips;

        while(l < h){
            long long mid = (l + h) / 2;
            long long tt = 0;
            for(int i = 0; i < time.size(); i++){
                tt += (mid/time[i]);
            }
            if(tt >= totalTrips){
                minTime = min(minTime, mid);
                h = mid;
            } else {
                l = mid + 1;
            }
        }
        return minTime; 
    }
};