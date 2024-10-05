class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      if(s1.length()>s2.length()) return 0;
      sort(s1.begin(),s1.end());
      string x="";
      for(int i=0;i<s1.size();i++){
          x+=s2[i];
      }
 
      for(int i=s1.size();i<s2.size();i++){
          string x1=x;
          sort(x.begin(),x.end());
          if(x==s1) return 1;
          x1.erase(x1.begin());
          x1+=s2[i];
          x=x1;

      }
      string x1=x;
      sort(x.begin(),x.end());
      if(x==s1) return 1;
return 0;
    }
};