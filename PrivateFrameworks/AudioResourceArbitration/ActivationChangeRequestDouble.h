//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "dspd_ActivationChangeRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ActivationChangeRequestDouble : NSObject <dspd_ActivationChangeRequest>
{
    unsigned int session;
    struct StringRef category;
    struct StringRef mode;
    vector_123a35f9 deviceDescriptions;
    vector_b9981e18 ioControllerDescriptions;
    vector_66ffd461 portDescriptions;
    vector_d1b3d51b streamDescriptions;
    optional_74709a54 microphonePreferences;
    optional_b75ce017 initiationTrigger;
}

@property(nonatomic) vector_d1b3d51b streamDescriptions; // @synthesize streamDescriptions;
@property(nonatomic) unsigned int session; // @synthesize session;
@property(nonatomic) vector_66ffd461 portDescriptions; // @synthesize portDescriptions;
@property(nonatomic) struct StringRef mode; // @synthesize mode;
@property(nonatomic) optional_74709a54 microphonePreferences; // @synthesize microphonePreferences;
@property(nonatomic) vector_b9981e18 ioControllerDescriptions; // @synthesize ioControllerDescriptions;
@property(nonatomic) optional_b75ce017 initiationTrigger; // @synthesize initiationTrigger;
@property(nonatomic) vector_123a35f9 deviceDescriptions; // @synthesize deviceDescriptions;
@property(nonatomic) struct StringRef category; // @synthesize category;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

