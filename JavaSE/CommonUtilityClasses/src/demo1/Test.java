package demo1;

import java.time.DayOfWeek;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.Month;
import java.time.format.DateTimeFormatter;
import java.time.temporal.TemporalAdjusters;
import java.util.Date;
import java.util.Locale;

// 过时的 Data 类
//public class Test {
//    public static void main() {
//        Date date = new Date(); // 不带参数是获取现在的时间
//        System.out.println(date); // Sun May 17 22:44:09 CST 2026
//        date = new Date(123, 9, 8); // 1900 + year   1 + month  data 没有偏差
//        System.out.println(date); // Sun Oct 08 00:00:00 CST 2023
//    }
//}

// LocalData 类
//public class Test {
//    public static void main() {
//
//    }
//}

// LocalDataTime
public class Test {
    // 根据当前时间获取指定时间
    // 获取当前日期所在月的第一天和最后一天
    public static void main() {
        LocalDateTime currentDate = LocalDateTime.now();
        LocalDateTime firstDayOfMonth = currentDate.with(TemporalAdjusters.firstDayOfMonth());
        LocalDateTime lastDayOfMonth = currentDate.with(TemporalAdjusters.lastDayOfMonth());
        System.out.println(firstDayOfMonth);
        System.out.println(lastDayOfMonth);
        // 2026-05-01T14:46:32.392416100
        // 2026-05-31T14:46:32.392416100
    }

    // 获取当前日期所在周的指定星期几
    public static void main9() {
        // 我们知道 LocalDateTime 的 with 有这个方法就够了
        LocalDateTime currentDate = LocalDateTime.now();
        //获取当前⽇期所在的当周周⼀
        LocalDateTime firstDayOfWeek = currentDate.with(TemporalAdjusters.previousOrSame(DayOfWeek.MONDAY));
        //获取当前⽇期所在的当周周⽇
        LocalDateTime lastDayOfWeek = currentDate.with(TemporalAdjusters.nextOrSame(DayOfWeek.SUNDAY));
        System.out.println(firstDayOfWeek);
        System.out.println(lastDayOfWeek);
        // previousOrSame：寻找当前⽇期或之前最近的指定星期⼏
        // nextOrSame：寻找当前⽇期或之后最近的指定星期⼏
        // 2026-05-18T14:38:27.994872200
        // 2026-05-24T14:38:27.994872200
    }

    // 增加/减少 日期
    // 年份的增加/减少
    public static void main8() {
        LocalDateTime dateTime = LocalDateTime.now();
        LocalDateTime newDatePlus = dateTime.plusYears(1);
        System.out.println("增加1年后的日期：" + newDatePlus);
        LocalDateTime newDateMinus = dateTime.minusYears(1);
        System.out.println("减少1年后的日期：" + newDateMinus);
        // 增加1年后的日期：2027-05-18T14:27:35.826228900
        // 减少1年后的日期：2025-05-18T14:27:35.826228900
    }

    // 月份的增加/减少
    public static void main7() {
        LocalDateTime dateTime = LocalDateTime.now();
        LocalDateTime newDatePlus = dateTime.plusMonths(1);
        System.out.println("增加1⽉后的⽇期：" + newDatePlus);
        LocalDateTime newDateMinus = dateTime.minusMonths(1);
        System.out.println("减少1⽉后的⽇期：" + newDateMinus);
        // 增加1⽉后的⽇期：2026-06-18T14:25:24.257332100
        // 减少1⽉后的⽇期：2026-04-18T14:25:24.257332100
        dateTime = LocalDateTime.of(2026, 3, 30, 14, 32);
        newDatePlus = dateTime.plusMonths(1);
        System.out.println(newDatePlus);
        newDateMinus = dateTime.minusMonths(1);
        System.out.println(newDateMinus);
        // 2026-04-30T14:32
        // 2026-02-28T14:32
        // 还是很聪明的不是简单的加减而已
    }

    // 周数的增加/减少
    public static void main6() {
        LocalDateTime dateTime = LocalDateTime.now();
        LocalDateTime newDatePlus = dateTime.plusWeeks(1);
        System.out.println("增加1周后的日期：" + newDatePlus);
        LocalDateTime newDateMinus = dateTime.minusWeeks(1);
        System.out.println("减少1周后的日期：" + newDateMinus);
        // 增加1周后的日期：2026-05-25T14:24:11.320394500
        // 减少1周后的日期：2026-05-11T14:24:11.320394500
    }

    // 天数的增加/减少
    public static void main5() {
        LocalDateTime dateTime = LocalDateTime.now();
        LocalDateTime newDatePlus = dateTime.plusDays(1);
        System.out.println("增加1天后的日期：" + newDatePlus);  // 增加1天后的日期：2026-05-19T14:19:30.972727400
        LocalDateTime newDateMinus = dateTime.minusDays(1);
        System.out.println("减少1天后的日期：" + newDateMinus); // 减少1天后的日期：2026-05-17T14:19:30.972727400
    }

    public static void main4() {
        LocalDateTime dateTime = LocalDateTime.now();
        System.out.println("当前⽇期为: " + dateTime);                         // 当前⽇期为: 2026-05-18T14:09:28.585552200
        System.out.println("本周周几：" + dateTime.getDayOfWeek().getValue()); // 本周周几：1
        System.out.println("本周周几：" + dateTime.getDayOfWeek());            // 本周周几：MONDAY
        System.out.println("本月第⼏天：" + dateTime.getDayOfMonth());         // 本月第⼏天：18
        System.out.println("当年第⼏天：" + dateTime.getDayOfYear());          // 当年第⼏天：138
    }

    public static void main3() {
        // LocalDateTime.of 指定日期时间
        LocalDateTime localDateTime = LocalDateTime.of(1998, 9, 10, 21, 21, 34);
        System.out.println("当前日期为: " + localDateTime); // 当前日期为: 1998-09-10T21:21:34

        String stringDate = "2026-10-01 10:30:21";
        // 创建⼀个⾃定义的⽇期时间格式化器
        DateTimeFormatter dateTimeFormatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss"); // 大小写需要注意
        LocalDateTime date = LocalDateTime.parse(stringDate, dateTimeFormatter);
        System.out.println("当前⽇期为: " + date);
    }

    public static void main2() {
        LocalDateTime localDateTime = LocalDateTime.now();
        // expr.var IDEA 提供了便捷的定义变量方式
        // 正常的年月日
        int year = localDateTime.getYear();
        int monthValue = localDateTime.getMonthValue();
        System.out.println("year: " + year);        // year: 2026
        System.out.println("month: " + monthValue); // month: 5
        int day = localDateTime.getDayOfMonth();
        System.out.println("day: " + day);          // day: 18
        day = localDateTime.getDayOfYear(); // A of B -> B 的 A
        System.out.println("day: " + day);          // day: 138  -> 今天是今年的第138天
        System.out.println("===================");
        int hour = localDateTime.getHour();
        int minute = localDateTime.getMinute();
        int second = localDateTime.getSecond();
        System.out.println("hour: " + hour);     // hour: 13
        System.out.println("minute: " + minute); // minute: 52
        System.out.println("second: " + second); // second: 26

    }

    // 创建对象
    public static void main1() {
        // LocalDateTime localDateTime = new LocalDateTime(); // 私有的构造方法 new 不了

        // 当前日期和时间
        LocalDateTime localDateTime1 = LocalDateTime.now();
        // 指定日期和时间
        LocalDateTime localDateTime2 = LocalDateTime.of(2026, 5, 18, 13, 33);
        // 从字符串解析
        LocalDateTime parsed = LocalDateTime.parse("2023-05-15T10:30:00");

        System.out.println(localDateTime1); // 2026-05-18T13:36:19.386145700
        System.out.println(localDateTime2); // 2026-05-18T13:33
        System.out.println(parsed);         // 2023-05-15T10:30
    }
}