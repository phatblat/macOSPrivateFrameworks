//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGAdjustmentsIntensityOperation : DGOperation
{
    NSNumber *_inputIntensity;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
- (void).cxx_destruct;
- (BOOL)isPostGeometryOperation;
- (void)dealloc;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (id)_filter;

@end

