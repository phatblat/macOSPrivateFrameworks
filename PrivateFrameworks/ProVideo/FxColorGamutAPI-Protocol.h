//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FxMatrix44;

@protocol FxColorGamutAPI
- (unsigned long long)colorPrimaries;
- (FxMatrix44 *)colorMatrixFromYCbCrToDesiredRGBAtTime:(CDUnion_baaf6063)arg1;
- (FxMatrix44 *)colorMatrixFromDesiredRGBToYCbCrAtTime:(CDUnion_baaf6063)arg1;
@end

