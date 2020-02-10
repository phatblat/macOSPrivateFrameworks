//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol FxPlugAPIDelegate
- (NSString *)displayName;
- (void)postChannelChange:(struct OZChannelBase *)arg1 flagsOnly:(BOOL)arg2;
- (void)preChannelChange:(struct OZChannelBase *)arg1 flagsOnly:(BOOL)arg2;
- (void)abortAndWait;
- (void)endOperationWithChannel:(struct OZChannelBase *)arg1;
- (void)beginOperationWithChannel:(struct OZChannelBase *)arg1;
- (BOOL)usesRationalTime;
- (void)endTimingOperation:(void *)arg1;
- (void *)beginTimingOperation:(struct FigTime)arg1 forChannel:(struct OZChannelBase *)arg2;
- (CDUnion_baaf6063)figTimeToFxTime:(const struct FigTime *)arg1 withConversionData:(void *)arg2;
- (struct FigTime)fxTimeToFigTime:(CDUnion_baaf6063)arg1 withConversionData:(void *)arg2;
- (struct FigTime)convertToFigTime:(double)arg1;
- (double)convertFromFigTime:(const struct FigTime *)arg1;
- (void)updateInspector;
- (void)markForDynamicParameterUsage;
- (void)removeParameter:(unsigned int)arg1;
- (struct OZChannelBase *)parameterAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
- (struct OZChannelBase *)channelWithID:(int)arg1;
- (struct OZChannelFolder *)rootChannel;
@end
