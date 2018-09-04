void KMPSearch(string pat, string txt){

    int m = pat.length(), n = txt.length();
    int lps[m];

    //======make lps array
    int j=0,i=1;
    lps[0] = 0;
    while(i<m){
        if(pat[i]==txt[j]){
            lps[i] = j+1;
            j++;i++;
        }else{
            if(j!=0) j=lps[j-1];
            else {lps[i]==0; i++;}
        }
    }
    //=======Pattern Matching Using LPS
    i=0; //index for txt
    j=0; //index for pat
    while(i<n){
        if(pat[j]==txt[i]){
            i++;j++;
        }
        if(j==m){
            cout<<"Pattern Found at index "<<i-1<<endl;
            j = lps[j-1];
        }

        else if(i<n && pat[j]!=txt[i]){
            if(j!=0) j = lps[j-1];
            else i = i+1;
        }
    }


}
