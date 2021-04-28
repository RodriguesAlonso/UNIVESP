import java.util.Scanner;

public class AccontTest 
{
    public static void main(String[] args) 
    {
        Account account1 = new Account("Jane Green", 50.00);
        Account account2 = new Account("John Blue", -7.5);
        
        System.out.printf("%n%s balance: $%.2f", account1.getName(), account1.getBalance());
        System.out.printf("%n%s balance: $%.2f %n", account2.getName(), account2.getBalance());
        
        Scanner input = new Scanner(System.in);

        System.out.print("Enter deposit amount for account1: ");
        double depositAmount = input.nextDouble();
        System.out.printf("%nAdding $%.2f to account1 balance%n%n", depositAmount);

        account1.deposit(depositAmount);
        
        System.out.printf("%s balance: $%.2f %n", account1.getName(), account1.getBalance());
        System.out.printf("%s balance: $%.2f %n", account2.getName(), account2.getBalance());
        
        System.out.print("Enter deposit amount for account2: ");
        depositAmount = input.nextDouble();
        System.out.printf("%nAdding $%.2f to account2 %n%n",depositAmount);

        account2.deposit(depositAmount);
        
        System.out.printf("%s balance: $%.2f %n", account1.getName(), account1.getBalance());
        System.out.printf("%s balance: $%.2f %n", account2.getName(), account2.getBalance());
        
        //System.out.printf("account1 name is: %s%n", account1.getName());
        //System.out.printf("account2 name is: %s%n", account2.getName());
        //Account myAccount = new Account();
        //System.out.printf("Initial name is: %s%n%n", //myAccount.getName());
        
        //System.out.println("Please enter the name:");
        //String theName = input.nextLine();
        //myAccount.setName(theName);
        //System.out.println();

        //System.out.printf("Name in object myAccount is: %n%s%n", myAccount.getName());
    }
}
