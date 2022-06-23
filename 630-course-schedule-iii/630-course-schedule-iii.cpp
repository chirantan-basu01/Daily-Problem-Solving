class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        int n=courses.size(),time=0;
        priority_queue<int>pq;
        
        sort(courses.begin(),courses.end(),comp);
        
        for(int i=0;i<n;i++){
            
            if(time+courses[i][0]<=courses[i][1]){
                
                time+=courses[i][0];
                pq.push(courses[i][0]);
            }
            else{
                if(!pq.empty() and pq.top()>courses[i][0]){
                    int x=pq.top();
                    pq.pop();
                    time-=x;
                    time+=courses[i][0];
                    pq.push(courses[i][0]);
                }
            }
        }
        return pq.size();
    }
};