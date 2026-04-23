class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string &c:operations){
            if(c=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                
                st.push(a);
                st.push(a+b);


            }
            else if(c=="D"){
                int a =st.top();
                st.push(2*a);
            }
            else if(c=="C"){
                st.pop();
            }
            else{
                st.push(stoi(c));
        }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();

        }
        return sum;

        
    }
};