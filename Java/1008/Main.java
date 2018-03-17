
// 1007 - SALÁRIO

import java.io.IOException;
import java.util.Scanner;

public class Main {

  public static void main(String[] args) throws IOException {
    int number, workedHours;
    double perHour, salary;

    Scanner sc = new Scanner(System.in);

    number = sc.nextInt();
    workedHours = sc.nextInt();
    perHour = sc.nextDouble();

    sc.close();

    salary = (perHour * workedHours);

    System.out.printf("NUMBER = %d\n", number);
    System.out.printf("SALARY = U$ %.2f\n", salary);

  }

}