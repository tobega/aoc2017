<?xml version="1.0"?>
<xsl:stylesheet  xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" method="text">
  <xsl:template match="node">
    <xsl:variable name="name" select="@name"/>
    <xsl:if test="count(//child[@name = $name]) = 0"><xsl:value-of select="$name"/></xsl:if>
  </xsl:template>
</xsl:stylesheet>
