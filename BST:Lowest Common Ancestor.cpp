    Node *lca(Node *root, int v1,int v2) {
        stack<Node* >stackp ;
        stack<Node* >stackq ;
		// Write your code here.
        Node* p =root;
        Node* q =root;

      

        while(1){
            stackp.push(p);
            if(p->data==v1){
                break;
            }

            if(p->data > v1){
                p=p->left ;
            }
            else{
                p=p->right ;
            }
        }

        while(1){
            stackq.push(q);
            if(q->data==v2){
                break;
            }
            if(q->data > v2){
                q=q->left ;
            }
            else{
                q=q->right ;
            }
        }
        vector<Node*>vec1 ;
        vector<Node*>vec2 ;
        
        while(!stackp.empty()){
            vec1.push_back(stackp.top());
            stackp.pop() ;
        }
        while(!stackq.empty()){
            vec2.push_back(stackq.top());
            stackq.pop() ;
        }




    for(int i=0;i<vec2.size();i++){
        for(int j=0;j<vec1.size();j++){
            if(vec1[j]->data ==vec2[i]->data){
                return vec1[j];
            }
        }
    }

    return NULL;

    }
