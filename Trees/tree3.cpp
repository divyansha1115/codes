
	#include <bits/stdc++.h>
	#define endl "\n"
	#define ll long long int
	#define vi vector<ll>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<ll,ll>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y) 
	#define mem(a,val) memset(a,val,sizeof(a))
	#define pb push_back
	#define f first
	#define s second
	
	using namespace std;
	struct Node
	{
		int data;
		struct Node* next;
	};

	void printmiddle(struct Node *head){
		struct Node *fastptr=head;
		struct Node *slowptr=head;
		if(head!=NULL){
			while(fastptr->next!=NULL && fastptr!=NULL){
				fastptr = fastptr->next->next;
				slowptr = slowptr->next;
			}
			cout<<slowptr->data<<endl;
		}
	}
	void push(struct Node** head_ref, int data){
		struct Node* new_node = new Node;
		new_node->data = data;
		new_node->next = (*head_ref);
		(*head_ref) = new_node;
	}

	void printlist(struct Node *ptr){
		while(ptr!=NULL){
			cout<<ptr->data<<endl;
			ptr = ptr->next;
		}
		cout<<"NULL"<<endl;
	}

	signed main()
	{

	std::ios::sync_with_stdio(false);
	
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
     #endif

    struct Node* head=NULL;
	int n;
	cin>>n;
	for(int i=n;i>0;i++){
		push(&head,i);
		printlist(head);
		printmiddle(head);
	}
	return 0;
	}
