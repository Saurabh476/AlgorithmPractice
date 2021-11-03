
    while(!q.empty()){
        i = 0;
        s=q.size();
        while(i < s){
            i++;
            // cout<<"in side 1st loop"<<endl;
            auto node = q.front();
            visited[node]=1;
            // cout<<node<<" ";
            if(node == target){
                return level;}
            for(auto el: ad[node]){
                if(visited[el] != 1)
                    q.push(el);
            }
            q.pop();    
        }
        level++;
        // cout<<endl;
        cout<<level<<" ";
    }