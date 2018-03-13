//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_nw_browser>, NSSet, NWBrowseDescriptor, NWParameters;

@interface NWBrowser : NSObject
{
    NWBrowseDescriptor *_descriptor;
    NWParameters *_parameters;
    NSObject<OS_nw_browser> *_internalBrowser;
    NSSet *_internalDiscoveredEndpoints;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(retain) NSSet *internalDiscoveredEndpoints; // @synthesize internalDiscoveredEndpoints=_internalDiscoveredEndpoints;
@property(readonly) NSObject<OS_nw_browser> *internalBrowser; // @synthesize internalBrowser=_internalBrowser;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly) NWBrowseDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *discoveredEndpoints;
- (id)copyDiscoveredEndpoints;
- (void)dealloc;
- (void)cancel;
- (id)initWithDescriptor:(id)arg1 parameters:(id)arg2;
- (void)setUpdateHandler;

@end

