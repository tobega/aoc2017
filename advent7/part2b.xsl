<?xml version="1.0"?>
<xsl:stylesheet  xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" method="text">
  <xsl:template match="*">
    <xsl:copy>
      <xsl:attribute name="name"><xsl:value-of select="@name"/></xsl:attribute>
      <xsl:attribute name="weight"><xsl:value-of select="@weight"/></xsl:attribute>
      <xsl:attribute name="sum"><xsl:value-of select="sum(descendant-or-self::*/@weight)"/></xsl:attribute>
      <xsl:apply-templates/>
    </xsl:copy>
  </xsl:template>
</xsl:stylesheet>
