///////////////////////////////////////////////////////////////////////
//
//  Problem Statement : Display Clock
//
//////////////////////////////////////////////////////////////////////

import java.time.format.DateTimeFormatter;
import java.time.LocalDateTime;


public class Program523
{
    public static void main(String[] args) 
    {
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("yyyy/mm/dd hh:mm:ss");
        LocalDateTime now = LocalDateTime.now();
        System.out.println(dtf.format(now));
    }
}