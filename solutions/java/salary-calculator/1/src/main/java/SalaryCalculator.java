public class SalaryCalculator {
    public double salaryMultiplier(int daysSkipped) {
        double multiplier = (double)daysSkipped>=5.0 ? 0.85 : 1.00;
        return multiplier;
    }

    public int bonusMultiplier(int productsSold) {
        int multiplier = productsSold>=20?13:10;
        return multiplier;
    }

    public double bonusForProductsSold(int productsSold) {
        double output = productsSold*bonusMultiplier(productsSold);
        return output;
    }

    public double finalSalary(int daysSkipped, int productsSold) {
        double salary = 1000.0*salaryMultiplier(daysSkipped);
        double finalS = (salary + bonusForProductsSold(productsSold))>=2000?2000:(salary + bonusForProductsSold(productsSold));
        return finalS;
    } 
}
