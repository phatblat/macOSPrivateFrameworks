//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFDeviceDriver.h"

@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver>
{
    struct CGRect m_canvas;
    struct CGAffineTransform m_canvasTransform;
    struct CGRect m_viewBox;
    struct CGAffineTransform m_viewBoxTransform;
    struct CGAffineTransform m_worldToDeviceTransform;
    struct CGAffineTransform m_combinedTransform;
}

+ (int)getROP:(id)arg1;
- (id)createBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;
- (id)createDIBitmap:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;
- (id)createDIBitmap:(id)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;
- (id)createRegionWithPath:(id)arg1;
- (id)createRegionWithRects:(id)arg1 in_dc:(id)arg2;
- (id)createPath;
- (id)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;
- (id)createFont:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(_Bool)arg6 lfUnderline:(_Bool)arg7 lfStrikeOut:(_Bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;
- (id)createFont:(int)arg1;
- (id)createPen:(int)arg1 in_width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double *)arg4;
- (id)createPen;
- (id)createNullBrush;
- (id)createSolidBrush:(id)arg1;
- (id)createPatternBrush:(id)arg1 usePaletteForBilevel:(BOOL)arg2;
- (id)createHatchBrush:(id)arg1 in_hatchstyle:(int)arg2;
- (int)plgBlt:(id)arg1 in_destinationParallelogram:(struct CGPoint *)arg2 in_sourceImage:(id)arg3 in_xSrc:(int)arg4 in_ySrc:(int)arg5 in_widthSrc:(int)arg6 in_heightSrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_xform:(struct CGAffineTransform *)arg11 in_colour:(unsigned int)arg12;
- (int)maskBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_maskImage:(id)arg9 in_xMask:(int)arg10 in_yMask:(int)arg11 in_rop:(unsigned int)arg12 in_xform:(struct CGAffineTransform *)arg13 in_colour:(unsigned int)arg14;
- (int)alphaBlend:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_sourceConstantOpacity:(unsigned char)arg11 in_useSourceAlphaChannel:(BOOL)arg12 in_xform:(struct CGAffineTransform *)arg13 in_colour:(unsigned int)arg14;
- (int)stretchBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform *)arg12 in_colour:(unsigned int)arg13;
- (int)bitBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_rop:(unsigned int)arg9 in_xform:(struct CGAffineTransform *)arg10 in_colour:(unsigned int)arg11;
- (int)patBlt:(id)arg1 in_x:(int)arg2 in_y:(int)arg3 in_width:(int)arg4 in_height:(int)arg5 in_rop:(unsigned int)arg6;
- (int)setMetaRgn;
- (int)intersectClipRect:(struct CGRect)arg1;
- (int)excludeClipRect:(struct CGRect)arg1;
- (int)activateTransform:(struct CGAffineTransform)arg1;
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)updateViewBoxTransform;
- (void)applyTransformsToCurrentContext;
- (int)bezier:(id)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7 x4:(int)arg8 y4:(int)arg9;
- (int)bezierTo:(id)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7;
- (int)ellipse:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;
- (int)roundRect:(id)arg1 left:(int)arg2 top:(int)arg3 right:(int)arg4 bottom:(int)arg5 rx:(double)arg6 ry:(double)arg7;
- (int)fillRectangle:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;
- (int)rectangle:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;
- (int)lineTo:(id)arg1 x:(double)arg2 y:(double)arg3;
- (int)polyPolygon:(id)arg1 in_points:(struct CGPoint *)arg2 in_polyCounts:(int *)arg3 in_count:(int)arg4;
- (int)polygon:(id)arg1 in_points:(struct CGPoint *)arg2 in_count:(int)arg3;
- (int)polyPolyline:(id)arg1 in_points:(struct CGPoint *)arg2 in_polyCounts:(int *)arg3 in_count:(int)arg4;
- (int)polyline:(id)arg1 in_points:(struct CGPoint *)arg2 in_count:(int)arg3;
- (int)chord:(id)arg1 leftRect:(int)arg2 topRect:(int)arg3 rightRect:(int)arg4 bottomRect:(int)arg5 xStartArc:(int)arg6 yStartArc:(int)arg7 xEndArc:(int)arg8 yEndArc:(int)arg9;
- (int)pie:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)angleArc:(id)arg1 x:(int)arg2 y:(int)arg3 radius:(unsigned int)arg4 startAngle:(double)arg5 sweepAngle:(double)arg6;
- (int)arcTo:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)arc:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)extTextOut:(id)arg1 px:(int *)arg2 py:(int *)arg3 in_text:(id)arg4 options:(int)arg5 left:(int)arg6 top:(int)arg7 right:(int)arg8 bottom:(int)arg9 spacingValues:(int *)arg10 numValues:(int)arg11;
- (int)textOut:(id)arg1 px:(int *)arg2 py:(int *)arg3 in_text:(id)arg4;
- (void)drawBezierPath:(id)arg1 dc:(id)arg2 fill:(BOOL)arg3 stroke:(BOOL)arg4;
- (struct CGRect)getCanvas;
- (id)initWithCanvas:(struct CGRect)arg1;

@end

