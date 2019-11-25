//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EDPivotDataField : NSObject
{
    long long mBaseField;
    unsigned long long mBaseItem;
    unsigned long long mFieldId;
    unsigned long long mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;
- (void).cxx_destruct;
- (id)description;
- (void)setShowDataAs:(int)arg1;
- (int)showDataAs;
- (void)setName:(id)arg1;
- (id)name;
- (void)setNumFmtId:(unsigned long long)arg1;
- (unsigned long long)numFmtId;
- (void)setFieldId:(unsigned long long)arg1;
- (unsigned long long)fieldId;
- (void)setBaseItem:(unsigned long long)arg1;
- (unsigned long long)baseItem;
- (void)setBaseField:(long long)arg1;
- (long long)baseField;
- (id)init;

@end

