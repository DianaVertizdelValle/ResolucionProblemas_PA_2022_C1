QT -= gui

QT += widgets
LIBS += -lopengl32

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        ../Repo/Graficacion/Graficador2D/actualizable.cpp \
        ../Repo/Graficacion/Graficador2D/dibujo.cpp \
        ../Repo/Graficacion/Graficador2D/graficador.cpp \
        main.cpp \
        rectangulo.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    ../Repo/Graficacion/Graficador2D/actualizable.h \
    ../Repo/Graficacion/Graficador2D/dibujo.h \
    ../Repo/Graficacion/Graficador2D/graficador.h \
    rectangulo.h
