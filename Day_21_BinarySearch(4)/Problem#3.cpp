#include <iostream>
using namespace std;
        //    3.Magnetic Force Between N Balls:
        
bool canPlaceBalls(int positions[], int totalBalls, int n, int minDist){
    int placedBalls = 1;
    int lastPlacedPosition = positions[0];

    for(int i = 1; i < n; i++){
        if(positions[i] - lastPlacedPosition >= minDist){
            placedBalls++;
            lastPlacedPosition = positions[i];
        }

        if(placedBalls == totalBalls) return true;
    }

    return false;
}
int findMaxMinDistance(int positions[], int totalBalls, int n){
    int answer = -1;

    int low = 1;
    int high = positions[n - 1] - positions[0];

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(canPlaceBalls(positions, totalBalls, n, mid)){
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return answer;
}
int main(){
    int positions[1000] = {3,4,5,7,8,11,15,17,27};
    int totalBalls = 4;
    int n = 9;

    int result = findMaxMinDistance(positions, totalBalls, n);

    cout << "Maximum minimum distance between any two balls: "
         << result << endl;

    return 0;
}