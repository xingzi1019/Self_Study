package PayrollSystem;
// 抽象类:员工
public abstract class Employee {
    protected String name;
    protected int id;
    protected String department;
    public Employee(String name, int id, String department) {
        this.name = name;
        this.id = id;
        this.department = department;
    }
    // 抽象方法:计算薪资(每种员工计算方式不同)
    public abstract double calculateSalary();
    // 具体方法:打印工资条(所有员工通用)
    public final void printPaySlip() {
        System.out.println("------- 员工工资条 -------");
        System.out.println("姓名: " + name);
        System.out.println("工号: " + id);
        System.out.println("部门: " + department);
        System.out.println("员工类型: " + this.getClass().getSimpleName());
        System.out.println("实发薪资: " + String.format("%.2f", calculateSalary()) + " 元");
        System.out.println("------------------------");
        System.out.println();
    }
    // 具体方法:工作(所有员工通用)
    public void work() {
        System.out.println(name + "正在" + department + "工作");
    }
}
