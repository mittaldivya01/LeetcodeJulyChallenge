string reverseWords(string s) {
         stringstream ss(s); 
   string temp_str;
string res;
   while(ss>>temp_str){ 
       if(temp_str != " ")
       {
           if( res[0]!=' ' && res.length()>0)
           res=' ' +res;
           if(temp_str[0]!=' ')
        res=temp_str + res;   
       }
      }
        return res;
}
