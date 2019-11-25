//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADProperties.h>

@class NSNumber, PDTransitionOptions;

__attribute__((visibility("hidden")))
@interface PDTransition : OADProperties
{
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
    NSNumber *duration;
}

@property(retain, nonatomic) NSNumber *duration; // @synthesize duration;
- (void).cxx_destruct;
- (id)description;
- (void)setOptions:(id)arg1;
- (id)options;
- (BOOL)hasTransitionOptions;
- (void)setAdvanceAfterTime:(int)arg1;
- (int)advanceAfterTime;
- (BOOL)hasAdvanceAfterTime;
- (void)setSpeed:(int)arg1;
- (int)speed;
- (BOOL)hasSpeed;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (BOOL)isAdvanceOnClick;
- (BOOL)hasIsAdvanceOnClick;
- (void)setType:(int)arg1;
- (int)type;
- (BOOL)hasType;
- (id)init;

@end

