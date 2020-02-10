//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestUpdateAssertionRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOResourceManifestUpdateAssertionRecord : NSObject <GEOResourceManifestUpdateAssertionRecord>
{
    NSString *_process;
    NSString *_reason;
    double _creationTimestamp;
}

@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *process; // @synthesize process=_process;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
- (id)initWithProcess:(id)arg1 reason:(id)arg2 creationTimestamp:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
