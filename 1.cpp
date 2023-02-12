#include<bits/stdc++.h>
using namespace std;
class node
{

public:
    int value;
    node *left;
    node *right;
    node(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
    }

};
 void levelorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        queue<node *>q;
        q.push(root);
        while(q.empty()==false)
        {
            node * temp=q.front();
            cout<<temp->value<<" ";
            q.pop();
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }

    }


int main()
{
    node *root=new node(3);
    root->left=new node(4);
    root->right=new node(5);
    root->left->left=new node(6);
    root->left->right=new node(7);
    root->right->left=new node(8);
    root->right->right=new node(9);

    levelorder(root);

    return 0;

}
