bool isIsomorphic(char* s, char* t) {
     int map1[256]={0},map2[256]={0};
     if(strlen(s)!=strlen(t))
     return false;
     for(int i=0;i<strlen(s);i++)
     {
        if(map1[s[i]]!=map2[t[i]])
        return false;
        map1[s[i]]=i+1;
        map2[t[i]]=i+1;
     }
     return true;
}