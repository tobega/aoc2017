<?xml version="1.0"?>
<xsl:stylesheet  xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" method="text">
  <xsl:template match="node">
    <xsl:variable name="name" select="@name"/>
    <xsl:if test="count(//child[@name = $name]) = 0">
      <root><xsl:attribute name="name"><xsl:value-of select="$name"/></xsl:attribute>
         <xsl:attribute name="weight"><xsl:value-of select="@weight"/></xsl:attribute>
         <xsl:apply-templates/>
      </root>
    </xsl:if>
  </xsl:template>

  <xsl:template match="child">
    <xsl:variable name="name" select="@name"/>
    <xsl:apply-templates select="//node[@name = $name]" mode="tree"/>
  </xsl:template>

  <xsl:template match="node" mode="tree">
    <branch><xsl:attribute name="name"><xsl:value-of select="@name"/></xsl:attribute>
         <xsl:attribute name="weight"><xsl:value-of select="@weight"/></xsl:attribute>
       <xsl:apply-templates/>
    </branch>
  </xsl:template>
</xsl:stylesheet>
