<?xml version="1.0"?>
<xsl:stylesheet  xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" method="text">
  <xsl:template match="*">
    <xsl:param name="imbalance"/>
    <xsl:variable name="first-child-sum" select="./branch[1]/@sum"/>
    <xsl:choose>
      <xsl:when test="count(branch) = 1"><xsl:apply-templates><xsl:with-param name="imbalance" select="$imbalance"/></xsl:apply-templates></xsl:when>
      <xsl:when test="count(branch) != count(branch[@sum = $first-child-sum])">
        <!-- not all child branches are equal -->
        <xsl:for-each select="branch">
          <xsl:variable name="sum" select="@sum"/>
          <xsl:variable name="sibs" select="preceding-sibling::branch|following-sibling::branch"/>
          <xsl:choose>
            <!-- if there is a sibling with equal sum, do nothing -->
            <xsl:when test="count($sibs[@sum = $sum]) &gt; 0"/>
            <xsl:otherwise>
              <xsl:apply-templates select="."><xsl:with-param name="imbalance" select="$sibs[1]/@sum - $sum"/></xsl:apply-templates>
            </xsl:otherwise>
          </xsl:choose>
        </xsl:for-each>
      </xsl:when>
      <xsl:when test="$imbalance != 0"><!-- this is the bad node -->
        <bad-node><xsl:attribute name="name"><xsl:value-of select="@name"/></xsl:attribute>
          <xsl:attribute name="correct-weight"><xsl:value-of select="@weight + $imbalance"/></xsl:attribute>
        </bad-node>
      </xsl:when>
      <!-- else all is good -->
    </xsl:choose>
  </xsl:template>
</xsl:stylesheet>
