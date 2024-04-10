module com.example.designpattern_store {
    requires javafx.controls;
    requires javafx.fxml;

    opens com.example.designpattern.Email to javafx.fxml;
    exports com.example.designpattern.Email;

    opens com.example.designpattern.Store to javafx.fxml;
    exports com.example.designpattern.Store;
}