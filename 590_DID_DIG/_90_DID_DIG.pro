TEMPLATE = app
TARGET = _90_DID_DIG 

QT        += core gui network webkit qt3support 

HEADERS   += _590_did_dig.h \
	passworddialog.h \
    part.h \
    objectmgmt.h \
    mainwindow.h \
    inletwidget.h \
    inletobject.h \
    injectorwidget.h \
    injectorobject.h \
    detectorwidget.h \
    detectorobject.h \
    configuredialog2.h \
    configuredialog.h \
    columnobject.h \
    3rdparty/qextserialport/qextserialport.h \
    3rdparty/qextserialport/qextserialenumerator.h \
    3rdparty/libmodbus/src/modbus.h \
    ovenwidget.h \
    ovencontrol.h \
    rampmonitor.h \
    event_io.h \
    i2c--dev.h \
    ui_event_io.h \
    rampoven_comm.h \
    inputparam.h \
    rampoven_displaypar.h \
    pleasewait.h \
#     runrecipeerror.h \
    keypress.h \
    spi_char.h \
    valvecontrol.h \
    readflow.h \
    detconfigure.h \
    rampoven_zone_damping.h \
    rampoven_output_parameter.h \
    rampoven_zone_control.h \
    rampoven_zone_supr_par.h \
    rampoven_cal_zero.h \
    rampoven_board_secruity.h \
    rampoven_zone_alarm_para.h \
    rampoven_registers.h \
    setinittemp.h \
    rampoven_para_registers.h \
    readpressure.h \
    waitfortrigger.h \
    calibrate.h \
    data.h \
    output.h \
    setup.h \
    valves.h \
    outputgainctrl.h \
    settemp.h \
    dataconfig.h \
    numericinput.h \
    poweroffmessage.h \
    numpopup.h \
    polarizepopup.h \
    voltageNumPopUp.h \
    polpopup.h \
    temppopup.h \
    gainpopup.h \
    ad7176-spi.h \
    iio-utils.h
#    linux/spi/spidev.h
#    ui_calibrate.h \
#    ui_data.h \
#    ui_output.h \
#    ui_setup.h \
SOURCES   += main.cpp \
    _590_did_dig.cpp \
#    new_did_inbox.cpp \
    passworddialog.cpp \
    part.cpp \
    objectmgmt.cpp \
    mainwindow.cpp \
    inletwidget.cpp \
    inletobject.cpp \
    injectorwidget.cpp \
    injectorobject.cpp \
    detectorwidget.cpp \
    detectorobject.cpp \
    configuredialog2.cpp \
    configuredialog.cpp \
    columnobject.cpp \
    3rdparty/qextserialport/qextserialport.cpp \
    3rdparty/libmodbus/src/modbus.c \
    3rdparty/libmodbus/src/modbus-data.c \
    3rdparty/libmodbus/src/modbus-rtu.c \
    ovenwidget.cpp \
    ovencontrol.cpp \
    rampmonitor.cpp \
    event_io.cpp \
    rampoven_comm.cpp \
    inputparam.cpp \
    rampoven_displaypar.cpp \
    pleasewait.cpp \
#    runrecipeerror.cpp \
    keypress.cpp \
    valvecontrol.cpp \
    readflow.cpp \
    detconfigure.cpp \
    rampoven_zone_damping.cpp \
    rampoven_output_parameter.cpp \
    rampoven_zone_control.cpp \
    rampoven_zone_supr_par.cpp \
    rampoven_cal_zero.cpp \
    rampoven_board_secruity.cpp \
    rampoven_zone_alarm_para.cpp \
    rampoven_registers.cpp \
    setinittemp.cpp \
    rampoven_para_registers.cpp \
    readpressure.cpp \
    waitfortrigger.cpp \
    calibrate.cpp \
    data.cpp \
    output.cpp \
    setup.cpp \
    valves.cpp \
    outputgainctrl.cpp \
    settemp.cpp \
    dataconfig.cpp \
    numericinput.cpp \
    poweroffmessage.cpp \
    numpopup.cpp \
    polarizepopup.cpp \
    voltageNumPopUp.cpp \
    polpopup.cpp \
    temppopup.cpp \
    gainpopup.cpp \
    ad7176-spi.cpp \
    iio-utils.cpp
INCLUDEPATH += 3rdparty/libmodbus 3rdparty/libmodbus/src 3rdparty/qextserialport

	unix:SOURCES += 3rdparty/qextserialport/posix_qextserialport.cpp	\
                3rdparty/qextserialport/qextserialenumerator_unix.cpp
	unix:DEFINES += _TTY_POSIX_
	win32:SOURCES += 3rdparty/qextserialport/win_qextserialport.cpp \
                        3rdparty/qextserialport/qextserialenumerator_win.cpp
	win32:DEFINES += _TTY_WIN_  WINVER=0x0501
	win32:LIBS += -lsetupapi -lwsock32
FORMS     += _590_did_dig.ui \
	passworddialog.ui \
    mainwindow.ui \
    inletwidget.ui \
    injectorwidget.ui \
    detectorwidget.ui \
    configuredialog2.ui \
    configuredialog.ui \
    ovenwidget.ui \
    ovencontrol.ui \
    rampmonitor.ui \
    rampoven_comm.ui \
    inputparam.ui \
    rampoven_displaypar.ui \
    pleasewait.ui \
#    runrecipeerror.ui \
    valvecontrol.ui \
    readflow.ui \
    detconfigure.ui \
    rampoven_zone_damping.ui \
    rampoven_output_parameter.ui \
    rampoven_zone_control.ui \
    rampoven_zone_supr_par.ui \
    rampoven_cal_zero.ui \
    rampoven_board_secruity.ui \
    rampoven_zone_alarm_para.ui \
    rampoven_registers.ui \
    setinittemp.ui \
    rampoven_para_registers.ui \
    readpressure.ui \
    waitfortrigger.ui \
    runrecipeerror.ui \
    calibrate.ui \
    data.ui \
    output.ui \
    setup.ui \
    valves.ui \
    outputgainctrl.ui \
    settemp.ui \
    dataconfig.ui \
    numericinput.ui \
    poweroffmessage.ui \
    numpopup.ui \
    voltageNumPopUp.ui \
    polpopup.ui \
    polarizepopup.ui \
    temppopup.ui \
    gainpopup.ui        
RESOURCES +=
