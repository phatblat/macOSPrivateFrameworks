//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface RKColorUtil : NSObject
{
    double m_gamma;
    double m_one_div_gamma;
    double m_xr;
    double m_yr;
    double m_zr;
    double m_xg;
    double m_yg;
    double m_zg;
    double m_xb;
    double m_yb;
    double m_zb;
    double m_xw;
    double m_yw;
    double m_zw;
    double m_Xr;
    double m_Yr;
    double m_Zr;
    double m_Xg;
    double m_Yg;
    double m_Zg;
    double m_Xb;
    double m_Yb;
    double m_Zb;
    double m_Xw;
    double m_Yw;
    double m_Zw;
    struct Mat3f *m_M;
    struct Mat3f *m_invM;
    double (*m_maxSatArray)[64][64];
}

+ (void)computeChromacitiesParam_xr:(double)arg1 yr:(double)arg2 xg:(double)arg3 yg:(double)arg4 xb:(double)arg5 yb:(double)arg6 xw:(double)arg7 yw:(double)arg8 Xw:(double *)arg9 Yw:(double *)arg10 Zw:(double *)arg11 M:(struct Mat3f *)arg12;
+ (void)initialize;
- (void)dealloc;
- (id)initGenericRGB;
- (id)initAdobeRGB;
- (void)saturationRenderingIntent:(struct Vec3f *)arg1;
- (void)convertYCbCr:(const struct Vec3f *)arg1 toXYZ:(struct Vec3f *)arg2;
- (void)convertLHS:(const struct Vec3f *)arg1 toYCbCr:(struct Vec3f *)arg2;
- (void)convertYCbCr:(const struct Vec3f *)arg1 toLHS:(struct Vec3f *)arg2;
- (void)convertXYZ:(const struct Vec3f *)arg1 toYCbCr:(struct Vec3f *)arg2;
- (void)convertLHS:(const struct Vec3f *)arg1 torgb:(struct Vec3f *)arg2;
- (void)convertLHS:(const struct Vec3f *)arg1 toRGB:(struct Vec3f *)arg2;
- (void)convertrgb:(const struct Vec3f *)arg1 toLHS:(struct Vec3f *)arg2;
- (void)convertRGB:(const struct Vec3f *)arg1 toLHS:(struct Vec3f *)arg2;
- (void)convertLHS:(const struct Vec3f *)arg1 toLab:(struct Vec3f *)arg2;
- (void)convertLab:(const struct Vec3f *)arg1 toLHS:(struct Vec3f *)arg2;
- (void)convertLHS:(const struct Vec3f *)arg1 toIPT:(struct Vec3f *)arg2;
- (void)convertIPT:(const struct Vec3f *)arg1 toLHS:(struct Vec3f *)arg2;
- (double)IPT2Hue:(const struct Vec3f *)arg1;
- (double)Lab2Hue:(const struct Vec3f *)arg1;
- (void)convertHue:(double)arg1 andSat:(double)arg2 toCx:(double *)arg3 andCy:(double *)arg4;
- (double)XYZ2Hue:(const struct Vec3f *)arg1;
- (double)rgb2Hue:(const struct Vec3f *)arg1;
- (double)RGB2Hue:(const struct Vec3f *)arg1;
- (void)convertLab:(const struct Vec3f *)arg1 torgb:(struct Vec3f *)arg2;
- (void)convertrgb:(const struct Vec3f *)arg1 toLab:(struct Vec3f *)arg2;
- (void)convertIPT:(const struct Vec3f *)arg1 torgb:(struct Vec3f *)arg2;
- (void)convertrgb:(const struct Vec3f *)arg1 toIPT:(struct Vec3f *)arg2;
- (void)convertXYZ:(const struct Vec3f *)arg1 torgb:(struct Vec3f *)arg2;
- (void)convertrgb:(const struct Vec3f *)arg1 toXYZ:(struct Vec3f *)arg2;
- (void)convertLab:(const struct Vec3f *)arg1 toRGB:(struct Vec3f *)arg2;
- (void)convertRGB:(const struct Vec3f *)arg1 toLab:(struct Vec3f *)arg2;
- (void)convertIPT:(const struct Vec3f *)arg1 toRGB:(struct Vec3f *)arg2;
- (void)convertRGB:(const struct Vec3f *)arg1 toIPT:(struct Vec3f *)arg2;
- (void)convertXYZ:(const struct Vec3f *)arg1 toRGB:(struct Vec3f *)arg2;
- (void)convertRGB:(const struct Vec3f *)arg1 toXYZ:(struct Vec3f *)arg2;
- (void)convertIPT:(const struct Vec3f *)arg1 toXYZ:(struct Vec3f *)arg2;
- (void)convertXYZ:(const struct Vec3f *)arg1 toIPT:(struct Vec3f *)arg2;
- (void)convertLab:(const struct Vec3f *)arg1 toXYZ:(struct Vec3f *)arg2;
- (void)convertXYZ:(const struct Vec3f *)arg1 toLab:(struct Vec3f *)arg2;

@end
