#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *lchild;
        Node *rchild;

        Node(int iNo)
        {
            data = iNo;
            lchild = NULL;
            rchild = NULL;
        }
};

class BST
{
    private:
        Node *root;

        void Inorder(Node *root)
        {
            if(root != NULL)
            {
                Inorder(root -> lchild);
                cout << root -> data << endl;
                Inorder(root -> rchild);
            }
        }

        void Preorder(Node *root)
        {
            if(root != NULL)
            {
                cout << root -> data << endl;
                Preorder(root -> lchild);
                Preorder(root -> rchild);
            }
        }

        void Postorder(Node *root)
        {
            if(root != NULL)
            {
                Postorder(root -> lchild);
                Postorder(root -> rchild);
                cout << root -> data << endl;
            }
        }

        int Count(Node *root)
        {
            static int iCount = 0;

            if(root != NULL)
            {
                iCount++;
                Count(root -> lchild);
                Count(root -> rchild);
            }

            return iCount;
        }

        int CountLeaf(Node *root)
        {
            static int iCount = 0;

            if(root != NULL)
            {
                if(root -> rchild == NULL && root -> lchild == NULL)
                {
                    iCount++;
                }

                CountLeaf(root -> lchild);
                CountLeaf(root -> rchild);
            }

            return iCount;
        }

        int CountParent(Node *root)
        {
            static int iCount = 0;

            if(root != NULL)
            {
                if(root -> rchild != NULL || root -> lchild != NULL)
                {
                    iCount++;
                }

                CountParent(root -> lchild);
                CountParent(root -> rchild);
            }

            return iCount;
        }

    public:
        BST()
        {
            root = NULL;
        }

        void Insert(int iNo)
        {
            Node *newn = NULL;
            Node *temp = NULL;

            newn = new Node(iNo);

            if(root == NULL)
            {
                root = newn;
            }
            else
            {
                temp = root;
                while(1)
                {
                    if(iNo > temp -> data)
                    {
                        if(temp -> rchild == NULL)
                        {
                            temp -> rchild = newn;
                            break;
                        }

                        temp = temp -> rchild;
                    }
                    else if(iNo < temp -> data)
                    {
                        if(temp -> lchild == NULL)
                        {
                            temp -> lchild = newn;
                            break;
                        }

                        temp = temp -> lchild;
                    }
                    else if(iNo == temp -> data)
                    {
                        cout << "Unable to insert bcoz element is duplicate." << endl;
                        delete newn;
                        break;
                    }
                }
            }
        }

        bool Search(int iNo)
        {
            bool bFlag = false;
            Node *temp = root;

            while(temp != NULL)
            {
                if(iNo == temp -> data)
                {
                    bFlag = true;
                    break;
                }
                else if(iNo > temp -> data)
                {
                    temp = temp -> rchild;
                }
                else if(iNo < temp -> data)
                {
                    temp = temp -> lchild;
                }
            }

            return bFlag;
        }

        void Inorder()
        {
            Inorder(root);
        }

        void Preorder()
        {
            Preorder(root);
        }

        void Postorder()
        {
            Postorder(root);
        }

        int Count()
        {
            return Count(root);
        }

        int CountLeaf()
        {
            return CountLeaf(root);
        }

        int CountParent()
        {
            return CountParent(root);
        }
};

int main()
{
    BST tree;
    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    bool bRet = false;

    while(1)
    {
        cout << "\n---------------------------------\n";
        cout << " Binary Search Tree\n";
        cout << "---------------------------------\n";
        cout << "1. Insert Node\n";
        cout << "2. Search Node\n";
        cout << "3. Inorder Display\n";
        cout << "4. Preorder Display\n";
        cout << "5. Postorder Display\n";
        cout << "6. Count Total Nodes\n";
        cout << "7. Count Leaf Nodes\n";
        cout << "8. Count Parent Nodes\n";
        cout << "0. Exit\n";
        cout << "---------------------------------\n";
        cout << "Enter your choice : ";
        cin >> iChoice;

        switch(iChoice)
        {
            case 1:
                cout << "Enter value : ";
                cin >> iValue;
                tree.Insert(iValue);
                break;

            case 2:
                cout << "Enter value to search : ";
                cin >> iValue;

                bRet = tree.Search(iValue);

                if(bRet == true)
                {
                    cout << iValue << " is present in BST." << endl;
                }
                else
                {
                    cout << iValue << " is not present in BST." << endl;
                }
                break;

            case 3:
                cout << "Inorder Traversal :" << endl;
                tree.Inorder();
                break;

            case 4:
                cout << "Preorder Traversal :" << endl;
                tree.Preorder();
                break;

            case 5:
                cout << "Postorder Traversal :" << endl;
                tree.Postorder();
                break;

            case 6:
                iRet = tree.Count();
                cout << "Total Nodes : " << iRet << endl;
                break;

            case 7:
                iRet = tree.CountLeaf();
                cout << "Leaf Nodes : " << iRet << endl;
                break;

            case 8:
                iRet = tree.CountParent();
                cout << "Parent Nodes : " << iRet << endl;
                break;

            case 0:
                cout << "Thank you for using BST." << endl;
                return 0;

            default:
                cout << "Invalid Choice." << endl;
        }
    }

    return 0;
}
