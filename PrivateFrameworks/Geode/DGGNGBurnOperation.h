//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGGNGBurnOperation : DGOperation
{
    NSNumber *_inputExposure;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputExposure; // @synthesize inputExposure=_inputExposure;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)_filter;

@end
