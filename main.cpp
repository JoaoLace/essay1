#include <iostream>
#include <stack>
std::stack<int> genNums;
#define COUNT 10
int generations = 2;
int x;
int teste = 0;
int biggest();
void spaces(int x)
{
	for (int i = 0; i < x; i++)
	{
		std::cout << " ";
	}
		
}
struct Node
{
	int data;
	Node* left;
	Node* rigth;
};

Node* createNode(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = nullptr;
	newNode->rigth = newNode->left;
	return newNode;
}
void printAll(Node* root)
{
	
		if (root == nullptr)
			return;

		printAll(root->left);

		std::cout << root->data << " ";

		printAll(root->rigth);


}

void print2D(Node* root)
{
	printAll(root);
}

bool exists(Node* root);

void biggestChildrenLine(Node* root)
{
	exists(root->rigth);
	exists(root->left);

}

bool exists(Node* root)
{
	if (root == nullptr)
		return false;

	if (root->left == nullptr && root->rigth == nullptr)
	{
		std::cout << "\nNode " << root->data << " does not have kids\n";
		genNums.push(generations);
		generations = 2;
		return false;


	}

	else {

		std::cout << "\nNode " << root->data << " has kids\n";

		generations++;

		exists(root->rigth);
		exists(root->left);

		

		return true;
	}
}
int biggest()
{
	int biggest = 0;
	while (!genNums.empty())
	{
		if (genNums.top() > biggest)
			biggest = genNums.top();

		genNums.pop();
	}
	x = biggest;
	return biggest;
}
int main()
{
	Node* root = createNode(3);
	root->left = createNode(1);
	root->rigth = createNode(4);
	root->left->left = createNode(5);
	root->left->rigth = createNode(11);
	root->left->rigth->rigth = createNode(4);
	root->rigth = createNode(4);
	root->rigth->rigth = createNode(7);

	biggestChildrenLine(root);

	std::cout << "\nGen nums: " << biggest() << "\n";
	print2D(root);


}