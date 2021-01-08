int Solution::maxSubArray(const vector<int> &A) {
    int curr_sum=0,max_sofar=A[0];
    for(int i=0;i<A.size();i++)
    {
     curr_sum=curr_sum+A[i];
    
     if(max_sofar<curr_sum)
     max_sofar=curr_sum;
    
     if(curr_sum<0)curr_sum=0;
        
    }
    return max_sofar;
}
