#include<iostream>;
using namespace std;

class BST
{
    int data;
    BST *left, *right;

    public:

        // Default constructor.
        BST();

        // Parameterized constructor.
        BST(int);

        // Insert function.
        BST* Insert(BST *, int);

        // Inorder traversal.
        void Inorder(BST *);
};

// Default Constructor definition.
BST :: BST() : data(0), left(NULL), right(NULL){}

// Parameterized Constructor definition.
BST :: BST(int value)
{
    data = value;
    left = right = NULL;
}

// Insert function definition.
BST* BST :: Insert(BST *root, int value)
{
    if(!root)
    {
        // Insert the first node, if root is NULL.
        return new BST(value);
    }

    // Insert data.
    if(value > root->data)
    {
        // Insert right node data, if the &#39;value&#39;
        // to be inserted is greater than &#39;root&#39; node data.

        // Process right nodes.
        root->right = Insert(root->right, value);
    }
    else
    {
        // Insert left node data, if the &#39;value&#39;
        // to be inserted is greater than &#39;root&#39; node data.

        // Process left nodes.
        root->left = Insert(root->left, value);
    }
    // Return &#39;root&#39; node, after insertion.
    return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST :: Inorder(BST *root)
{
    if(!root)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

// Driver code
int main()
{

        BST b, *root = NULL;
        cout<<"Binary tree :"<<endl;
        root = b.Insert(root, 100);//insert root element
        //insert elements
        b.Insert(root, 31);
        b.Insert(root, 01);
        b.Insert(root, 14);
        b.Insert(root, 22);
        b.Insert(root, 22);
        b.Insert(root, 75);

        b.Inorder(root);
        return 0;
}

