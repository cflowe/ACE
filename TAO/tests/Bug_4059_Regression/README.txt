$Id: README.txt 96783 2013-02-07 23:05:45Z mesnier_p $

This test illustrates the problem that using the RT client protocol policy breaks the handling of location forwarding.

To run, pass an ORBListenEndpoint value to the server with an explicit port number. Server will bind its reference into an IOR table with the naem "Test".  Run the client passing a corresponding corbaloc IOR. The test should return success quickly, or timeout after about 10 seconds if failure.

./server -ORBListenEndpoints iiop://localhost:5678

./client -k corbaloc::localhost:5678/Test

The server must be explicitly killed on a failure, it will shutdown clean on success.

