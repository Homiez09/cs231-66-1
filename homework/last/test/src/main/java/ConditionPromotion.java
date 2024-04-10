public class ConditionPromotion implements Promotion {
    double condition;
    double minPurchase;
    public ConditionPromotion(double condition, double minPurchase) {
        this.condition = condition;
        this.minPurchase = minPurchase;
    }
    @Override
    public double discount(double price) {
        if (price >= this.condition) {
            return price - condition;
        }
        return 0;
    }
}
