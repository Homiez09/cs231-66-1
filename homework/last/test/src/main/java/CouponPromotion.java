public class CouponPromotion implements Promotion {
    double value;
    public CouponPromotion(double value) {
        this.value = value;
    }
    @Override
    public double discount(double price) {
        return price - value;
    }
}
