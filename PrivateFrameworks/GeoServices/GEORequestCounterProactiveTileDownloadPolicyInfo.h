//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate;

@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject <NSSecureCoding>
{
    unsigned char _policy;
    NSDate *_startTimestamp;
    NSDate *_endTimestamp;
    unsigned long long _tilesConsidered;
    unsigned long long _successCount;
    unsigned long long _failureCount;
    unsigned long long _bytesDownloaded;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(readonly, nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property(readonly, nonatomic) unsigned long long successCount; // @synthesize successCount=_successCount;
@property(readonly, nonatomic) unsigned long long tilesConsidered; // @synthesize tilesConsidered=_tilesConsidered;
@property(readonly, nonatomic) NSDate *endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) NSDate *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) unsigned char policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicy:(unsigned char)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 tilesConsidered:(unsigned long long)arg4 successCount:(unsigned long long)arg5 failureCount:(unsigned long long)arg6 bytesDownloaded:(unsigned long long)arg7;

@end

