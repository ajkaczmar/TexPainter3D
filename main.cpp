#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    // Initialize the application
    QGuiApplication app(argc, argv);

    // Load the QML engine
    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/main.qml"_qs);

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated, &app, [url](QObject *obj, const QUrl &objUrl)
                     {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1); }, Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
