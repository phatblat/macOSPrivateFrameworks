//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "aura_StreamPriv.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface aura_StreamPrivImpl : NSObject <aura_StreamPriv>
{
    shared_ptr_25d7547e reactor_;
}

+ (id)streamWithReactor:(shared_ptr_25d7547e)arg1;
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
- (struct error_code)setPublicFormat:(struct AudioFormat)arg1;
@property(readonly, nonatomic) int latency;
@property(readonly, nonatomic) vector_fefeec75 supportedPublicFormats;
@property(readonly, nonatomic) vector_fefeec75 supportedPrivateFormats;
@property(readonly, nonatomic) struct AudioFormat publicFormat;
@property(readonly, nonatomic) struct AudioFormat privateFormat;
@property(readonly, nonatomic) unsigned int startingChannel;
@property(readonly, nonatomic) unsigned char direction;
@property(readonly, nonatomic) __weak id <aura_Device> device;
@property(readonly, nonatomic) weak_ptr_f7fee0cb reactor;
- (id)initWithReactor:(shared_ptr_25d7547e)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

