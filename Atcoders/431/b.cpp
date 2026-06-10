{
    if(v.size() >=3){
        for(int i=0;i+2<v.size();i++){
            ans = min(ans,2*(v[i+2] - v[i]));
        }
    }
}