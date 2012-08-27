// $Id: VisComp.java 91816 2010-09-17 08:35:56Z johnnyw $
//
// = FILENAME
//    VisComp.java
//
// = AUTHOR
//    Michael Kircher (mk1@cs.wustl.edu)
//
// = DESCRIPTION
//   This is the interface for Java Beans.
//
// ============================================================================


public interface VisComp extends java.util.Observer {

  public void setName (String title);
  public int getProperty ();
}
