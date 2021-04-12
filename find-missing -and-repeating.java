//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1



















class Solve {
    int[] findTwoElement(int arr[], int n) {
        int[] ans = new int[5];
        for(int i=0;i<n;i++){
            if(arr[Math.abs(arr[i])-1]<0){
                ans[0] = Math.abs(arr[i]);
            
            }
            else{
                arr[Math.abs(arr[i])-1]*=-1;
            }
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ans[1] = i+1; 
            }
            //System.out.println(arr[i]);
        }
        
    return ans;