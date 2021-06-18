public class Time2 {
    private int hours;
    private int minute;
    private int second;


    public Time2() {
    }

    public Time2(int hours, int minute, int second) {
        this.hours = hours;
        this.minute = minute;
        this.second = second;
    }

    public int getHours() {
        return this.hours;
    }

    public void setHours(int hours) {
        this.hours = hours;
    }

    public int getMinute() {
        return this.minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return this.second;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    public Time2 hours(int hours) {
        setHours(hours);
        return this;
    }

    public Time2 minute(int minute) {
        setMinute(minute);
        return this;
    }

    public Time2 second(int second) {
        setSecond(second);
        return this;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof Time2)) {
            return false;
        }
        Time2 time2 = (Time2) o;
        return hours == time2.hours && minute == time2.minute && second == time2.second;
    }

    @Override
    public int hashCode() {
        return Objects.hash(hours, minute, second);
    }

    @Override
    public String toString() {
        return "{" +
            " hours='" + getHours() + "'" +
            ", minute='" + getMinute() + "'" +
            ", second='" + getSecond() + "'" +
            "}";
    }
    
}
