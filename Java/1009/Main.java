
// 1009 - SALÁRIO COM BONUS

import java.io.IOException;
import java.util.Scanner;

public class Main {

  public static void main(String[] args) throws IOException {
    String name;
    double fixedSalary, totalSales, total;
    double bonus = 15;

    Scanner sc = new Scanner(System.in);

    name = sc.next();
    fixedSalary = sc.nextDouble();
    totalSales = sc.nextDouble();
    
    sc.close();

    total = fixedSalary + (totalSales * (bonus / 100.0));

    System.out.printf("TOTAL = R$ %.2f\n", total);
    

  }

}