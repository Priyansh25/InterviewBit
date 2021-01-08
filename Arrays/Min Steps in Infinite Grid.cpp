int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int sum=0;
   
    if(n==1)return 0;
    for (int i=0; i<n-1;i++)
    {
        sum+=max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
    }

return sum;    
}
