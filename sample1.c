int searech(int* nums, int numsSize, int target) {
    // Array could be:
    //[1,2,3,4]
    //[3,4,1,2]
    //[4,1,2,3]
    // Binary search with array is not recursive
    int left = 0;
    int right = numsSize - 1; 
    // Find the pivot
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[left] <= nums[mid]) {
            if(target >= nums[left] && target <= nums[mid]){
            right = mid - 1;
            } else {
                left = mid + 1;
        }
        } else {
            if(target> nums[mid] && target <= nums[right]){
            left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return -1;
}
// Function to find the size of a BST with a recursive function
int size(struct node* node) {
    if (node == NULL) {
        return 0;
    } else {
        return(size(node->left) + 1 + size(node->right));
    }
}

// Example exam question
int mirror(node* n){

}
return 1 if mirror
return 0 if not mirror