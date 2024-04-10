module com.example.composition2 {
    requires javafx.controls;
    requires javafx.fxml;


    exports com.example.composition.composition3;
    exports com.example.composition.composition2;
    opens com.example.composition.composition2 to javafx.fxml;
    opens com.example.composition.composition3 to javafx.fxml;
}