import java.util.*;

public static void main(String[] args) {
	String[] names = new String[]  { "", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	Calendar calendar = new GregorianCalendar(2010, 7, 9); // 9 August 2010 - Month start 0, put 7 (Aug) instead of 8
	System.out.println(names[calendar.get(Calendar.DAY_OF_WEEK)]); // "Wed"
}
