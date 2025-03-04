import java.util.*;

class MergeSortTracking {
    static int iteration = 1;
    
    public static void merge(int[] arr, int left, int mid, int right) {
        int[] leftPart = Arrays.copyOfRange(arr, left, mid + 1);
        int[] rightPart = Arrays.copyOfRange(arr, mid + 1, right + 1);
        
        int i = 0, j = 0, k = left;
        while (i < leftPart.length && j < rightPart.length) {
            if (leftPart[i] <= rightPart[j]) {
                arr[k++] = leftPart[i++];
            } else {
                arr[k++] = rightPart[j++];
            }
        }
        
        while (i < leftPart.length) {
            arr[k++] = leftPart[i++];
        }
        
        while (j < rightPart.length) {
            arr[k++] = rightPart[j++];
        }
        
        System.out.println("After iteration " + iteration++);
        System.out.println(Arrays.toString(arr).replaceAll("[\[\],]", ""));
    }

