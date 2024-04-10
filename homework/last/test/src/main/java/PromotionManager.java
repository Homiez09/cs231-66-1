import java.util.List;

public class PromotionManager {
    public PromotionManager() {}

    public double applyPromotion(List<Promotion> promotions, double value) {
        for (Promotion promotion : promotions) {
            value = promotion.discount(value);
        }
        return value;
    }
}
