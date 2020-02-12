//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KCAESGCMDuplexSession, KCSRPServerContext, NSData, NSMutableDictionary, NSString, OTControl, OTJoiningConfiguration;

@interface KCJoiningAcceptSession : NSObject
{
    int _state;
    int _piggy_version;
    unsigned long long _dsid;
    id <KCJoiningAcceptSecretDelegate> _secretDelegate;
    id <KCJoiningAcceptCircleDelegate> _circleDelegate;
    KCSRPServerContext *_context;
    KCAESGCMDuplexSession *_session;
    NSData *_startMessage;
    NSString *_piggy_uuid;
    NSData *_octagon;
    OTJoiningConfiguration *_joiningConfiguration;
    OTControl *_otControl;
    NSMutableDictionary *_defaults;
}

+ (id)sessionWithInitialMessage:(id)arg1 secretDelegate:(id)arg2 circleDelegate:(id)arg3 dsid:(unsigned long long)arg4 error:(id *)arg5;
@property(retain, nonatomic) NSMutableDictionary *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) OTControl *otControl; // @synthesize otControl=_otControl;
@property(retain, nonatomic) OTJoiningConfiguration *joiningConfiguration; // @synthesize joiningConfiguration=_joiningConfiguration;
@property(retain) NSData *octagon; // @synthesize octagon=_octagon;
@property int piggy_version; // @synthesize piggy_version=_piggy_version;
@property(retain) NSString *piggy_uuid; // @synthesize piggy_uuid=_piggy_uuid;
@property(retain) NSData *startMessage; // @synthesize startMessage=_startMessage;
@property(readonly) int state; // @synthesize state=_state;
@property(readonly) KCAESGCMDuplexSession *session; // @synthesize session=_session;
@property(readonly) KCSRPServerContext *context; // @synthesize context=_context;
@property __weak id <KCJoiningAcceptCircleDelegate> circleDelegate; // @synthesize circleDelegate=_circleDelegate;
@property __weak id <KCJoiningAcceptSecretDelegate> secretDelegate; // @synthesize secretDelegate=_secretDelegate;
@property(readonly) unsigned long long dsid; // @synthesize dsid=_dsid;
- (void).cxx_destruct;
- (void)setConfiguration:(id)arg1;
- (void)setControlObject:(id)arg1;
- (_Bool)isDone;
- (id)processMessage:(id)arg1 error:(id *)arg2;
- (id)processApplication:(id)arg1 error:(id *)arg2;
- (id)createPairingMessageFromJoiningMessage:(id)arg1 error:(id *)arg2;
- (id)processSOSApplication:(id)arg1 error:(id *)arg2;
- (id)processResponse:(id)arg1 error:(id *)arg2;
- (id)processInitialMessage:(id)arg1 error:(id *)arg2;
- (BOOL)shouldAcceptOctagonRequests;
- (id)copyChallengeMessage:(id *)arg1;
- (id)description;
- (id)stateString;
- (id)initWithSecretDelegate:(id)arg1 circleDelegate:(id)arg2 dsid:(unsigned long long)arg3 rng:(struct ccrng_state *)arg4 error:(id *)arg5;
- (_Bool)setupSession:(id *)arg1;

@end

