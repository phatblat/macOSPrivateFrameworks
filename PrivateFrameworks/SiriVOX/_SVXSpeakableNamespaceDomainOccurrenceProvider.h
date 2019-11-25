//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFSpeakableNamespaceProvider.h"

@class NSSet, NSString;

@interface _SVXSpeakableNamespaceDomainOccurrenceProvider : NSObject <AFSpeakableNamespaceProvider>
{
    NSString *_domain;
    unsigned long long _count;
    NSSet *_deferredMessageKeys;
}

+ (id)providerForDomain:(id)arg1;
@property(copy, nonatomic) NSSet *deferredMessageKeys; // @synthesize deferredMessageKeys=_deferredMessageKeys;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)stringForExpression:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

