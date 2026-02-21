import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: "Qt CI/CD Test"

    Rectangle {
        anchors.fill: parent
        color: "#f0f0f0"

        Text {
            anchors.centerIn: parent
            text: "Hello from GitHub Actions!"
            font.pixelSize: 24
            color: "#333333"
        }
    }
}
