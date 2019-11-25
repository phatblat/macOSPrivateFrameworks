//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDResources, EDString;

__attribute__((visibility("hidden")))
@interface EDTableColumn : NSObject
{
    EDResources *mResources;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setTotalsRowLabel:(id)arg1;
- (id)totalsRowLabel;
- (void)setUniqueName:(id)arg1;
- (id)uniqueName;
- (void)setName:(id)arg1;
- (id)name;
- (void)setDataAreaDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)headerRowDxf;
- (id)initWithResources:(id)arg1;
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;
- (unsigned long long)dataAreaDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)totalsRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;
- (unsigned long long)headerRowDxfIndex;

@end

