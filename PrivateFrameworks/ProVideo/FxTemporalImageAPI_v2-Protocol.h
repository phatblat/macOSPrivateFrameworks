//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FxTemporalImageAPI.h"

@protocol FxTemporalImageAPI_v2 <FxTemporalImageAPI>
- (BOOL)getSourceTexture:(id *)arg1 withInfo:(CDStruct_b8eb0ecc)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (BOOL)getSourceBitmap:(id *)arg1 withInfo:(CDStruct_b8eb0ecc)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (BOOL)getInputTexture:(id *)arg1 withInfo:(CDStruct_b8eb0ecc)arg2 atFxTime:(CDUnion_baaf6063)arg3;
- (BOOL)getInputBitmap:(id *)arg1 withInfo:(CDStruct_b8eb0ecc)arg2 atFxTime:(CDUnion_baaf6063)arg3;
@end

