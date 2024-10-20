import java.util.Arrays;
import java.util.Scanner;

public class BananaTransport {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

    
        String[] weightsInput = scanner.nextLine().split("\\s+");
        int[] weights = Arrays.stream(weightsInput).mapToInt(Integer::parseInt).toArray();

        
        int k = scanner.nextInt();

        
        int result = minVehicles(weights, k);
        System.out.println( result);
    }

    private static int minVehicles(int[] weights, int k) {
        Arrays.sort(weights);
        int left = 0;
        int right = weights.length - 1;
        int count = 0;

        while (left <= right) {
            if (weights[left] + weights[right] <= k) {
                
                left++;
                right--;
            } else {
               
                right--;
            }
            count++;
        }

        return count;
    }
}