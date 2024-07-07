class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n= colors.size();
        int prev;
        int count=0,alt=0;
        int sum=0;
        int left=0;
        int right=2;
        sum+=colors[0] +colors[1]+colors[2];
        if(colors[0]!=colors[1] && colors[1]!=colors[2])
        {
            alt++;
        }

        while(right<n)
        {
            if(right+1<n)
            {
        if(colors[right]!=colors[right-1] && colors[right]!=colors[right+1])
            {
               alt++;
            }

            }

            right++;
            left++;
        }

        prev=colors[n-2];

              count=0;
                if(colors[n-1]!=prev && colors[n-1] !=colors[0])
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
