//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NWStatisticsManager;

@interface NWStatisticsSource : NSObject
{
    unsigned int _filter;
    struct nstat_counts _last_counts;
    BOOL _removing;
    unsigned int _provider;
    id <NWStatisticsSourceDelegate> _delegate;
    NWStatisticsManager *_manager;
    unsigned long long _reference;
    unsigned long long _countsSeqno;
    unsigned long long _descriptorSeqno;
}

+ (id)createSourceForProvider:(unsigned int)arg1 srcRef:(unsigned long long)arg2 manager:(id)arg3;
@property(readonly) unsigned int provider; // @synthesize provider=_provider;
@property unsigned long long descriptorSeqno; // @synthesize descriptorSeqno=_descriptorSeqno;
@property unsigned long long countsSeqno; // @synthesize countsSeqno=_countsSeqno;
@property BOOL removing; // @synthesize removing=_removing;
@property unsigned long long reference; // @synthesize reference=_reference;
@property(readonly) NWStatisticsManager *manager; // @synthesize manager=_manager;
@property(retain) id <NWStatisticsSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)currentSnapshot;
- (id)_currentSnapshot;
- (void)queryUpdate;
- (void)queryDescription;
- (void)queryCounts;
- (id)initWithManager:(id)arg1 source:(unsigned long long)arg2 provider:(unsigned int)arg3;
- (BOOL)handleMessage:(struct nstat_msg_hdr *)arg1 length:(long long)arg2;
- (BOOL)_handleDescriptor:(void *)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3;
- (BOOL)handleCounts:(const struct nstat_counts *)arg1;
- (int)handleDescriptor:(void *)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3;
@property(readonly) const struct nstat_counts *_nstat_counts;
@property(readonly) unsigned long long snapshotRevision;
@property(readonly) unsigned long long sourceIdentifier;
- (id)init;

@end

