module com.example.interface1 {
    requires javafx.controls;
    requires javafx.fxml;


    opens com.example.interface_assignment.interface1 to javafx.fxml;
    exports com.example.interface_assignment.interface1;

    opens com.example.interface_assignment.interface2 to javafx.fxml;
    exports com.example.interface_assignment.interface2;
}