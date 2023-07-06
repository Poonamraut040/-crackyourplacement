long long findMinDiff(vector<long long> a, long long n, long long m){
       sort(a.begin(),a.end());
       int s , e;
       s = 0;
       e = m-1;
       long long fin = INT_MAX;
           
       while(e<= n-1){
           long long temp = a[e]-a[s];
           fin = min(fin,temp);
       
       s++;
       e++;
       }
       return fin;
    }   
