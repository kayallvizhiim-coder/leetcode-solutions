bool wordPattern(char* pattern, char* s) {
     char *arr[26]={0};
    int plen=strlen(pattern);
    char *usedWord[26]={0};
    int usedCt=0;
    char *w=strtok(s," ");
    arr[pattern[0]-'a']=w;
    usedCt++;
    usedWord[0]=w;
    for(int i=1; i<plen; i++){
        w=strtok(NULL," ");
        if(arr[pattern[i]-'a']==0){
            if(w==NULL) 
            return false;
            for (int j=0; j<usedCt; j++){
                if(strcmp(usedWord[j],w)==0){
                    return false;
                }
            }
            usedWord[usedCt++]=w;
            arr[pattern[i]-'a']=w;
        }
        else{
            if(strcmp(arr[pattern[i]-'a'],w)!=0){
                return false;
            }
        }
    }
    if((w=strtok(NULL," "))!=NULL){
        return false;
    }
    return true;

}