import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        int i;
        String str = s;
        for (i = 0; i < str.length(); i++) {
            if (Character.isLetter(str.charAt(i))) {
                break;
            }
        }
        s=str.substring(i);

        if (s.length() == 0) {
            System.out.println(0);
            return;
        }

         String[] words = s.split("[^a-zA-Z]+");
          System.out.println(words.length);
        for (String word : words) {
            System.out.println(word);
        }

        scan.close();
    }
}
