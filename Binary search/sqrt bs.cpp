#include<iostream>
using namespace std;

int binarysearch(int n) {//n=64 then 0-64
    int s = 0;
    int e = n;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;//mid=2mid of 64 ids 32 and sqof 32 is >then 64      0-31
        int sq = mid * mid;//32 sq is > 64 so again find mid and mid is 15 and sq is greater 0-14 now again find 

        if (sq == n) {
            return mid;
        } else if (sq < n) {//now 49<64 so
            ans = mid;//ans=7
            s = mid + 1;//s=8      8-7 and then find mid which is 8 so it wil return 8 for this ans
        } else {
            e = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    int result = binarysearch(64);
    cout << "Square root: " << result << endl;
    return 0;
}

