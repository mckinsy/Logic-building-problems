
// problem link - https://leetcode.com/problems/count-odd-numbers-in-an-interval-range
  int countOdds(int low, int high) {
        /*int count=0;
         for(;low<=high;++low){    // brute force solution
             if(low%2!=0)
              count++;
        } return count;
     }*/ 
		if(low%2!=0 & high%2!=0)  
            return ((high-low+1)/2) + 1;   //optimal solution 
        else
		return (high-low+1)/2;
        }
