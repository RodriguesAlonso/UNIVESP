import java.util.Comparator;
//pagina 548
public class TimeComparator implements Comparator<Time2> {
    int hourCompare = 0;
    @Override
    public int compare(Time2 time1, Time2 time2) {
        int hourDifference = time1.getHours() - time2.getHours();
        if (hourDifference != 0)
            return hourDifference;

        int minuteDifference = time1.getMinute() - time2.getMinute();
        if (minuteDifference != 0)
            return minuteDifference;
        
        int secondDifference = time1.getSecond() - time2.getSecond();
        if (secondDifference != 0)
            return secondDifference;
    return 0;
    }

    
    
}
