// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left=0,right=n;
        int mid=0;
        while(left<=right){
            mid=left+(right-left)/2;
            if(!isBadVersion(mid)){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        if(!isBadVersion(mid)){
            return mid+1;
        }
        return mid;
    }
}
