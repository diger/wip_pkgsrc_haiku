NAME=WebPositive
TYPE=APP
SRCS=	AuthenticationPanel.cpp	BrowserApp.cpp BrowserWindow.cpp\
	BrowsingHistory.cpp	CredentialsStorage.cpp DownloadProgressView.cpp\
	DownloadWindow.cpp SettingsKeys.cpp SettingsWindow.cpp URLInputGroup.cpp\
	./autocompletion/AutoCompleter.cpp ./autocompletion/AutoCompleterDefaultImpl.cpp\
	./autocompletion/TextViewCompleter.cpp\
	./support/BaseURL.cpp ./support/BitmapButton.cpp\
	./support/FontSelectionView.cpp ./support/SettingsMessage.cpp\
	./tabview/TabContainerView.cpp ./tabview/TabManager.cpp\
	./tabview/TabView.cpp

RDEFS=WebPositive.rdef

LIBS=stdc++ WebKit tracker
      
LIBPATHS=/boot/develop/lib/x86
SYSTEM_INCLUDE_PATHS=/boot/system/develop/headers/be
LOCAL_INCLUDE_PATHS=
DEFINES=
WARNINGS=ALL
COMPILER_FLAGS=
LINKER_FLAGS=

# Generate version info
#DUMMY := $(shell version.sh)

## include the makefile-engine
include /boot/system/develop/etc/makefile-engine