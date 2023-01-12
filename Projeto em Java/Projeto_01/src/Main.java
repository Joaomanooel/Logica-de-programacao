
public class Main {
/*
	public char[] nome = {'J','o','a','o'};
*/
	public int[] numero = {20,10,30};
	
	public Main() {
		/*System.out.println(nome[1]); CHAMANDO LETRA POR LETRA
		
		String nomeCompleto = ""; ADCIONANDO ESPAÇO ACADA LUPIN
		for(int i = 0; i < nome.length; i++) {
			nomeCompleto+=nome[i];
		}
		System.out.println(nomeCompleto); */
	
		
		/*TRABALHANDO COM NÚMEROS*/
	int soma = 0;
	for(int i = 0; i < numero.length; i++) {
		soma+=numero[i];
	}
		System.out.println(soma);
	}


	public static void main(String args[]) {
		new Main();
	}
}
