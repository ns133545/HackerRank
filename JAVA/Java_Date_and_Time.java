import java.time.*;
class Result {
  
    public static String findDay(int month, int day, int year) {
        LocalDate localDate = LocalDate.of(year, month, day);

        java.time.DayOfWeek dayOfWeek = localDate.getDayOfWeek();
        return dayOfWeek.toString();
        
    }

}
