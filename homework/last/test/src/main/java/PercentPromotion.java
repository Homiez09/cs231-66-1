public class PercentPromotion implements Promotion {
    double percent;
    public PercentPromotion(double percent) {
        this.percent = percent;
    }
    @Override
    public double discount(double price) {
        return (price * (1-percent));
    }
}
