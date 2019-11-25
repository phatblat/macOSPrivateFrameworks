//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TBFetchRequest.h"

@class NSDictionary, NSString, TBTileFetchRequestDescriptor;

@interface TBTileFetchRequest : NSObject <TBFetchRequest, NSCopying>
{
    BOOL _cacheable;
    unsigned long long _sourcePolicy;
    NSDictionary *userInfo;
    CDUnknownBlockType resultsHandler;
    CDUnknownBlockType preferLocalHandler;
    TBTileFetchRequestDescriptor *_descriptor;
}

+ (id)fetchRequestWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(BOOL)arg3;
@property(retain, nonatomic) TBTileFetchRequestDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(copy, nonatomic) CDUnknownBlockType preferLocalHandler; // @synthesize preferLocalHandler;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(nonatomic) BOOL cacheable; // @synthesize cacheable=_cacheable;
@property(nonatomic) unsigned long long sourcePolicy; // @synthesize sourcePolicy=_sourcePolicy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)doesLocalResultsSatisfyRequest:(id)arg1;
- (void)handlePreferLocalResponse:(id)arg1;
- (void)handleResponse:(id)arg1;
- (id)initWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

