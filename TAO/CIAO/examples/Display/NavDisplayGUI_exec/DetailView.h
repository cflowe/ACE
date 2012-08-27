// $Id: DetailView.h 94051 2011-05-11 13:25:57Z johnnyw $

#ifndef __DETAILVIEW_H
#define __DETAILVIEW_H


#include "NavUnit.h"
#include <QtGui/qwidget.h>

class QLabel;
class QSpinBox;

class DetailView : public QWidget
{
  Q_OBJECT

public:
  DetailView(QWidget *parent);
  virtual ~DetailView();

public slots:
  void currentNode(NavUnit *unit);
  void updateLocation(const UnitLocation &loc);

private:
  QSpinBox *y_edit;
  QSpinBox *x_edit;
};


#endif // __DETAILVIEW_H
