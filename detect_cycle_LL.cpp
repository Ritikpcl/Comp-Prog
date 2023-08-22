#include <bits/stdc++.h>
using namespace std;

// define the class for the Linked List
class List{

    public:

    int val;
    List* next;        

    List (){}

    // constructor to initialise values
    List (int val){
        this->val = val;
        next = NULL;
    }


    // create linked list which takes vector as a parameter to create list
    List* createList(vector<int>& v){

        List* head = new List(v[0]);
        List* temp = head;

        int n = v.size();
        for(int i=1; i<n; i++){
            List* newNode = new List(v[i]);
            temp->next = newNode;
            temp = newNode;
        }

        // make the connection cirular
        temp->next = head;

        return head;
    }
};

// define the class for the Answer
class Answer{
    public:

    // return true if cycle is present, else return false
    bool isCyclePresent(List* root){

        List *slow = root, *fast = root;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) { // means cycle is present
                return true; 
            }
        }

        // fast has reached at the end of the list means cycle is not present
        return false;
    }
};


int main(){

    // take the size of the list
    int n;
    cin>>n;

    vector<int> list(n);

    // taking inputs of the list
    for(int i=0; i<n; i++){
        cin>>list[i];
    }

    //creating list
    List listObject;
    List* root = listObject.createList(list);

    // invoke the isCyclePresent function of class Answer
    Answer answerObject;
    bool result = answerObject.isCyclePresent(root);

    if(result){
        cout<<"YES, cycle is present in the given list"<<endl;
    }else{
        cout<<"No, cycle is not present in the given list"<<endl;
    }
    
    return 0;
}