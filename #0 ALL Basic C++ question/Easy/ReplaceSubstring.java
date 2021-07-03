import java.util.*;
public class ReplaceSubstring
{
  public static void main(String args[])
  {
    Scanner s=new Scanner(System.in);
	System.out.println("Enter the string: ");
	String str=s.nextLine();
	System.out.println("Enter the string o be replaced: ");
	String old_str=s.nextLine();
	System.out.println("Enter the new String: ");
	String new_str=s.nextLine();
	
	String replaced=str.replace(old_str,new_str); //VVI method
	
	System.out.println(replaced);
  }

};