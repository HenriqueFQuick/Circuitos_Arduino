import java.io.*;

public class Semaforo_java{
    public static void main(String[] args) throws Exception{
        Semaforo();
    }


    public static void Semaforo()throws Exception{
        int x = 0;
        ProcessBuilder pb;
        while(true){
            String str = x + "";
            pb = new ProcessBuilder("envia.exe", "COM8", str);
            System.out.println(x);
            x = (x + 1)%18;
            Thread.sleep(1000);
        }
    }
}