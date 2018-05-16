#pragma once

#include <QMainWindow>

class Move : public QWidget
{

  Q_OBJECT

public:
  Move(QWidget *parent = 0);

  virtual ~Move(){};

protected:
  void moveEvent(QMoveEvent *e);
};

