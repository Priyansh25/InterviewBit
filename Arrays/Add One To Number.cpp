vector<int> Solution::plusOne(vector<int> &A) {
    
    int n=A.size();  
    reverse(A.begin(),A.end());
    int sum,c=1;vector<int>B;
    for(int i=0;i<A.size();i++)
    {
       sum=A[i]+c;
       B.push_back(sum%10);
       c=sum/10;
    }
   if(c)
   B.push_back(1);
  
   while (B[B.size() - 1] == 0 && B.size() > 1) 
   B.pop_back();
  
   reverse(A.begin(),A.end());
   reverse(B.begin(),B.end());
   
return B;  
}
