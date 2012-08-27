// $Id: DemoObservable.java 91816 2010-09-17 08:35:56Z johnnyw $
//
// = FILENAME
//    DemoObservable.java
//
// = AUTHOR
//    Michael Kircher (mk1@cs.wustl.edu)
//
// = DESCRIPTION
//   This class servers as the core class of the simulation demo
//
// ============================================================================



public abstract class DemoObservable extends java.util.Observable {

  public abstract int getProperty ();
}
