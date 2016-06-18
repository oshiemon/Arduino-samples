void mcpInitPullUp() {
  mcp.begin();
  mcp.pinMode( 0, INPUT); mcp.pullUp( 0, HIGH);
  mcp.pinMode( 1, INPUT); mcp.pullUp( 1, HIGH);
  mcp.pinMode( 2, INPUT); mcp.pullUp( 2, HIGH);
  mcp.pinMode( 3, INPUT); mcp.pullUp( 3, HIGH);
  mcp.pinMode( 4, INPUT); mcp.pullUp( 4, HIGH);
  mcp.pinMode( 5, INPUT); mcp.pullUp( 5, HIGH);
  mcp.pinMode( 6, INPUT); mcp.pullUp( 6, HIGH);
  mcp.pinMode( 7, INPUT); mcp.pullUp( 7, HIGH);
  mcp.pinMode( 8, INPUT); mcp.pullUp( 8, HIGH);
  mcp.pinMode( 9, INPUT); mcp.pullUp( 9, HIGH);
  mcp.pinMode(10, INPUT); mcp.pullUp(10, HIGH);
  mcp.pinMode(11, INPUT); mcp.pullUp(11, HIGH);
  mcp.pinMode(12, INPUT); mcp.pullUp(12, HIGH);
  mcp.pinMode(13, INPUT); mcp.pullUp(13, HIGH);
  mcp.pinMode(14, INPUT); mcp.pullUp(14, HIGH);
  mcp.pinMode(15, INPUT); mcp.pullUp(15, HIGH);
  mcp.pinMode(16, INPUT); mcp.pullUp(16, HIGH);
}

