import java.util.Scanner;


public class Invertri {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] a=new int[3];
		int i,j=0;
		Scanner s=new Scanner(System.in);
		for(i=0;i<3;i++)
			a[i]=s.nextInt();
		int max=a[0];
		for(i=1;i<3;i++)
		if(max<a[i]){
			j=i+1;
			max=a[i];
		}
		System.out.println("max  " +j);	
		int min=a[0];
		
		for(i=1;i<3;i++){
			if(min>a[i])
				j=i+1;
				min=a[i];}
		System.out.println("min  " +j);
	}
}
		
