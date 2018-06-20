//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXMDescribing.h"
#import "NSSecureCoding.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>
{
    BOOL _connected;
    BOOL _enabled;
    id <AXMVisionEngineNodeConnectionDelegate> _delegate;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_nodeQueue;
}

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue; // @synthesize nodeQueue=_nodeQueue;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <AXMVisionEngineNodeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (id)axmDescription;
- (void)disconnect;
- (void)connect:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)freeResources;
- (void)nodeInitialize;
- (id)initWithIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL requiresVisionFramework;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
