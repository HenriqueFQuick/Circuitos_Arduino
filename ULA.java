import java.io.*;
import java.util.Scanner;

public class ULA{

	public static ProcessBuilder pb;
	public static Process p;
 	public static void main (String [] args){
		try{
			ULA();
		}catch(Exception e){
			e.printStackTrace();
		}
	}

	//metodo para a ULA( and, or, not A, soma)
	public static void ULA()throws Exception{
		int a = read("A");
		int b = read("B");
		int opcode = read("OPcode");

		switch (opcode) {
			case 0:
				and(a,b);
				break;
			case 1:
				or(a,b);
				break;
			case 2:
				notA(a,b);
				break;
			case 3:
				soma(a,b);
				break;
			default:
				System.out.println("OPcode invalido");
				break;
		}
	}

	//metodo para ler o que o usuario digitar
	public static int read(String str)throws Exception{
		Scanner read = new Scanner(System.in);
		System.out.print("Digite o valor do "+ str + ": ");
		int n = read.nextInt();
		return n;
	}

	//metodo para fazer uma porta and
	public static void and(int a, int b)throws Exception{
		int x = (a&b);
		String str = a + " "+ b + " " + x + "0";
		pb = new ProcessBuilder("envia.exe","com8",str);
	}

	//metood para fazer uma porta or
	public static void or(int a, int b)throws Exception{
		int x = (a|b);
		String str = a + " "+ b + " " + x + "0";
		pb = new ProcessBuilder("envia.exe","com8",str);
	}

	//metodo para fazer uma porta not(apenas positivo)
	public static void notA(int a, int b)throws Exception{
		int x = 0;
		if(a == 0){
			x = 1;
		}else x = 0;
		String str = a + " "+ b + " " + x + "0";
		pb = new ProcessBuilder("envia.exe","com8",str);
	}

	//metodo para fazer uma soma em binario(porta xor para o resultado e uma porta and para o "vai 1")
	public static void soma(int a, int b)throws Exception{
		int x = (a&b);
		int y = (a^b);
		String str = a + " "+ b + " " + y + " " + x;
		pb = new ProcessBuilder("envia.exe","com8",str);
	}
}