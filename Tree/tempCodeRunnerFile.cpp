    if (root == NULL)
        return;
    stack<Node *> s;
    Node *curr = root;
    while (curr != NULL ||s.empty() == false)
    {
        while(curr != NULL){
            cout << curr->data <<" ";
            if(curr->right != NULL)
                s.push(curr->right);
            curr = curr->left;
        }
        if(s.empty() == false)  {
            curr = s.top();
            s.pop();
        }
    }