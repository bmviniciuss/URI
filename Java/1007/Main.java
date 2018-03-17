
// 1007 - DIFERENÇA

import java.io.IOException;
import java.util.Scanner;

public class Main {

  public static void main(String[] args) throws IOException {
    int a, b, c, d, diference;

    Scanner sc = new Scanner(System.in);

    b = sc.nextInt();
    a = sc.nextInt();
    c = sc.nextInt();
    d = sc.nextInt();
    sc.close();

    diference = ((a * b) - (c * d));

    System.out.printf("DIFERENCA = %d\n", diference);

  }

}