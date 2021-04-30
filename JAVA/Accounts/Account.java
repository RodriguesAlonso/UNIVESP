import javax.swing.JOptionPane;

public class Account 
{
    // Váriavel de instância.
    private String name; 
    private double balance;

    public Account(){
        name = "";
        balance = 0.0;
    }

    public Account(String name, double balance){
        this.name = name;
        if (balance > 0.0)
            this.balance = balance;
    }

    public void deposit(double depositAmount)
    {
        if (depositAmount > 0.0)
        balance = balance + depositAmount;
    }
    
    public double getBalance()
    {
        return balance;
    }

    public void setName(String name) 
    {
        this.name = name;    
    }
    public String getName() 
    {
        return name;
    }
    static Account createAccount(Account account){
        String name = JOptionPane.showInputDialog("What is your name? ");
        String balance = JOptionPane.showInputDialog(String.format("Welcome %s %nEnter your balance: " , name));
        account.setName(name);
        account.deposit(Double.parseDouble(balance));
        
        return account;        
    }

    public void printAccount(){
        String menssage = String.format("%s balance: $%.2f %n", this.name, this.balance);
        JOptionPane.showMessageDialog(null, menssage);
    }
}
