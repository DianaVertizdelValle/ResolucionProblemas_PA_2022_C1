QT -= gui

QT += widgets       # se añade
LIBS += -lopengl32  # se añade

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        ../../Matematica/IntegracionNumerica/funcion.cpp \
        ../../Matematica/IntegracionNumerica/integradordefunciones.cpp \
        ../Graficador2D/actualizable.cpp \
        ../Graficador2D/dibujo.cpp \
        ../Graficador2D/graficador.cpp \
        dibujofuncion.cpp \
        dibujointegral.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    ../../Matematica/IntegracionNumerica/funcion.h \
    ../../Matematica/IntegracionNumerica/integradordefunciones.h \
    ../Graficador2D/actualizable.h \
    ../Graficador2D/dibujo.h \
    ../Graficador2D/graficador.h \
    dibujofuncion.h \
    dibujointegral.h
