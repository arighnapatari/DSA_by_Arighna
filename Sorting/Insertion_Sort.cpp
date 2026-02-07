
//Algorithm for Insertion Sort
//Select an element and take it to its correct place 

vector<int> insertionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i=0; i<n; i++)
    {
        int j = i;
        while (j > 0 && nums[j-1] > nums[j])
        {
            swap(nums[j-1], nums[j]);
        }
        
    }
    return nums;
}

};
