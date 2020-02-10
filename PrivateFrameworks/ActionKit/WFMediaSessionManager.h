//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSBag, AMSMediaTask, NSString;

@interface WFMediaSessionManager : NSObject
{
    AMSMediaTask *_task;
    AMSBag *_bag;
    NSString *_clientIdentifier;
    NSString *_clientVersion;
}

@property(readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) AMSMediaTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)lookupMediaType:(long long)arg1 withIdentifiers:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2;
- (id)init;

@end
