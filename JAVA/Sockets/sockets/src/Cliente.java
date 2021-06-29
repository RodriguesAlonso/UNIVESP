import java.io.IOException;
import java.io.ObjectOutputStream;
import java.net.Socket;

public class Cliente {
    public static void main(String[] args) throws IOException {
        Socket socket = new Socket("127.0.0.1", 54323);

        ObjectOutputStream saida = new ObjectOutputStream(socket.getOutputStream());

        Pessoa p = new Pessoa("Rafael Vargas", 38);
        saida.writeObject(p);

        saida.close();
        socket.close();
        
    }
}