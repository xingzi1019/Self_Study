package PayrollSystem;

// 实习生
public class Intern extends Employee {
    private double allowance;  // 实习津贴

    public Intern(String name, int id, String department, double allowance) {
        super(name, id, department);
        this.allowance = allowance;
    }

    @Override
    public double calculateSalary() {
        return allowance;
    }
}
