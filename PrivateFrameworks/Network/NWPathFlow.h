//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWPrettyDescription.h"

@class NSObject<OS_nw_path_flow>, NSUUID, NWEndpoint, NWInterface;

__attribute__((visibility("hidden")))
@interface NWPathFlow : NSObject <NWPrettyDescription>
{
    NSObject<OS_nw_path_flow> *_internalPathFlow;
}

@property(readonly) NSObject<OS_nw_path_flow> *internalPathFlow; // @synthesize internalPathFlow=_internalPathFlow;
- (void).cxx_destruct;
- (id)privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
@property(readonly, nonatomic) BOOL supportsIPv6;
@property(readonly, nonatomic) BOOL supportsIPv4;
@property(readonly, nonatomic, getter=isDefunct) BOOL defunct;
@property(readonly, nonatomic, getter=isDirect) BOOL direct;
@property(readonly, nonatomic, getter=isLocal) BOOL local;
@property(readonly, nonatomic, getter=isAssigned) BOOL assigned;
@property(readonly, nonatomic, getter=isViable) BOOL viable;
@property(readonly, nonatomic) unsigned int nexusPort;
@property(readonly, nonatomic) NSUUID *nexusInstance;
@property(readonly, nonatomic) NSUUID *nexusAgent;
@property(readonly, nonatomic) NSUUID *flowID;
@property(readonly, nonatomic) NWEndpoint *remoteEndpoint;
@property(readonly, nonatomic) NWEndpoint *localEndpoint;
@property(readonly, nonatomic) NWInterface *interface;
- (id)initWithPathFlow:(id)arg1;

@end

