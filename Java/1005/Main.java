// 1005 - MÉDIA 1

import java.io.IOException;
import java.util.Scanner;

public class Main {

  public static void main(String[] args) throws IOException {
    double a, b, total;
    double weightA = 3.5;
    double weightB = 7.5;

    Scanner sc = new Scanner(System.in);

    a = sc.nextDouble();
    b = sc.nextDouble();
    sc.close();

    total = ((a * weightA) + (b * weightB)) / (weightA + weightB);

    System.out.printf("MEDIA = %.5f\n", total);

  }

}