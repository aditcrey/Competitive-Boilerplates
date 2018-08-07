void firstElementStream(vector<char> &stream){
    int n = stream.size();
    list<char> lst;
    vector<bool> repeated(256,false);
    vector<list<char>::iterator> DLL(256,lst.end());
    bool ansExist = false;
    list<char>::iterator it;
    for(int i=0;i<n;i++){
        char a = stream[i];
        if(!repeated[a]){  //if either character has never occured before or occured once
            if(DLL[a] == lst.end()){ //character for the first time
                
                ansExist = true;
                lst.push_back(a);
                it = lst.end();
                DLL[a] = --it;
            }else{ //character for the second time
                repeated[a] = true;
                lst.erase(DLL[a]);
                DLL[a] = lst.end();
            }
        }
        if(!lst.empty())
        cout<<*(lst.begin())<<" ";
        else cout<<-1<<" ";
        
    }
    

    cout<<endl;
}
