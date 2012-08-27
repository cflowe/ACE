// $Id: MapView.h 94051 2011-05-11 13:25:57Z johnnyw $

#ifndef __MAPVIEW_H
#define __MAPVIEW_H

#include <QtGui/qpixmap.h>
#include <QtGui/qgraphicsscene.h>
#include <QtGui/qgraphicsview.h>
#include <QtGui/qwidget.h>
#include <QtGui/qevent.h>

class MapView : public QGraphicsView
{
  Q_OBJECT

public:
  MapView(QGraphicsScene&, QWidget* parent=0);
  void clear();
  void resizeEvent (QResizeEvent *);

protected:
  QPixmap bg_pixmap_;
};



#endif // __MAPVIEW_H
