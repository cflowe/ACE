//$Id: NestedValueValueFactoryImpl.java 97289 2013-08-13 13:54:46Z mesnier_p $
package demo;

import Demo.NestedValue;
import org.omg.CORBA.portable.ValueFactory;
import org.omg.CORBA_2_3.portable.InputStream;

import java.io.Serializable;


public class NestedValueValueFactoryImpl implements ValueFactory {

  @Override
  public Serializable read_value(InputStream inputStream) {
    return inputStream.read_value(new NestedValueImpl());
  }
}
