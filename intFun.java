import java.util.Scanner;
public class intFun{
   public static int getInput(int x){
      Scanner input = new Scanner(System.in);
      System.out.println("enter size of array: ");
      x = input.nextInt();
      return x;
   }
   public static int[] createArray(int x){
      int[] anArray = new int[x];
      return anArray;
   }
   public static int[] initializeArray(int x, int [] anArray){
      Scanner in = new Scanner(System.in);
      for(int i = 0; i < x; i++){
	 System.out.println("Enter a number: ");
	 int y = in.nextInt();
	 anArray[i] = y;
      }
	 return anArray;
   }
   public static void printArray(int x, int [] anArray){
      for(int i = 0; i < x; i++){
	 System.out.println(anArray[i]);
      }
   }
public static void main(String[] args){
      int a = 0;
      int b = 0;
      a = getInput(a);
      int [] newArray = createArray(a);
      newArray = initializeArray(a, newArray);
      printArray(a, newArray);
   }
}

