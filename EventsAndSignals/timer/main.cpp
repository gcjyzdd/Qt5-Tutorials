#include <QApplication>
#include "timer.h"

int main(int argc, char *argv[]) {
    
  QApplication app(argc, argv);  
    
  Timer window;
  
  window.resize(250, 150);
  window.setWindowTitle("Timer");
  window.show();

  return app.exec();
}
