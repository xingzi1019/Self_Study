package PayrollSystem;

// 兼职员工
public class PartTimeEmployee extends Employee {
    private double hourlyRate;  // 时薪
    private int hours;          // 工时

    public PartTimeEmployee(String name, int id, String department,
                            double hourlyRate, int hours) {
        super(name, id, department);
        this.hourlyRate = hourlyRate;
        this.hours = hours;
    }

    @Override
    public double calculateSalary() {
        return hourlyRate * hours;
    }
}
