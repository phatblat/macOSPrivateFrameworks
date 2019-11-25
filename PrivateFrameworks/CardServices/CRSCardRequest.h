//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CardServices/CRSRequest.h>

#import "CRSCardRequesting.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface CRSCardRequest : CRSRequest <CRSCardRequesting>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadsBundleServices;
    id <CRContent> _content;
    unsigned long long _format;
    NSSet *_excludedServiceIdentifiers;
}

+ (void)initialize;
+ (void)registerService:(id)arg1;
@property(copy, nonatomic, getter=_excludedServiceIdentifiers, setter=_setExcludedServiceIdentifiers:) NSSet *excludedServiceIdentifiers; // @synthesize excludedServiceIdentifiers=_excludedServiceIdentifiers;
@property(nonatomic) BOOL loadsBundleServices; // @synthesize loadsBundleServices=_loadsBundleServices;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
@property(retain, nonatomic) id <CRContent> content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)_tryRemainingCardServices:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_loadAndRegisterBundleServices:(CDUnknownBlockType)arg1;
- (void)startWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithContent:(id)arg1 format:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

