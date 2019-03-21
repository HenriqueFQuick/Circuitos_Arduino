import java.io.*;
public class teste{

    public static RandomAccessFile raf = new RandomAccessFile("testeula.ula", "r");
    public static RandomAccessFile raf2 = new RandomAccessFile("testeula.hex", "w");
    public static char a, b;

    public static void main(String []args){
        raf.readUTF();
        SeiLa();
    }

    public static void SeiLa(){
        String str = raf.readUTF();
        char op = '';
        while(!str.equals("fim.")){
            switch(str.length()){
                case 4:
                    if(str.charAt(0) == 'A' && str.charAt(1) == '='){
                        a = str.charAt(2);
                    }else if(str.charAt(0) == 'B' && str.charAt(1) == '='){
                                b = str.charAt(2);
                            }else if(str.charAt(0) == 'A'){
                                raf2.write(a + "" + b + "5");
                            }else raf2.write(a + "" + b + "1");
                    break;

                case 3:
                    if(str.charAt(0) == 'A'){
                        raf2.write(a + "" + b + "2");
                    }else raf2.write(a + "" + b + "2");
                    break;

                case 5:
                    if(str.charAt(1) == 'o'){
                         raf2.write(a + "" + b + "4");
                    }else if(str.charAt(1) == 'n'){
                         raf2.write(a + "" + b + "C");
                         }else raf2.write(a + "" + b + "D");
                    break;

                

            }
            
        }

    }
}