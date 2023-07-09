<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <body>
                <h1 align="center">Latest MCU Movie </h1>
                <table border="1" cellspacing="0" align="center">
                    <tr>
                        <th>Title</th>
                        <th>Artist</th>
                        <th>Year</th>
                        <th>Genre</th>
                    </tr>
                    <xsl:for-each select="cdcatalogue/cd">
                        <tr>
                            <td><xsl:value-of select="title" /></td>
                            <td><xsl:value-of select="artist" /></td>
                            <td><xsl:value-of select="year" /></td>
                            <td><xsl:value-of select="genre" /></td>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>