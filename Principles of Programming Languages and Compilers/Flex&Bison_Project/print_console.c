#define SIZE 10

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node 
{
	char name[100];
	int integer_val;
	struct node *next;
}var;

typedef struct hash 
{
	var *head;
	int count;
}hash;

static hash *hashTable = NULL;


//memory allocation
var *newNode(char n[], int i) 
{ 
   	var *temp =  (var *)malloc(sizeof(var));
   	
    	strcpy(temp->name, n);
	temp->integer_val = i;
    	temp->next = NULL;
    
    	return temp; 
};


//insert data into hash table
void Insert(char n[], int i) 
{
	int hashIndex, h = 0;
	var *newnode = newNode(n, i);
	
	// hash function
	for (int c = 0; n[c] != '\0'; c++)
	    h = (h + (unsigned char)n[c]);   
	hashIndex = h % SIZE;
	
	if (!hashTable[hashIndex].head) 
	{
		hashTable[hashIndex].head = newnode;
		hashTable[hashIndex].count = 1;
		return;
	}
	
	//adding new node to the list 
	newnode->next = (hashTable[hashIndex].head);
	
	//update the head of the list and no of nodes in the current bucket
	hashTable[hashIndex].head = newnode;
	hashTable[hashIndex].count++;
	
	return;
};

//print the value of hashtable
void Print() 
{
	var *myNode;
	int i;
	
	printf("| NAME\t\t | INTEGER |\n ");
	printf("__________________________\n");
	
	for (i = 0; i < SIZE; i++) 
	{
	    	if (hashTable[i].count == 0)
	        	continue;
	        
		myNode = hashTable[i].head;
	    	if (!myNode)
	        	continue;
        
	    	while (myNode != NULL) 
		{
	        	printf("| %s\t\t | ", myNode->name);
			printf(" %d\t   |\n", myNode->integer_val);
	        	myNode = myNode->next;
	    	}
	}

    return;
};

//search value in hashtable and return the variable
var *Search(char n[])
{
    	int hashIndex, h = 0, flag = 0;
    	var *temp = NULL;	    
    
	for (int i = 0; n[i] != '\0'; i++)
	    h = (h + (unsigned char)n[i]);
	
	hashIndex = h % SIZE;
    
	temp = hashTable[hashIndex].head;
	if (!temp) {
	    printf("Search element not found in hash table\n");
	    return temp;
	}

	while (temp != NULL) {
		if (strcmp(temp->name, n) == 0){
			flag = 1;
		        break;
		}
	    
        	temp = temp->next;
	}
	
	if (!flag)
	    printf("Search element not found in hash table\n");
	
	return temp;
}

//change the value 
void Change(char n[], int i) 
{
	int hashIndex, h = 0, flag = 0;
    	var *temp;	    
    
    	//hash function
	for (int i = 0; n[i] != '\0'; i++)
	    h = (h + (unsigned char)n[i]);  
	hashIndex = h % SIZE;
	
	temp = hashTable[hashIndex].head;
	if (!temp) 
	{
	    Insert(n, i);
	    return;
	}
	
	while (temp != NULL) 
	{
	    if (strcmp(temp->name, n) == 0){
			temp->integer_val = i;
	        	flag = 1;
	        	break;  
		}
        temp = temp->next;
	}
	
	if (!flag)
	    printf("Search element not found in hash table\n");
	
    	return;
};
