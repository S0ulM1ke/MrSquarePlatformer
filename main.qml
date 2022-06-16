import QtQuick 2.12
import QtQuick.Window 2.12
import game.engine 1.0

Window {
    minimumWidth: 640
    minimumHeight: 480
    visible: true
    title: qsTr("Mr Square Adventures")

    Game {
        id:gameDisplay
    }

    Component.onCompleted: {
        gameDisplay.draw()
    }
}
