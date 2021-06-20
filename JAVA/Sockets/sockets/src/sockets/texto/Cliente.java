package sockets.texto;

import java.io.DataInput;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.net.UnknownHostException;

public class Cliente {
    public static void main(String[] args) throws UnknownHostException, IOException {
        Socket socket = new Socket("127.0.0.1", 54321);

        DataOutputStream saida = new DataOutputStream(socket.getOutputStream());
        saida.writeUTF("joão");

        DataInputStream entrada = new DataInputStream(socket.getInputStream());
        String novaMensagem = entrada.readUTF();
        System.out.println(novaMensagem);

        entrada.close();
        saida.close();
        socket.close();
    }
}
