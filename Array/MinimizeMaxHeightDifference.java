import java.util.Arrays;

public class MinimizeMaxHeightDifference {

    static int getMinDiff(int[] arr, int n, int k) {

        // If only one element is present
        if (n == 1)
            return 0;

        // Sort the array
        Arrays.sort(arr);

        // Initial difference without any changes
        int answer = arr[n - 1] - arr[0];

        // These will store possible new min and max
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;

        // Traverse the array
        for (int i = 1; i < n; i++) {

            // Skip if height becomes negative
            if (arr[i] - k < 0)
                continue;

            int currentMin = Math.min(smallest, arr[i] - k);
            int currentMax = Math.max(largest, arr[i] + k);

            answer = Math.min(answer, currentMax - currentMin);
        }

        return answer;
    }

    public static void main(String[] args) {

        int[] arr = {1, 5, 8, 10};
        int k = 2;

        System.out.println(getMinDiff(arr, arr.length, k));
    }
}
