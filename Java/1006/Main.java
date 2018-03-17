
// 1006 - MÉDIA 2

import java.io.IOException;
import java.util.Scanner;

public class Main {

  public static void main(String[] args) throws IOException {
    double a, b, c, total;
    double weightA = 2.0;
    double weightB = 3.0;
    double weightC = 5.0;

    Scanner sc = new Scanner(System.in);

    a = sc.nextDouble();
    b = sc.nextDouble();
    c = sc.nextDouble();
    sc.close();

    total = ((a * weightA) + (b * weightB) + (c * weightC)) / (weightA + weightB + weightC);

    System.out.printf("MEDIA = %.1f\n", total);

  }

}