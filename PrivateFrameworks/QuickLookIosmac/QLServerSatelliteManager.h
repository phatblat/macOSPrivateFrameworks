//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSUUID;

@interface QLServerSatelliteManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_satellites;
    NSMutableDictionary *_identifiers;
    NSMutableDictionary *_sandboxVariants;
    NSUUID *_unsandboxedIdentifier;
    NSUUID *_previewsIdentifier;
    NSUUID *_generalIdentifier;
    NSUUID *_personalIdentifier;
}

+ (id)defaultManager;
@property(retain) NSUUID *unsandboxedIdentifier; // @synthesize unsandboxedIdentifier=_unsandboxedIdentifier;
@property(retain) NSUUID *previewsIdentifier; // @synthesize previewsIdentifier=_previewsIdentifier;
@property(retain) NSUUID *personalIdentifier; // @synthesize personalIdentifier=_personalIdentifier;
@property(retain) NSUUID *generalIdentifier; // @synthesize generalIdentifier=_generalIdentifier;
- (id)satelliteForRequest:(struct __QLRequest *)arg1;
- (id)_identifierForRequest:(struct __QLRequest *)arg1 generatorIDs:(id *)arg2 customName:(id *)arg3;
- (void)_setupGeneratorsMapping;
- (void)dealloc;
- (id)init;

@end
