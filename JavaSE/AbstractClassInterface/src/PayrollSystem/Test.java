package PayrollSystem;

// 测试类
public class Test {
    public static void main(String[] args) {
        // 创建不同类型的员工
        Employee[] employees = {
                new FullTimeEmployee("张三", 1001, "研发部", 15000, 5000),
                new PartTimeEmployee("李四", 2001, "市场部", 80, 60),
                new Intern("王五", 3001, "人事部", 3000)
        };

        // 统一处理:打印工资条
        System.out.println("===== 本月工资发放 =====\n");
        double totalSalary = 0;
        for (Employee emp : employees) {
            emp.work();           // 多态
            emp.printPaySlip();   // 多态(printPaySlip 是 final,但内部调用了 calculateSalary 多态)
            totalSalary += emp.calculateSalary();
        }
        System.out.println("===== 公司本月薪资总支出:" + String.format("%.2f", totalSalary) + " 元 =====");
    }
}
