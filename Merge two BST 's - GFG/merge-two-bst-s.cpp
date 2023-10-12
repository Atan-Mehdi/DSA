//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};





// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}



// } Driver Code Ends
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
    public:
        void store(Node* root,vector<int> &arrays){

    if(root== NULL){

        return ;

    }

    store(root->left,arrays);

    arrays.push_back(root->data);

    store(root->right,arrays);

}

vector<int> merge(vector<int> &arrays1,vector<int> &arrays2){

    vector<int> merged(arrays1.size()+arrays2.size());

    int i = 0;

    int j = 0;

    int k = 0;

    while(i<arrays1.size() && j<arrays2.size()){

        if(arrays1[i]<arrays2[j]){

            merged[k++] = arrays1[i];

            i++;

        }

        else{

            merged[k++] = arrays2[j];

            j++;

        }

    }

    while(i<arrays1.size()){

        merged[k++] = arrays1[i];

        i++;

    }

    while(j < arrays2.size()){

        merged[k++] = arrays2[j];

        j++;

    }

 

    return merged;

}

Node* inordertobst(int s,int e,vector<int>& merges){

    if(s>e){

        return NULL;

    }

    int mid = (s+e)/2;

    Node* root = new Node(merges[mid]);

    root->left = inordertobst(s,mid-1,merges);

    root->right = inordertobst(mid+1,e,merges);

    return root;

}
 
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> array1;

    vector<int> array2;

    store(root1, array1);

    store(root2, array2);

    vector<int> merges = merge(array1, array2);

    Node* mergedBST = inordertobst(0, merges.size() - 1, merges);

    

    // Now, convert the mergedBST to a vector representation (in-order traversal)

    vector<int> result;

    store(mergedBST, result);

    

    return result;
    }
};

//{ Driver Code Starts.
int main() {

   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root1 = buildTree(s);

       getline(cin, s);
       Node* root2 = buildTree(s);
    
       // getline(cin, s);
       Solution obj;
       vector<int> vec = obj.merge(root1, root2);
       for(int i=0;i<vec.size();i++)
            cout << vec[i] << " ";
        cout << endl;
       ///cout<<"~"<<endl;
   }
   return 0;
}
// } Driver Code Ends