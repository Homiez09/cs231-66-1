import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Promotion> promotions = new ArrayList<>();

        promotions.add(new CouponPromotion(150));
        promotions.add(new CouponPromotion(50));
        promotions.add(new PercentPromotion(0.1));
        promotions.add(new ConditionPromotion(300, 3000));

        PromotionManager promotionManager = new PromotionManager();
        double discountPrice = promotionManager.applyPromotion(promotions, 5000);

        System.out.println(discountPrice);
    }
}
