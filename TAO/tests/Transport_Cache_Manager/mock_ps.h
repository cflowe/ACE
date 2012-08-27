// $Id: mock_ps.h 92242 2010-10-18 07:19:39Z johnnyw $

class mock_ps
{
public:
  mock_ps (int max) : maximum_ (max) {}
  void update_item (mock_transport&) {}
  int cache_maximum () { return this->maximum_;}
private:
  int maximum_;
};


