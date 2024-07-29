class Solution {
public:
    int maximumScore(int a, int b, int c) {
        
        int ans=0;
        priority_queue<int> m;
        m.push(a);
        m.push(b);
        m.push(c);
        
        while(m.size()>1){
            int el1=m.top();
            m.pop();
            int el2=m.top();
            m.pop();
            el1--;
            el2--;
            ans++;
            if(el1>0) m.push(el1);
            if(el2>0) m.push(el2);
        }
        
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // if(a%2==0 && b%2==0 && c%2==0) return (a+b+c)/2;
        
        
            
            
//     int ans=0;
//     if(a==b && a==c) return a;
//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(a);
//     pq.push(b);
//     pq.push(c);

//     ans+=pq.top();
//     pq.pop();
//     ans+=pq.top();
//     pq.pop();
    
//     return ans;
//     if(a==b) return max(ans,a);
//     if(b==c) return max(b,ans);
//     if(c==a) return max(ans,c);
//     }
        
        // int maxi=max(a,b);
        // maxi=max(maxi,c);
        // return maxi;
        
    }
};