//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "aura_PortPriv.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface aura_PortPrivImpl : NSObject <aura_PortPriv>
{
    shared_ptr_c3639ab0 reactor_;
}

+ (id)portWithReactor:(shared_ptr_c3639ab0)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (expected_b2b3f2ff)controlForClassID:(unsigned int)arg1 scope:(const unsigned int *)arg2 element:(unsigned int)arg3;
- (vector_53af465e)controlsForScope:(const unsigned int *)arg1;
- (vector_53af465e)controls;
@property(readonly, nonatomic) optional_cd8a9b08 manufacturerName;
@property(readonly, nonatomic) optional_cd8a9b08 modelName;
@property(readonly, nonatomic) optional_cd8a9b08 name;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2 qualifier:(id)arg3;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1 qualifier:(id)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1;
- (BOOL)isPropertySettable:(const struct Address *)arg1;
- (BOOL)hasProperty:(const struct Address *)arg1;
@property(readonly, nonatomic) unsigned int stockClassID;
@property(readonly, nonatomic) unsigned int classID;
@property(readonly, nonatomic) unsigned long long objectID;
- (struct error_code)setTurnByTurnUseAllowed:(_Bool)arg1;
@property(readonly, nonatomic) optional_34114161 turnByTurnUseAllowed;
@property(readonly, nonatomic) vector_a7f3f6e7 ratePartners;
@property(readonly, nonatomic) vector_a7f3f6e7 formatPartners;
@property(readonly, nonatomic) vector_a7f3f6e7 hardwarePartners;
@property(readonly, nonatomic) optional_cd8a9b08 sdkClientName;
@property(readonly, nonatomic) optional_cd8a9b08 pickerName;
@property(readonly, nonatomic) struct StringRef uid;
@property(readonly, nonatomic) unsigned int connectionType;
@property(readonly, nonatomic) unsigned long long endpointType;
@property(readonly, nonatomic) unsigned char direction;
@property(readonly, nonatomic) unsigned int portType;
@property(readonly, nonatomic) optional_8c74af2e device;
@property(readonly, nonatomic) weak_ptr_cf97627c reactor;
- (id)initWithReactor:(shared_ptr_c3639ab0)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
