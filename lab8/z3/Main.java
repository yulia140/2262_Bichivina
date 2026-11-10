public class Main {
    public static void main(String[] args) {
        int[][] matrix = {{1, 2}, {0, 3}};
        boolean found = false;
        
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                if (matrix[i][j] == 0) {
                    System.out.println("Zero at: " + i + "," + j);
                    found = true;
                    break; 
                }
            }
            if (found) break; 
        }
    }
}