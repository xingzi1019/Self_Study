package PayrollSystem;

// 正式员工
public class FullTimeEmployee extends Employee {
    private double monthlySalary;  // 月薪
    private double bonus;          // 奖金

    public FullTimeEmployee(String name, int id, String department,
                            double monthlySalary, double bonus) {
        super(name, id, department);
        this.monthlySalary = monthlySalary;
        this.bonus = bonus;
    }

    @Override
    public double calculateSalary() {
        return monthlySalary + bonus;
    }
}