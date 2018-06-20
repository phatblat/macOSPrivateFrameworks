//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPImmutableObject.h"

@class NSDate;

@protocol MSPHistoryEntry <MSPImmutableObject>
- (BOOL)isFailed;
- (BOOL)tracksRAPReportingOnly;
- (BOOL)isUserVisibleDuplicateOfEntry:(id <MSPHistoryEntry>)arg1;
- (NSDate *)usageDate;
- (void)ifSearch:(void (^)(id <MSPHistoryEntrySearch>))arg1 ifRoute:(void (^)(id <MSPHistoryEntryRoute>))arg2 ifPlaceDisplay:(void (^)(id <MSPHistoryEntryPlaceDisplay>))arg3 ifTransitLineItem:(void (^)(id <MSPHistoryEntryTransitLineItem>))arg4;
@end

