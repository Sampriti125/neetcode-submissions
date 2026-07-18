class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleet=1;
        vector<pair<int,int>> cars;
         int n=speed.size();
        for (int i=0;i<n;i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(),cars.end());
        double lastt=(double)(target-cars[n-1].first)/cars[n-1].second;
        for (int i=n-1;i>=0;i--){
            double t=(double)(target-cars[i].first)/cars[i].second;
            if (t>lastt){
                fleet++;
                lastt=t;
            }
        }
        return fleet;

    }
};
