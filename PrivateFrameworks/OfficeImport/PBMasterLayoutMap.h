//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PBMasterLayoutMap : NSObject
{
    NSMutableDictionary *mMasterIdToMasterInfoMap;
    NSMutableDictionary *mTitleIdToMasterIdMap;
}

+ (id)masterLayoutMap;
- (void).cxx_destruct;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (id)masterInfoForSlideHolder:(id)arg1;
- (int)masterIdForTitleId:(int)arg1;
- (void)setMasterId:(int)arg1 forTitleId:(int)arg2;
- (id)allMasterIds;
- (id)masterInfoForMasterId:(int)arg1;
- (void)setMasterInfo:(id)arg1 forMasterId:(int)arg2;
- (id)init;

@end

