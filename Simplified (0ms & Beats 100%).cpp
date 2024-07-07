class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n= colors.size();
        int alt=0;
       for(int i=1;i<n;i++)
       {
        if(i<n-1)
        {
         if(colors[i-1]!=colors[i] && colors[i]!=colors[i+1])
        {
            alt++;
        }
        }

       }



                if(colors[n-1]!=colors[n-2] && colors[n-1] !=colors[0])
                {
                    alt++;
                }
                if(colors[n-1]!=colors[0]  && colors[0]!=colors[1])
                {
                    alt++;
                }



        return alt;
    }
};
