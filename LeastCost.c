//===                Here root points to the root of the tree                  ===//
//===    sum is value of individual addtions while  traversing the nodes      ===//
//===min  is the minimum value stored when a leaf of minimum value is visited===//


void leastSum(struct node *root, int sum, int *min)
{
	if (root != NULL){
		leastSum(root->left,sum+=root->data,min);
		if ((sum < *min || *max==0) && (root->left == NULL && root->right == NULL)) //Condition to check if it's leaf with minimum value.
			*min = sum;
		else
			sum = sum - root->data;
		leastSum(root->right, sum += root->data, min);
	}
}

