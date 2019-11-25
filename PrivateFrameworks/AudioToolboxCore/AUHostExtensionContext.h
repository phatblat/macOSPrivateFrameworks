//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSExtensionContext.h"

#import "AUAudioUnitHostProtocol.h"
#import "_AURemoteParameterSynchronization.h"

@class AUAudioUnit, NSExtension, NSObject<OS_dispatch_queue>, NSUUID, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol, _AURemoteParameterSynchronization>
{
    NSObject<OS_dispatch_queue> *mParameterQueue;
    NSExtension *_extension;
    NSUUID *_requestIdentifier;
    AUAudioUnit *_audioUnit;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) __weak AUAudioUnit *audioUnit; // @synthesize audioUnit=_audioUnit;
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(BOOL)arg4;
- (void)propertiesChanged:(id)arg1;
@property(readonly, nonatomic) __weak NSXPCConnection *xpcConnection;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end

