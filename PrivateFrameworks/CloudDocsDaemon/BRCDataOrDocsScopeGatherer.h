//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, BRCItemGlobalID, BRCNotificationPipe, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCDataOrDocsScopeGatherer : NSObject
{
    BRCNotificationPipe *_pipe;
    CDUnknownBlockType _gatherReply;
    NSMutableArray *_gatheringAppLibraries;
    unsigned long long _gatheringRankCur;
    unsigned long long _gatheringRankMax;
    NSString *_gatheringNamePrefix;
    BRCAccountSession *_session;
    BRCItemGlobalID *_gatheredChildrenItemGlobalID;
}

@property(retain, nonatomic) BRCItemGlobalID *gatheredChildrenItemGlobalID; // @synthesize gatheredChildrenItemGlobalID=_gatheredChildrenItemGlobalID;
- (void).cxx_destruct;
- (void)invalidate;
- (void)done;
- (CDUnknownBlockType)_popGatherReply;
- (void)gatherWithBatchSize:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 gatherReply:(CDUnknownBlockType)arg5;

@end

