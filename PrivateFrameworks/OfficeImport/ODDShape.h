//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDShape : ODDLayoutObject
{
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)description;
- (void)addAdjustment:(id)arg1;
- (id)adjustments;
- (void)setPresetType:(int)arg1;
- (int)presetType;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)init;

@end

